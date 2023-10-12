/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    T_EOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_ICONST = 258,                /* "integer constant"  */
    T_FCONST = 259,                /* "float constant"  */
    T_TYPEDEF = 260,               /* "typedef"  */
    T_CHAR = 261,                  /* "char"  */
    T_STRING = 262,                /* "string"  */
    T_SCONST = 263,                /* "string const"  */
    T_CLASS = 264,                 /* "class"  */
    T_PRIVATE = 265,               /* "private"  */
    T_PROTECTED = 266,             /* "protected"  */
    T_PUBLIC = 267,                /* "public"  */
    T_STATIC = 268,                /* "static"  */
    T_UNION = 269,                 /* "union"  */
    T_LIST = 270,                  /* "list"  */
    T_CONTINUE = 271,              /* "continue"  */
    T_BREAK = 272,                 /* "break"  */
    T_IF = 273,                    /* "if"  */
    T_ELSE = 274,                  /* "else"  */
    T_WHILE = 275,                 /* "while"  */
    T_FOR = 276,                   /* "for"  */
    T_SWITCH = 277,                /* "switch"  */
    T_DEFAULT = 278,               /* "default"  */
    T_RETURN = 279,                /* "return"  */
    T_NEW = 280,                   /* "new"  */
    T_CIN = 281,                   /* "cin"  */
    T_COUT = 282,                  /* "cout"  */
    T_MAIN = 283,                  /* "main"  */
    T_THIS = 284,                  /* "this"  */
    T_ID = 285,                    /* "id"  */
    T_OROP = 286,                  /* "||"  */
    T_ANDOP = 287,                 /* "&&"  */
    T_EQUOP = 288,                 /* "== or !="  */
    T_ADDOP = 289,                 /* "+ or -"  */
    T_MULOP = 290,                 /* "* or / or %"  */
    T_INCDEC = 291,                /* "-- or ++"  */
    T_SIZEOP = 292,                /* "sizeof"  */
    T_LISTFUNC = 293,              /* "listfunc"  */
    T_LPAREN = 294,                /* "("  */
    T_RPAREN = 295,                /* ")"  */
    T_SEMI = 296,                  /* ";"  */
    T_DOT = 297,                   /* "."  */
    T_COMMA = 298,                 /* ","  */
    T_COLON = 299,                 /* ":"  */
    T_LBRACK = 300,                /* "["  */
    T_RBRACK = 301,                /* "]"  */
    T_REFER = 302,                 /* "&"  */
    T_LBRACE = 303,                /* "{"  */
    T_RBRACE = 304,                /* "}"  */
    T_METH = 305,                  /* "::"  */
    T_INP = 306,                   /* "<<"  */
    T_OUT = 307,                   /* ">>"  */
    T_ASSIGN = 308,                /* "="  */
    T_CASE = 309,                  /* "case"  */
    T_CCONST = 310,                /* "char const"  */
    T_FLOAT = 311,                 /* "float"  */
    T_NOTOP = 312,                 /* "!"  */
    T_RELOP = 313,                 /* "> or >= or < or <="  */
    T_VOID = 314,                  /* "void"  */
    T_ENUM = 315,                  /* "enum"  */
    T_INT = 316,                   /* "int"  */
    T_LENGTH = 317,                /* "length"  */
    UMINUS = 318,                  /* UMINUS  */
    LOWER_THAN_ELSE = 319          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 48 "bison.y"

    int intval;
    double doubleval; 
    char *strval;

#line 134 "bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
