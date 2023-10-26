%{
    #include "tokens.h"
    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    char str_buf[256];
    int error_counter = 0;

    int str_to_int(char *str);
    float str_to_real(char *str);
    bool str_to_bool(const char *str);
    void token_print(int token_id);
    void yyerror(const char* err);
%}

/*Ανάγνωση ενός μόνο αρχείου κάθε φορά*/
%option noyywrap

%option case-insensitive

/*Μεταβλητή τύπου int από το ίδιο το flex. Κάθε φορά που θα συναντα το flex */
/*τον χαρακτήρα νέας γραμμής η μεταβλητή αυξάνεται αυτόματα κατα 1*/
%option yylineno

/*Δήλωση υπολεκτικών αναλυτών για τα Strings*/
%x STRING
%x SINGLE_LINE_COMMENT

DIGIT          [0-9]
LETTER         [a-zA-Z]
ALPHANUM       {LETTER}|{DIGIT}
ALPHANUM_      [a-zA-Z0-9_]
ASCII          [ !"#$%&'()*+,-./:;<=>?@\[\\\]^_`{|}~]


/*Αναγνωριστικά*/
IDENTIFIER     _*[a-zA-Z][a-zA-Z0-9_]*

/*Απλές σταθερές*/
LCONST         (".TRUE.")|(".FALSE.")
CCONST         '(([^\\])|(\\[ntfrbv]))'|'{ALPHANUM}'|'{ASCII}'
ICONST         (0*[0Η]*[1-9A-F][0-9A-F]*)|([1-9][0-9]*)|0      
RCONST         ((0|[.1-9][0-9]*)(\.[0-9]+)?((E)(-)?[0-9]+)?)|([0H][A-F0-9]*\.[0-9A-F]*)|([0B][0-1][0-9]*\.[0-1]+)

%%
  

      /* Λέξεις κλειδιά */
"FUNCTION"                                                       { token_print(T_FUNCTION); return T_FUNCTION; }
"SUBROUTINE"                                                     { token_print(T_SUBROUTINE); return T_SUBROUTINE; }
"END"                                                            { token_print(T_END); return T_END; }
"INTEGER"                                                        { token_print(T_INTEGER); return T_INTEGER; }
"REAL"                                                           { token_print(T_REAL); return T_REAL; }
"LOGICAL"                                                        { token_print(T_LOGICAL); return T_LOGICAL; }
"CHARACTER"                                                      { token_print(T_CHARACTER); return T_CHARACTER; }
"COMPLEX"                                                        { token_print(T_COMPLEX); return T_COMPLEX; }
"RECORD"                                                         { token_print(T_RECORD); return T_RECORD; }
"ENDREC"                                                         { token_print(T_ENDREC); return T_ENDREC; }
"LIST"                                                           { token_print(T_LIST); return T_LIST; }
"DATA"                                                           { token_print(T_DATA); return T_DATA; }
"CONTINUE"                                                       { token_print(T_CONTINUE); return T_CONTINUE; }
"GOTO"                                                           { token_print(T_GOTO); return T_GOTO; }
"CALL"                                                           { token_print(T_CALL); return T_CALL; }
"READ"                                                           { token_print(T_READ); return T_READ; }
"WRITE"                                                          { token_print(T_WRITE); return T_WRITE; }
"NEW"                                                            { token_print(T_NEW); return T_NEW; }
"LENGTH"                                                         { token_print(T_LENGTH); return T_LENGTH; }
"IF"                                                             { token_print(T_IF); return T_IF; }
"THEN"                                                           { token_print(T_THEN); return T_THEN; }
"ELSE"                                                           { token_print(T_ELSE); return T_ELSE; }
"ENDIF"                                                          { token_print(T_ENDIF); return T_ENDIF; }
"DO"                                                             { token_print(T_DO); return T_DO; }
"ENDDO"                                                          { token_print(T_ENDDO); return T_ENDDO; }
"STOP"                                                           { token_print(T_STOP); return T_STOP; }
"RETURN"                                                         { token_print(T_RETURN); return T_RETURN; }

   /*Τελεστές*/
".OR."                                                            { token_print(T_OROP); return T_OROP; }
".AND."                                                           { token_print(T_ANDOP); return T_ANDOP; }
".NOT."                                                           { token_print(T_NOTOP); return T_NOTOP; }
".GT."|".GE."|".LT."|".LE."|".EQ."|".NE."                         { token_print(T_RELOP); return T_RELOP; }
"+"|"-"                                                           { token_print(T_ADDOP); return T_ADDOP; }
"*"                                                               { token_print(T_MULOP); return T_MULOP; }
"/"                                                               { token_print(T_DIVOP); return T_DIVOP; }
"**"                                                              { token_print(T_POWEROP); return T_POWEROP; }
   
   /*Άλλες λεπτικές μονάδες*/
"("                                                               { token_print(T_LPAREN); return T_LPAREN; }
")"                                                               { token_print(T_RPAREN); return T_RPAREN; }
","                                                               { token_print(T_COMMA); return T_COMMA; }
"="                                                               { token_print(T_ASSIGN); return T_ASSIGN; }
"."                                                               { token_print(T_DOT); return T_DOT; }
":"                                                               { token_print(T_COLON); return T_COLON; }
"["                                                               { token_print(T_LBRACK); return T_LBRACK; }
"]"                                                               { token_print(T_RBRACK); return T_RBRACK; }

C(AD*|D+)R                                                       { token_print(T_LISTFUNC); return T_LISTFUNC; }

{IDENTIFIER}                                                     { token_print(T_ID); return T_ID; }

{ICONST}                                                         { token_print(T_ICONST); return T_ICONST; }
{RCONST}                                                         { token_print(T_RCONST); return T_RCONST; }
{CCONST}                                                         { token_print(T_CCONST); return T_CCONST; }
{LCONST}                                                         { token_print(T_LCONST); return T_LCONST; }

[ \t]                                                             {  }    /*Αγνώηση κενών*/
[\n]                                                              {  }    /*Αγνώηση νέας γραμμής*/
\r\n                                                              {  }    /*Αγνώηση νέας γραμμής (linux)*/


    /*strings - υπο-αναλυτής*/
\"                             { strcpy(str_buf, ""); BEGIN(STRING); } /* Καθαρίζουμε τον Buffer και μπαίνουμε στον υπο-αναλυτή*/
<STRING>\"                     { BEGIN(INITIAL); printf("Found String: '%s' \n", str_buf); return T_STRING;} /*Βγαίνουμε από τον υπο-αναλυτή*/
<STRING>(\\\n|\\\r\n)          { } /* Νέα γραμμή στα strings -> Δεν εκτελείται κώδικας*/
<STRING>(\\.|[^"\\])           { 
                                  if (strlen(yytext) == 2) {
                                       if(strcmp(yytext, "\\n") == 0) {
                                           strcat(str_buf, "\n");
                                       } else if (strcmp(yytext, "\\t") == 0) {
                                           strcat(str_buf, "\t");
                                       } else if (strcmp(yytext, "\\r") == 0) {
                                           strcat(str_buf, "\r");
                                       } else if (strcmp(yytext, "\\f") == 0) {
                                           strcat(str_buf, "\f");
                                       } else if (strcmp(yytext, "\\b") == 0) {
                                           strcat(str_buf, "\b");
                                       } else if (strcmp(yytext, "\\v") == 0) {
                                           strcat(str_buf, "\v");
                                       } else {
                                            strcat(str_buf, &yytext[1]);
                                       }
                                  } else {
                                       strcat(str_buf, yytext); 
                                  }   
                                    
                                }  /* βρήκαμε ειδικό χαρακτήρα ή απλό */
<STRING>(\n|\r\n)              { yyerror("New line found without \\."); } 
<STRING><<EOF>>                { yyerror("End of string without closing it."); } 
<STRING>.                      { yyerror("Unknown Character."); } /*Οτιδήποτε άλλο -> Error*/

    
    /*single line comments - υπο-αναλυτής*/
"$"                                                              { printf("Comment found \n"); BEGIN(SINGLE_LINE_COMMENT); }
<SINGLE_LINE_COMMENT>(\n|\r\n)                                    { BEGIN(INITIAL); printf("Comment ended\n"); } /*Γυρνάμε από τον υποαναλυτή*/
<SINGLE_LINE_COMMENT>.                                            {  }

.                                                                 { yyerror("Unrecognised character."); }     /*Οποιοσδήποτε άλλος χαρακτήρας δεν μπορεί να αναγνωρισθεί*/ 

<INITIAL><<EOF>>                                                 { token_print(T_EOF); return T_EOF; }    /*Δήλωση τελους αρχείου*/

%%



int main(int argc, char *argv[]){
    int token;

      /*Δίαβασε αρχείο*/
    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            perror("[ERROR] Could not open file");
            return EXIT_FAILURE;
        }
    }
          /* Κάνε λεκτική ανάλυση*/
    do{
        token = yylex();
    }while(token != T_EOF);

         /* Κλείσε αρχείο και τερμάτισε λεκτικό αναλυτή*/
    fclose(yyin);
    yyterminate();
}

void token_print(int token_id) {
    if(token_id == T_ICONST){ 
        printf("[LINE %d] INTEGER TOKEN \'%s\' (%d,%s). Base 10: %d\n", yylineno, yytext, token_id, TOKEN_NAME[token_id], str_to_int(yytext));
    } else if(token_id == T_RCONST) {
        printf("[LINE %d] REAL TOKEN \'%s\' (%d,%s). Base 10: %d\n", yylineno, yytext, token_id, TOKEN_NAME[token_id], str_to_real(yytext));
    } else {
        printf("[LINE %d] TOKEN \'%s\' (%d,%s)\n", yylineno, yytext, token_id, TOKEN_NAME[token_id]);
    }
}

bool str_to_bool(const char *str) {
    return strcmp(str, "true") == 0 ? true : false;
}


int str_to_int(char *str){
    
    if(strncmp(str, "0B", 2) == 0) { /*Δυαδικός αριθμός*/
        return (int) strtoll(&str[2], NULL, 2);
    } else if(strncmp(str, "0H", 2) == 0) { /*Δεκαεξαδικός αριθμός*/
        return (int) strtoll(&str[2], NULL, 16);
    } else {
        return (int) strtoll(str, NULL, 10);
    }
}

float str_to_real(char *str) {
    if(strncmp(str, "0B", 2) == 0) { /*Δυαδικός αριθμός*/
        return (float) strtoll(&str[2], NULL, 2);
    } else if(strncmp(str, "0H", 2) == 0) { /*Δεκαεξαδικός αριθμός*/
        return (float) strtoll(&str[2], NULL, 16);
    } else {
        return (float) strtoll(str, NULL, 10);
    }
}

void yyerror(const char* err) {
    error_counter++;
    printf("[ERROR - LINE %d] %s\n", yylineno, err);

    if(error_counter == 5){
        printf("MAXIMUM ERRORS FOUND\n");
        exit(EXIT_FAILURE);
    }

    yyless(1); /*Μέθοδος πανικού*/
}
