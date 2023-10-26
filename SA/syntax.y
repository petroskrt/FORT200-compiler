%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "hashtbl.h"
    
    /*include file yyin which is declared somewhere else*/
    extern FILE *yyin;
    extern int yylex();
    extern void yyerror(const char* err); 

    HASHTBL *hashtbl; /* Define hashtable */
    int scope = 0; /* Define initial scope */

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
%token T_FUNCTION                   "function"
%token T_SUBROUTINE                 "subroutine"
%token T_END                        "end"
%token T_INTEGER                    "int"
%token T_REAL                       "real"
%token T_LOGICAL                    "logical"
%token T_CHARACTER                  "char"
%token T_COMPLEX                    "complex"
%token T_RECORD                     "record"
%token T_ENDREC                     "endrec"
%token T_LIST                       "list"
%token T_DATA                       "data"
%token T_CONTINUE                   "continue"
%token T_GOTO                       "goto"
%token T_CALL                       "call"
%token T_READ                       "read"
%token T_WRITE                      "write"
%token T_NEW                        "new"
%token T_LENGTH                     "length"
%token T_IF                         "if"
%token T_THEN                       "then"
%token T_ELSE                       "else"
%token T_ENDIF                      "endif"
%token T_DO                         "do"
%token T_ENDDO                      "enddo"
%token T_STOP                       "stop"
%token T_RETURN                     "return"


%token <strval> T_ID                         "id"


%token <intval>   T_ICONST                   "int const"
%token <realval>  T_RCONST                   "real const"
%token <strval>   T_CCONST                   "char const"     /* αν δεν δουλεψει το strval τοτε charval*/
%token <boolval>  T_LCONST                   "logical const"
%token <strval>   T_STRING                   "string const"


%token T_OROP                       ".OR."
%token T_ANDOP                      ".AND."
%token T_NOTOP                      ".NOT."
%token T_RELOP                      ".GT. or .GE. or .LT. or .LE. or .EQ. or .NE."
%token T_ADDOP                      "+ or -"
%token T_MULOP                      "*"
%token T_DIVOP                      "/"
%token T_POWEROP                    "**"


%token T_LISTFUNC                   "listfunc"


%token T_LPAREN                     "("
%token T_RPAREN                     ")"
%token T_COMMA                      ","
%token T_ASSIGN                     "="
%token T_DOT                        "."
%token T_COLON                      ":"
%token T_LBRACK                     "["
%token T_RBRACK                     "]"

%token T_EOF               0        "EOF"

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
%left  T_COMMA 
%right T_ASSIGN
%left  T_OROP
%left  T_ANDOP
%left  T_RELOP
%left  T_ADDOP
%left  T_MULOP T_DIVOP
%right T_POWEROP
%left  T_NOTOP
%left  T_LPAREN T_RPAREN T_LBRACK T_RBRACK T_DOT T_COLON 

%nonassoc LOWER_THAN_ELSE
%nonassoc T_ELSE

%start program

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
listexpression:                         T_LBRACK expressions T_RBRACK                                          
                                      | T_LBRACK T_RBRACK                                                       
                                      ;
goto_statement:                         T_GOTO label
                                      | T_GOTO T_ID T_COMMA T_LPAREN labels T_RPAREN                            { hashtbl_insert(hashtbl, $2, NULL, scope); }
                                      ;
labels:                                 labels T_COMMA label
                                      | label
                                      ;
if_statement:                           T_IF T_LPAREN expression T_RPAREN label T_COMMA label T_COMMA label                           { scope++; }
                                      | T_IF T_LPAREN expression T_RPAREN simple_statement                                            { scope++; }                
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
branch_statement:                       T_IF T_LPAREN expression T_RPAREN T_THEN body tail                               { scope++; }
                                      ;
tail:                                   T_ELSE { scope++; } body T_ENDIF                                                             { hashtbl_get(hashtbl, scope); scope--; }
                                      | T_ENDIF  %prec   LOWER_THAN_ELSE                                                             { hashtbl_get(hashtbl, scope); scope--; }
                                      ; 
loop_statement:                         T_DO {scope++;} T_ID T_ASSIGN iter_space body T_ENDDO                                      { hashtbl_insert(hashtbl, $3, NULL, scope);}     { hashtbl_get(hashtbl, scope); scope--; }
                                      ;
subprograms:                            subprograms subprogram
                                      | %empty                                                                  { }
                                      ;
subprogram:                             header body T_END                                                       { hashtbl_get(hashtbl, scope); scope--; } /*Εδώ κλείνει το scope*/
                                      ;
header:                                 type T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN                { hashtbl_insert(hashtbl, $3, NULL, scope); } { scope++; } /*Εδώ ανοίγει το scope*/
                                      | T_LIST T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN              { scope++; } { hashtbl_insert(hashtbl, $3, NULL, scope); } 
                                      | T_SUBROUTINE T_ID T_LPAREN formal_parameters T_RPAREN                   { scope++; } { hashtbl_insert(hashtbl, $2, NULL, scope); }
                                      | T_SUBROUTINE T_ID                                                       { scope++; } { hashtbl_insert(hashtbl, $2, NULL, scope); }
                                      | T_LIST error T_ID T_LPAREN formal_parameters T_RPAREN                   { yyerror("Wrong use of header"); yyerrok;}    { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      | error T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN               { yyerror("Wrong use of header"); yyerrok;}    { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      | T_LIST T_FUNCTION error T_LPAREN formal_parameters T_RPAREN             { yyerror("Wrong use of header"); yyerrok;}    
                                      | T_LIST T_FUNCTION T_ID error formal_parameters T_RPAREN                 { yyerror("Wrong use of header"); yyerrok;}    { hashtbl_insert(hashtbl, $3, NULL, scope); }
                                      ;

formal_parameters:                      type vars T_COMMA formal_parameters
                                      | type vars
                                      ;

%%

int main(int argc, char *argv[]){
  int token;

  if (!(hashtbl = hashtbl_create(10, NULL))){
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
