%{
#define FLEX_DEBUG                  0
#define FLEX_SHOW_TOKENS            1
#define FLEX_SHOW_COMMENTS          1
#define FLEX_SHOW_NUMERIC           1
#define FLEX_SHOW_STRINGS           1
#define MAX_ERRORS                  0
#include "syntax.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

int lineno=1; // Program's line number
int line_init=-1; // For multiline comments & strings
int error_count = 0; 
                     
char str_buf[256];    
char* str_buf_ptr;

int yylval;

void yyerror(char *message, int type);    
void token_print(int token_id);
void NPRINT(int token_id, int base);
void RPRINT(int token_id, int base);
void CPRINT();

int HexToInt(char* str);
int BinToInt(char* str);
int DecToInt(char* str);
float BinToFloat(char* str);
float HexToFloat(char* str);
float DecToFloat(char* str);
%}

/* Read only 1 File */
%option noyywrap

/* Case insensitive tokens (e.x ClaSS == class) */
%option case-insensitive

/* Initial States */
%x SINGLE_LINE_COMMENT
%x STRING

LETTER              [a-zA-Z]
DIGIT               [0-9]
BINDIGIT            [01]
HEXDIGIT            [0-9A-F]
DECDIGIT            [1-9]{DIGIT}*
EXPONENT            E[+-]?(0|{DECDIGIT})
ALPHANUM            ({LETTER}|{DIGIT})
ALPHANUM_           ({ALPHANUM}|_)
ASCII               [ !"#$%&'()*+,-./:;<=>?@\[\\\]^_`{|}~]
WHITESPACE          [ \t]

IDENTIFIER          _*[a-zA-Z][a-zA-Z0-9_]*


/* ====[END STATEMENTS BLOCK]==== */

%%

 /* ====[RULES BLOCK]==== */

 /* Keywords */
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

C(AD*|D+)R                                                       { token_print(T_LISTFUNC); return T_LISTFUNC; }
                                                            
                                                            
 /* ID */
{IDENTIFIER}                                                    { token_print(T_ID); yylval.strval = strdup(yytext); return T_ID; } 




 /* Real Constants */
 /* REAL HEX CONSTANT */
(0H)([1-9A-F]{HEXDIGIT}*)?\.(0*[1-9A-F]+{HEXDIGIT}*|0)   { RPRINT(T_RCONST, 16); yylval.floatval = HexToFloat(yytext); return T_RCONST; }

 /* REAL BIN CONSTANT */
(0B)(1{BINDIGIT}*)?\.(0*1+{BINDIGIT}*|0)                 { RPRINT(T_RCONST, 2); yylval.floatval = BinToFloat(yytext); return T_RCONST; }
                                                            
 /* REAL DECIMAL CONSTANT */
(0|{DECDIGIT})?(\.)(0*[1-9]+{DIGIT}*|0){EXPONENT}        { RPRINT(T_RCONST, 10); yylval.floatval = atof(yytext); return T_RCONST; }
(0|{DECDIGIT})?(\.)(0*[1-9]+{DIGIT}*|0)                  { RPRINT(T_RCONST, 10); yylval.floatval = atof(yytext); return T_RCONST; }
(0|{DECDIGIT}){EXPONENT}                                 { RPRINT(T_RCONST, 10); yylval.floatval = atof(yytext); return T_RCONST; }



 /* Integer Constants*/                                                          
 /* HEX CONSTANT */
0H[1-9A-F]{HEXDIGIT}*                                    { NPRINT(T_ICONST, 16); yylval.intval = HexToInt(yytext); return T_ICONST; }

 /* BIN CONSTANT */
0B1{BINDIGIT}*                                           { NPRINT(T_ICONST, 2); yylval.intval = BinToInt(yytext); return T_ICONST; }

 /* DECIMAL CONSTANT */
0|{DECDIGIT}                                             { NPRINT(T_ICONST, 10); yylval.intval = atoi(yytext); return T_ICONST; }




 /* Logical Constants */
".TRUE."                                              { token_print(T_LCONST); yylval.boolval = ; return T_LCONST; }
".FALSE."                                             { token_print(T_LCONST); yylval.boolval = ; return T_LCONST; }


 /* Character Constants */
 /* Να τσεκαρω το προγραμμα στο github για το yylval του CCONST */
\'\\n\'                                                 { token_print(T_CCONST); return T_CCONST; }
\'\\f\'                                                 { token_print(T_CCONST); return T_CCONST; }
\'\\t\'                                                 { token_print(T_CCONST); return T_CCONST; }
\'\\r\'                                                 { token_print(T_CCONST); return T_CCONST; }
\'\\b\'                                                 { token_print(T_CCONST); return T_CCONST; }
\'\\v\'                                                 { token_print(T_CCONST); return T_CCONST; }   
    
\'{ASCII}\'                                             { token_print(T_CCONST); return T_CCONST; }
\'{ALPHANUM}\'                                          { token_print(T_CCONST); return T_CCONST; }

                        

                        
                                                            
 /* Operators */    
".OR."                                                            { token_print(T_OROP); return T_OROP; }
".AND."                                                           { token_print(T_ANDOP); return T_ANDOP; }
".NOT."                                                           { token_print(T_NOTOP); return T_NOTOP; }
".GT."|".GE."|".LT."|".LE."|".EQ."|".NE."                         { token_print(T_RELOP); return T_RELOP; }
"+"|"-"                                                           { token_print(T_ADDOP); return T_ADDOP; }
"*"                                                               { token_print(T_MULOP); return T_MULOP; }
"/"                                                               { token_print(T_DIVOP); return T_DIVOP; }
"**"                                                              { token_print(T_POWEROP); return T_POWEROP; }

"("                                                               { token_print(T_LPAREN); return T_LPAREN; }
")"                                                               { token_print(T_RPAREN); return T_RPAREN; }
","                                                               { token_print(T_COMMA); return T_COMMA; }
"="                                                               { token_print(T_ASSIGN); return T_ASSIGN; }
"."                                                               { token_print(T_DOT); return T_DOT; }
":"                                                               { token_print(T_COLON); return T_COLON; }
"["                                                               { token_print(T_LBRACK); return T_LBRACK; }
"]"                                                               { token_print(T_RBRACK); return T_RBRACK; }
 
 /* This is where the programm ends */
<INITIAL><<EOF>>                                                  { token_print(T_EOF); return T_EOF; } 
                                                            
 /* Comments */

"$"                                               {BEGIN(SINGLE_LINE_COMMENT); str_buf_ptr = str_buf;}
<SINGLE_LINE_COMMENT>.                                 { }
<SINGLE_LINE_COMMENT>[^\\\n\"]+                        {char *yptr = yytext; 
                                                            while ( *yptr ) *str_buf_ptr++ = *yptr++;}
<SINGLE_LINE_COMMENT>"\n"                              {BEGIN(INITIAL);
                                                            *str_buf_ptr = '\0';
                                                             CPRINT();
                                                             lineno++;}
<SINGLE_LINE_COMMENT><<EOF>>                       {yyerror("Untermintated comment", 1); return 0;}
                                                            
 /* Strings */
\"                                                {BEGIN(STRING); str_buf_ptr = str_buf;} /* we enter the string */
<STRING>\"                                        {BEGIN(INITIAL); *str_buf_ptr = '\0';
                                                      if(FLEX_DEBUG && FLEX_SHOW_STRINGS)
                                                            printf("STRING FOUND: %s | TOKEN NUMBER: %d | LINE: %d\n", str_buf, T_STRING, lineno); yylval.strval = strdup(str_buf);
                                                        return T_STRING;} /* we exit the string */
<STRING>\n                                        {yyerror("Illegal input in string", 1); return 0;}
<STRING>\\n                                       {*str_buf_ptr++ = '\n';}
<STRING>\\f                                       {*str_buf_ptr++ = '\f';}
<STRING>\\t                                       {*str_buf_ptr++ = '\t';}
<STRING>\\r                                       {*str_buf_ptr++ = '\r';}
<STRING>\\b                                       {*str_buf_ptr++ = '\b';}
<STRING>\\v                                       {*str_buf_ptr++ = '\v';}
<STRING>\\\\                                      {*str_buf_ptr++ = '\\';}
<STRING>\\\"                                      {*str_buf_ptr++ = '"';}
<STRING>\\\n                                      {lineno++;}
<STRING>\\{ALPHANUM_}?                            {*str_buf_ptr++ = yytext[1];}
<STRING>[^\\\n\"]+                                {char *yptr = yytext; 
                                                            while ( *yptr ) *str_buf_ptr++ = *yptr++;}
<STRING><<EOF>>                                   {yyerror("Unterminated string", 1); return 0;}

{WHITESPACE}                                            {}
\n                                                      {lineno++;}

 /* Catch the rest */
.                                                       {yyerror("Unrecognised characters", 0);yyless(1);}
 /* ====[END RULES BLOCK]==== */ 

%%

/* ====[USER FUNCTIONS BLOCK]==== */


/* ====[END USER FUNCTIONS BLOCK]==== */

void token_print(int token_id){
    if(FLEX_DEBUG && FLEX_SHOW_TOKENS){
        printf("TOKEN FOUND: %s | TOKEN NUMBER: %d | LINE: %d\n", yytext, token_id, lineno);
    }    
}

void NPRINT(int token_id, int base){
    if(FLEX_DEBUG && FLEX_SHOW_NUMERIC){
        int number;
        if(base == 2) number = BinToInt(yytext);
        else if(base == 16) number = HexToInt(yytext);
        else number = atoi(yytext);
        printf("NUMBER FOUND: %d (%s) | FROM BASE: %d | TOKEN NUMBER: %d | LINE: %d\n", number, yytext, base, token_id, lineno);
    }
}

void RPRINT(int token_id, int base){
    if(FLEX_DEBUG && FLEX_SHOW_NUMERIC){
        float number;
        if(base == 2) number = BinToFloat(yytext);
        else if(base == 16) number = HexToFloat(yytext);
        else number = atof(yytext);
        printf("REAL FOUND: %lf (%s) | FROM BASE: %d | TOKEN NUMBER: %d | LINE: %d\n", number, yytext, base, token_id, lineno);
    }
}

void CPRINT(){
    if(FLEX_DEBUG && FLEX_SHOW_COMMENTS){
        int line = line_init > 0 ? lineno-line_init : lineno;
        printf("COMMENT FOUND: %s | TOKEN NUMBER: %d | LINE: %d\n", str_buf, T_STRING, line);
    }
}

int HexToInt(char *str){
    return (int) strtol(&str[2], NULL, 16);
}

int BinToInt(char *str){
    return (int) strtol(&str[2], NULL, 2);
}

float BinToFloat(char* str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,2);
    for(i=1;i<length_real;i++){
        number += (character[i] - '0') * (1/pow(2,i));
    }
    return number;
}


float HexToFloat(char*str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,16);
    for(i=1;i<=length_real;i++){
        if(character[i] <= '9')
			number += (character[i] - '0') * (1/pow(16,i));
		else
			number += (character[i] + 10 - 'A') * (1/pow(16,i)); /** TODO: CASE SENSITIVE **/
	}
    return number;
}

void yyerror(char *message, int type)
{
    error_count++;
    
    if(type==0){
		printf("-> ERROR at line %d caused by %s: %s\n", lineno, yytext, message);
    }else if(type==1){
		*str_buf_ptr = '\0'; // String or Comment Error. Cleanup old chars stored in buffer.
		printf("-> ERROR at line %d near \"%s\": %s\n", lineno, str_buf, message);
	}
    if(MAX_ERRORS <= 0) return;
    if(error_count == MAX_ERRORS){
        printf("Max errors detected\n");
        exit(-1);
    }

    yyless(1); /* Panic Method */
}