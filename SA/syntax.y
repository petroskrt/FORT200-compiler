%{
    #include "settings.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>
    #include <stdbool.h>
    #include "hashtbl.h"
    
    /*include file yyin which is declared somewhere else*/
    extern FILE *yyin;
    extern char *yytext;
    extern int yylex();
    void yyerror(const char *message, int type);   

    HASHTBL *hashtbl; /* Define hashtable */
    int scope = 0; /* Define initial scope */
    int error_count = 0;

    extern int lineno,line_init;
    extern char str_buf[256];
    extern char* str_buf_ptr;
%}

/*For good error reporting*/
%define parse.error verbose


/*union to include the CONST types*/
%union {
    int intval;
    float realval;
    char charval;
    char* strval;
    _Bool boolval;
} 

/* <strval> -> Μπακάλικη λύση για τα warnings στο terminal τα οποία λύνονται στη σημασιολογική ανάλυση*/
%token <strval> T_FUNCTION                   "function"
%token <strval> T_SUBROUTINE                 "subroutine"
%token <strval> T_END                        "end"
%token <strval> T_INTEGER                    "int"
%token <strval> T_REAL                       "real"
%token <strval> T_LOGICAL                    "logical"
%token <strval> T_CHARACTER                  "char"
%token <strval> T_COMPLEX                    "complex"
%token <strval> T_RECORD                     "record"
%token <strval> T_ENDREC                     "endrec"
%token <strval> T_LIST                       "list"
%token <strval> T_DATA                       "data"
%token <strval> T_CONTINUE                   "continue"
%token <strval> T_GOTO                       "goto"
%token <strval> T_CALL                       "call"
%token <strval> T_READ                       "read"
%token <strval> T_WRITE                      "write"
%token <strval> T_NEW                        "new"
%token <strval> T_LENGTH                     "length"
%token <strval> T_IF                         "if"
%token <strval> T_THEN                       "then"
%token <strval> T_ELSE                       "else"
%token <strval> T_ENDIF                      "endif"
%token <strval> T_DO                         "do"
%token <strval> T_ENDDO                      "enddo"
%token <strval> T_STOP                       "stop"
%token <strval> T_RETURN                     "return"


%token <strval> T_ID                         "id"


%token <intval>   T_ICONST                   "int const"
%token <realval>  T_RCONST                   "real const"
%token <strval>   T_CCONST                   "char const"     /* αν δεν δουλεψει το strval τοτε charval*/
%token <boolval>  T_LCONST                   "logical const"
%token <strval>   T_STRING                   "string const"


%token <strval> T_OROP                       ".OR."
%token <strval> T_ANDOP                      ".AND."
%token <strval> T_NOTOP                      ".NOT."
%token <strval> T_RELOP                      ".GT. or .GE. or .LT. or .LE. or .EQ. or .NE."
%token <strval> T_ADDOP                      "+ or -"
%token <strval> T_MULOP                      "*"
%token <strval> T_DIVOP                      "/"
%token <strval> T_POWEROP                    "**"


%token <strval> T_LISTFUNC                   "listfunc"


%token <strval> T_LPAREN                     "("
%token <strval> T_RPAREN                     ")"
%token <strval> T_COMMA                      ","
%token <strval> T_ASSIGN                     "="
%token <strval> T_DOT                        "."
%token <strval> T_COLON                      ":"
%token <strval> T_LBRACK                     "["
%token <strval> T_RBRACK                     "]"

%token <strval> T_EOF               0        "EOF"

 /* types for the non-terninal(left) side */

/*
%type <strval> program body declarations type vars undef_variable dims dim fields field vals 
%type <strval> value_list values value sign constant simple_constant complex_constant statements 
%type <strval> labeled_statement label statement simple_statement assignment variable expressions 
%type <strval> expression listexpression goto_statement labels if_statement subroutine_call io_statement 
%type <strval> read_list read_item iter_space step write_list write_item compound_statement branch_statement 
%type <strval> tail loop_statement subprograms subprogram header formal_parameters 
*/  

/* precedence */
%left T_COMMA 
%right T_ASSIGN
%left T_OROP
%left T_ANDOP
%left T_RELOP
%left T_ADDOP
%left T_MULOP T_DIVOP
%right T_NOTOP T_POWEROP
%left T_LPAREN T_RPAREN T_LBRACK T_RBRACK T_DOT T_COLON 

%nonassoc LOWER_THAN_ELSE

%%

program:                                body T_END subprograms
                                        ;
body:                                   declarations statements
                                        ;
declarations:                           declarations type vars
                                      | declarations T_RECORD fields T_ENDREC vars
                                      | declarations T_DATA vals
                                      | %empty                                                               { }
                                      ;
type:                                   T_INTEGER 
                                      | T_REAL
                                      | T_LOGICAL 
                                      | T_CHARACTER 
                                      | T_COMPLEX
                                      ;
vars:                                   vars T_COMMA undef_variable
                                      | undef_variable
                                      ;
undef_variable:                         T_LIST undef_variable
                                      | T_ID T_LPAREN dims T_RPAREN                { hashtbl_insert(hashtbl, $1, NULL, scope); }
                                      | T_ID                                       { hashtbl_insert(hashtbl, $1, NULL, scope); }
                                      ;
dims:                                   dims T_COMMA dim
                                      | dim
                                      ;
dim:                                    T_ICONST 
                                      | T_ID                                       { hashtbl_insert(hashtbl, $1, NULL, scope); }
                                      ;
fields:                                 fields field
                                      | field
                                      ;
field:                                  type vars
                                      | T_RECORD fields T_ENDREC vars
                                      ;
vals:                                   vals T_COMMA T_ID value_list               { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      | T_ID value_list                            { hashtbl_insert(hashtbl, $1, NULL, scope); }
                                      ;

value_list:                             T_DIVOP values T_DIVOP
                                        ;
values:                                 values T_COMMA value
                                      | value
                                      ;
value:                                  sign constant
                                      | T_STRING
                                      ;
sign:                                   T_ADDOP 
                                      | %empty                                               { }
                                      ;
constant:                               simple_constant
                                      | complex_constant
                                      ;
simple_constant:                        T_ICONST 
                                      | T_RCONST 
                                      | T_LCONST 
                                      | T_CCONST
                                      ;
complex_constant:                       T_LPAREN T_RCONST T_COLON sign T_RCONST T_RPAREN
                                        ;
statements:                             statements labeled_statement
                                      | labeled_statement
                                      ;
labeled_statement:                      label statement
                                      | statement
                                      ;
label:                                  T_ICONST
                                        ;
statement:                              simple_statement
                                      | compound_statement
                                      ;
simple_statement:                       assignment
                                      | goto_statement
                                      | if_statement
                                      | subroutine_call
                                      | io_statement
                                      | T_CONTINUE
                                      | T_RETURN
                                      | T_STOP
                                      ;
assignment:                             variable T_ASSIGN expression
                                      | variable T_ASSIGN T_STRING
                                      ;
variable:                               variable T_DOT T_ID                             { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      | variable T_LPAREN expressions T_RPAREN
                                      | T_LISTFUNC T_LPAREN expression T_RPAREN
                                      | T_ID                                            { hashtbl_insert(hashtbl, $1, NULL, scope); }
                                      ;
expressions:                            expressions T_COMMA expression
                                      | expression
                                      ;
expression:                             expression T_OROP expression
                                      | expression T_ANDOP expression
                                      | expression T_RELOP expression
                                      | expression T_ADDOP expression
                                      | expression T_MULOP expression
                                      | expression T_DIVOP expression
                                      | expression T_POWEROP expression
                                      | T_NOTOP expression
                                      | T_ADDOP expression
                                      | variable
                                      | simple_constant
                                      | T_LENGTH T_LPAREN expression T_RPAREN
                                      | T_NEW T_LPAREN expression T_RPAREN
                                      | T_LPAREN expression T_RPAREN
                                      | T_LPAREN expression T_COLON expression T_RPAREN
                                      | listexpression
                                      ;
listexpression:                         T_LBRACK expressions T_RBRACK                                          { scope++; }          { hashtbl_get(hashtbl, scope); scope--; }
                                      | T_LBRACK T_RBRACK                                                      { scope++; }          { hashtbl_get(hashtbl, scope); scope--; } 
                                      ;
goto_statement:                         T_GOTO label
                                      | T_GOTO T_ID T_COMMA T_LPAREN labels T_RPAREN                            { hashtbl_insert(hashtbl, $2, NULL, scope); }
                                      ;
labels:                                 labels T_COMMA label
                                      | label
                                      ;
if_statement:                           T_IF T_LPAREN expression T_RPAREN label T_COMMA label T_COMMA label     { scope++; }
                                      | T_IF T_LPAREN expression T_RPAREN simple_statement                      { scope++; }        
                                      ;
subroutine_call:                        T_CALL variable
                                        ;
io_statement:                           T_READ read_list
                                      | T_WRITE write_list
                                      ;
read_list:                              read_list T_COMMA read_item
                                      | read_item
                                      ;
read_item:                              variable
                                      | T_LPAREN read_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN            { hashtbl_insert(hashtbl, $4, NULL, scope); }
                                      ;
iter_space:                             expression T_COMMA expression step
                                        ;
step:                                   T_COMMA expression
                                      | %empty                                                                            { }
                                      ;
write_list:                             write_list T_COMMA write_item
                                      | write_item
                                      ;
write_item:                             expression
                                      | T_LPAREN write_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN           { hashtbl_insert(hashtbl, $4, NULL, scope); }
                                      | T_STRING
                                      ;
compound_statement:                     branch_statement
                                      | loop_statement
                                      ;
branch_statement:                       T_IF T_LPAREN expression T_RPAREN T_THEN body tail
                                        ;
tail:                                   T_ELSE body T_ENDIF                                                     { scope++; }
                                      | T_ENDIF  %prec   LOWER_THAN_ELSE                                                             { hashtbl_get(hashtbl, scope); scope--; }
                                      ; 
loop_statement:                         T_DO T_ID T_ASSIGN iter_space body T_ENDDO                              { hashtbl_insert(hashtbl, $2, NULL, scope); scope++;}     { hashtbl_get(hashtbl, scope); scope--; }
                                        ;
subprograms:                            subprograms subprogram
                                      | %empty                                                                  { }
                                      ;
subprogram:                             header body T_END                                                       { hashtbl_get(hashtbl, scope); scope--; } /*Εδώ κλείνει το scope*/
                                        ;
header:                                 type T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN                { hashtbl_insert(hashtbl, $3, NULL, scope); { scope++; } }  /*Εδώ ανοίγει το scope*/
                                      | T_LIST T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN              { hashtbl_insert(hashtbl, $3, NULL, scope); } 
                                      | T_SUBROUTINE T_ID T_LPAREN formal_parameters T_RPAREN                   { hashtbl_insert(hashtbl, $2, NULL, scope); }
                                      | T_SUBROUTINE T_ID                                                       { hashtbl_insert(hashtbl, $2, NULL, scope); }
                                      | T_LIST error T_ID T_LPAREN formal_parameters T_RPAREN                   { yyerror("Wrong use of header", 0); yyerrok;}    { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      | error T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN               { yyerror("Wrong use of header", 0); yyerrok;}    { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      | T_LIST T_FUNCTION error T_LPAREN formal_parameters T_RPAREN             { yyerror("Wrong use of header", 0); yyerrok;}    
                                      | T_LIST T_FUNCTION T_ID error formal_parameters T_RPAREN                 { yyerror("Wrong use of header", 0); yyerrok;}    { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      ;

formal_parameters:                      type vars T_COMMA formal_parameters
                                      | type vars
                                      ;

%%

int main(int argc, char *argv[]){
  int token;

  if (!(hashtbl = hashtbl_create(10,NULL))){
    puts("Error, failed to initialize hashtable");
    exit(EXIT_FAILURE);
  }
    
   /*Read File*/ 
   if(argc > 1){
       yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); 
            return EXIT_FAILURE;
        }
    }

    /*yyparse() does syntax analysis*/
    yyparse();

    fclose(yyin);
    hashtbl_destroy(hashtbl);
    return 0;
}

void yyerror(const char *message, int type)
{
    error_count++;
    
    if(type==0){
		printf("-> ERROR at line %d caused by %s: %s\n", lineno, yytext, message);
    }else if(type==1){
		*str_buf_ptr = '\0'; // String or Comment Error. Cleanup old chars stored in buffer.
		printf("-> ERROR at line %d near \"%s\": %s\n", lineno, str_buf, message);
	}
    type=0;
    if(MAX_ERRORS <= 0) return;
    if(error_count == MAX_ERRORS){
        printf("Max errors (%d) detected\n", MAX_ERRORS);
        exit(-1);
    }
}
