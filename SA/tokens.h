#define T_EOF                0
#define T_FUNCTION           1
#define T_SUBROUTINE         2
#define T_END                3
#define T_INTEGER            4
#define T_REAL               5
#define T_LOGICAL            6
#define T_CHARACTER          7
#define T_COMPLEX            8
#define T_RECORD             9
#define T_ENDREC             10
#define T_LIST               11
#define T_DATA               12
#define T_CONTINUE           13
#define T_GOTO               14
#define T_CALL               15
#define T_READ               16
#define T_WRITE              18
#define T_NEW                19
#define T_LENGTH             20
#define T_IF                 21
#define T_THEN               22
#define T_ELSE               23
#define T_ENDIF              24
#define T_DO                 25
#define T_ENDDO              26
#define T_STOP               27
#define T_RETURN             28


#define T_ID                 29


#define T_ICONST             30
#define T_RCONST             31
#define T_CCONST             32
#define T_LCONST             33
#define T_STRING             34


#define T_OROP               35
#define T_ANDOP              36
#define T_NOTOP              37 
#define T_RELOP              38
#define T_ADDOP              39
#define T_MULOP              40
#define T_DIVOP              41
#define T_POWEROP            42


#define T_LISTFUNC           43


#define T_LPAREN             44
#define T_RPAREN             45
#define T_COMMA              46
#define T_ASSIGN             47
#define T_DOT                48
#define T_COLON              49
#define T_LBRACK             50
#define T_RBRACK             51

#define T_NUMBER             100

#define MAX_ERRORS           0
#ifndef FLEX_DEBUG
#define FLEX_DEBUG           1
#define SHOW_TOKENS          1
#define SHOW_COMMENTS        1
#define SHOW_NUMERIC         1
#define SHOW_STRINGS         1
#endif