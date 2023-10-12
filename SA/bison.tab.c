/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "bison.y"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "settings.h"
#include "hashtbl.h"


/** Extern from Flex **/
extern int lineno, 
           line_init;

extern char str_buf[MAX_STR_CONST];    
extern char* str_buf_ptr;

extern int yylex();
extern char *yytext;
extern FILE *yyin;

extern void yyterminate();


/** Bison specific variables **/
int error_count=0; 
int flag_err_type=0; // 0: Token Error (YYTEXT) || 1: String Error (STRBUF)
int scope=0;

HASHTBL *hashtbl;

/** Bison specific functions **/
void yyerror(const char *message);

/** TODO: Write why split T_ICONST/T_FCONST **/
/** TODO: constant Union with type and val **/

#line 109 "bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_ICONST = 3,                   /* "integer constant"  */
  YYSYMBOL_T_FCONST = 4,                   /* "float constant"  */
  YYSYMBOL_T_TYPEDEF = 5,                  /* "typedef"  */
  YYSYMBOL_T_CHAR = 6,                     /* "char"  */
  YYSYMBOL_T_STRING = 7,                   /* "string"  */
  YYSYMBOL_T_SCONST = 8,                   /* "string const"  */
  YYSYMBOL_T_CLASS = 9,                    /* "class"  */
  YYSYMBOL_T_PRIVATE = 10,                 /* "private"  */
  YYSYMBOL_T_PROTECTED = 11,               /* "protected"  */
  YYSYMBOL_T_PUBLIC = 12,                  /* "public"  */
  YYSYMBOL_T_STATIC = 13,                  /* "static"  */
  YYSYMBOL_T_UNION = 14,                   /* "union"  */
  YYSYMBOL_T_LIST = 15,                    /* "list"  */
  YYSYMBOL_T_CONTINUE = 16,                /* "continue"  */
  YYSYMBOL_T_BREAK = 17,                   /* "break"  */
  YYSYMBOL_T_IF = 18,                      /* "if"  */
  YYSYMBOL_T_ELSE = 19,                    /* "else"  */
  YYSYMBOL_T_WHILE = 20,                   /* "while"  */
  YYSYMBOL_T_FOR = 21,                     /* "for"  */
  YYSYMBOL_T_SWITCH = 22,                  /* "switch"  */
  YYSYMBOL_T_DEFAULT = 23,                 /* "default"  */
  YYSYMBOL_T_RETURN = 24,                  /* "return"  */
  YYSYMBOL_T_NEW = 25,                     /* "new"  */
  YYSYMBOL_T_CIN = 26,                     /* "cin"  */
  YYSYMBOL_T_COUT = 27,                    /* "cout"  */
  YYSYMBOL_T_MAIN = 28,                    /* "main"  */
  YYSYMBOL_T_THIS = 29,                    /* "this"  */
  YYSYMBOL_T_ID = 30,                      /* "id"  */
  YYSYMBOL_T_OROP = 31,                    /* "||"  */
  YYSYMBOL_T_ANDOP = 32,                   /* "&&"  */
  YYSYMBOL_T_EQUOP = 33,                   /* "== or !="  */
  YYSYMBOL_T_ADDOP = 34,                   /* "+ or -"  */
  YYSYMBOL_T_MULOP = 35,                   /* "* or / or %"  */
  YYSYMBOL_T_INCDEC = 36,                  /* "-- or ++"  */
  YYSYMBOL_T_SIZEOP = 37,                  /* "sizeof"  */
  YYSYMBOL_T_LISTFUNC = 38,                /* "listfunc"  */
  YYSYMBOL_T_LPAREN = 39,                  /* "("  */
  YYSYMBOL_T_RPAREN = 40,                  /* ")"  */
  YYSYMBOL_T_SEMI = 41,                    /* ";"  */
  YYSYMBOL_T_DOT = 42,                     /* "."  */
  YYSYMBOL_T_COMMA = 43,                   /* ","  */
  YYSYMBOL_T_COLON = 44,                   /* ":"  */
  YYSYMBOL_T_LBRACK = 45,                  /* "["  */
  YYSYMBOL_T_RBRACK = 46,                  /* "]"  */
  YYSYMBOL_T_REFER = 47,                   /* "&"  */
  YYSYMBOL_T_LBRACE = 48,                  /* "{"  */
  YYSYMBOL_T_RBRACE = 49,                  /* "}"  */
  YYSYMBOL_T_METH = 50,                    /* "::"  */
  YYSYMBOL_T_INP = 51,                     /* "<<"  */
  YYSYMBOL_T_OUT = 52,                     /* ">>"  */
  YYSYMBOL_T_ASSIGN = 53,                  /* "="  */
  YYSYMBOL_T_CASE = 54,                    /* "case"  */
  YYSYMBOL_T_CCONST = 55,                  /* "char const"  */
  YYSYMBOL_T_FLOAT = 56,                   /* "float"  */
  YYSYMBOL_T_NOTOP = 57,                   /* "!"  */
  YYSYMBOL_T_RELOP = 58,                   /* "> or >= or < or <="  */
  YYSYMBOL_T_VOID = 59,                    /* "void"  */
  YYSYMBOL_T_ENUM = 60,                    /* "enum"  */
  YYSYMBOL_T_INT = 61,                     /* "int"  */
  YYSYMBOL_T_LENGTH = 62,                  /* "length"  */
  YYSYMBOL_UMINUS = 63,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 64,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_program = 66,                   /* program  */
  YYSYMBOL_global_declarations = 67,       /* global_declarations  */
  YYSYMBOL_global_declaration = 68,        /* global_declaration  */
  YYSYMBOL_typedef_declaration = 69,       /* typedef_declaration  */
  YYSYMBOL_70_1 = 70,                      /* $@1  */
  YYSYMBOL_typename = 71,                  /* typename  */
  YYSYMBOL_standard_type = 72,             /* standard_type  */
  YYSYMBOL_listspec = 73,                  /* listspec  */
  YYSYMBOL_dims = 74,                      /* dims  */
  YYSYMBOL_dim = 75,                       /* dim  */
  YYSYMBOL_enum_declaration = 76,          /* enum_declaration  */
  YYSYMBOL_77_2 = 77,                      /* $@2  */
  YYSYMBOL_78_3 = 78,                      /* $@3  */
  YYSYMBOL_enum_body = 79,                 /* enum_body  */
  YYSYMBOL_id_list = 80,                   /* id_list  */
  YYSYMBOL_81_4 = 81,                      /* $@4  */
  YYSYMBOL_initializer = 82,               /* initializer  */
  YYSYMBOL_init_value = 83,                /* init_value  */
  YYSYMBOL_expression = 84,                /* expression  */
  YYSYMBOL_variable = 85,                  /* variable  */
  YYSYMBOL_general_expression = 86,        /* general_expression  */
  YYSYMBOL_assignment = 87,                /* assignment  */
  YYSYMBOL_expression_list = 88,           /* expression_list  */
  YYSYMBOL_constant = 89,                  /* constant  */
  YYSYMBOL_listexpression = 90,            /* listexpression  */
  YYSYMBOL_init_values = 91,               /* init_values  */
  YYSYMBOL_class_declaration = 92,         /* class_declaration  */
  YYSYMBOL_93_5 = 93,                      /* $@5  */
  YYSYMBOL_class_body = 94,                /* class_body  */
  YYSYMBOL_parent = 95,                    /* parent  */
  YYSYMBOL_members_methods = 96,           /* members_methods  */
  YYSYMBOL_access = 97,                    /* access  */
  YYSYMBOL_member_or_method = 98,          /* member_or_method  */
  YYSYMBOL_member = 99,                    /* member  */
  YYSYMBOL_var_declaration = 100,          /* var_declaration  */
  YYSYMBOL_variabledefs = 101,             /* variabledefs  */
  YYSYMBOL_variabledef = 102,              /* variabledef  */
  YYSYMBOL_anonymous_union = 103,          /* anonymous_union  */
  YYSYMBOL_104_6 = 104,                    /* $@6  */
  YYSYMBOL_105_7 = 105,                    /* $@7  */
  YYSYMBOL_union_body = 106,               /* union_body  */
  YYSYMBOL_fields = 107,                   /* fields  */
  YYSYMBOL_field = 108,                    /* field  */
  YYSYMBOL_method = 109,                   /* method  */
  YYSYMBOL_short_func_declaration = 110,   /* short_func_declaration  */
  YYSYMBOL_short_par_func_header = 111,    /* short_par_func_header  */
  YYSYMBOL_func_header_start = 112,        /* func_header_start  */
  YYSYMBOL_parameter_types = 113,          /* parameter_types  */
  YYSYMBOL_pass_list_dims = 114,           /* pass_list_dims  */
  YYSYMBOL_nopar_func_header = 115,        /* nopar_func_header  */
  YYSYMBOL_union_declaration = 116,        /* union_declaration  */
  YYSYMBOL_117_8 = 117,                    /* $@8  */
  YYSYMBOL_global_var_declaration = 118,   /* global_var_declaration  */
  YYSYMBOL_init_variabledefs = 119,        /* init_variabledefs  */
  YYSYMBOL_init_variabledef = 120,         /* init_variabledef  */
  YYSYMBOL_func_declaration = 121,         /* func_declaration  */
  YYSYMBOL_full_func_declaration = 122,    /* full_func_declaration  */
  YYSYMBOL_full_par_func_header = 123,     /* full_par_func_header  */
  YYSYMBOL_class_func_header_start = 124,  /* class_func_header_start  */
  YYSYMBOL_func_class = 125,               /* func_class  */
  YYSYMBOL_parameter_list = 126,           /* parameter_list  */
  YYSYMBOL_pass_variabledef = 127,         /* pass_variabledef  */
  YYSYMBOL_nopar_class_func_header = 128,  /* nopar_class_func_header  */
  YYSYMBOL_decl_statements = 129,          /* decl_statements  */
  YYSYMBOL_declarations = 130,             /* declarations  */
  YYSYMBOL_decltype = 131,                 /* decltype  */
  YYSYMBOL_statements = 132,               /* statements  */
  YYSYMBOL_statement = 133,                /* statement  */
  YYSYMBOL_expression_statement = 134,     /* expression_statement  */
  YYSYMBOL_if_statement = 135,             /* if_statement  */
  YYSYMBOL_136_9 = 136,                    /* $@9  */
  YYSYMBOL_137_10 = 137,                   /* $@10  */
  YYSYMBOL_if_tail = 138,                  /* if_tail  */
  YYSYMBOL_139_11 = 139,                   /* $@11  */
  YYSYMBOL_while_statement = 140,          /* while_statement  */
  YYSYMBOL_141_12 = 141,                   /* $@12  */
  YYSYMBOL_for_statement = 142,            /* for_statement  */
  YYSYMBOL_143_13 = 143,                   /* $@13  */
  YYSYMBOL_optexpr = 144,                  /* optexpr  */
  YYSYMBOL_switch_statement = 145,         /* switch_statement  */
  YYSYMBOL_146_14 = 146,                   /* $@14  */
  YYSYMBOL_switch_tail = 147,              /* switch_tail  */
  YYSYMBOL_decl_cases = 148,               /* decl_cases  */
  YYSYMBOL_casestatements = 149,           /* casestatements  */
  YYSYMBOL_casestatement = 150,            /* casestatement  */
  YYSYMBOL_151_15 = 151,                   /* $@15  */
  YYSYMBOL_152_16 = 152,                   /* $@16  */
  YYSYMBOL_single_casestatement = 153,     /* single_casestatement  */
  YYSYMBOL_154_17 = 154,                   /* $@17  */
  YYSYMBOL_return_statement = 155,         /* return_statement  */
  YYSYMBOL_io_statement = 156,             /* io_statement  */
  YYSYMBOL_in_list = 157,                  /* in_list  */
  YYSYMBOL_in_item = 158,                  /* in_item  */
  YYSYMBOL_out_list = 159,                 /* out_list  */
  YYSYMBOL_out_item = 160,                 /* out_item  */
  YYSYMBOL_comp_statement = 161,           /* comp_statement  */
  YYSYMBOL_main_function = 162,            /* main_function  */
  YYSYMBOL_main_header = 163               /* main_header  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   736

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  383

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   147,   147,   149,   150,   152,   153,   154,   155,   156,
     157,   159,   159,   162,   163,   165,   166,   167,   168,   169,
     171,   172,   174,   175,   177,   178,   180,   181,   180,   184,
     186,   187,   187,   190,   191,   192,   193,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   215,   216,   217,   218,
     219,   221,   222,   224,   225,   227,   228,   230,   231,   232,
     233,   235,   237,   238,   240,   240,   244,   246,   247,   249,
     250,   252,   253,   254,   255,   257,   258,   260,   261,   263,
     265,   266,   268,   270,   271,   270,   274,   276,   277,   279,
     281,   283,   284,   286,   288,   290,   291,   293,   294,   296,
     298,   298,   302,   304,   305,   307,   309,   310,   312,   313,
     314,   316,   317,   319,   321,   323,   324,   326,   327,   329,
     331,   332,   333,   334,   336,   337,   339,   340,   342,   343,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   357,   359,   360,   359,   363,   363,   365,   367,   367,
     369,   371,   371,   374,   375,   377,   377,   380,   381,   383,
     384,   385,   386,   388,   389,   391,   392,   393,   393,   395,
     396,   396,   398,   400,   401,   401,   404,   406,   407,   408,
     409,   411,   412,   414,   416,   417,   419,   421,   423,   426,
     427,   428,   429,   430
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"integer constant\"",
  "\"float constant\"", "\"typedef\"", "\"char\"", "\"string\"",
  "\"string const\"", "\"class\"", "\"private\"", "\"protected\"",
  "\"public\"", "\"static\"", "\"union\"", "\"list\"", "\"continue\"",
  "\"break\"", "\"if\"", "\"else\"", "\"while\"", "\"for\"", "\"switch\"",
  "\"default\"", "\"return\"", "\"new\"", "\"cin\"", "\"cout\"",
  "\"main\"", "\"this\"", "\"id\"", "\"||\"", "\"&&\"", "\"== or !=\"",
  "\"+ or -\"", "\"* or / or %\"", "\"-- or ++\"", "\"sizeof\"",
  "\"listfunc\"", "\"(\"", "\")\"", "\";\"", "\".\"", "\",\"", "\":\"",
  "\"[\"", "\"]\"", "\"&\"", "\"{\"", "\"}\"", "\"::\"", "\"<<\"",
  "\">>\"", "\"=\"", "\"case\"", "\"char const\"", "\"float\"", "\"!\"",
  "\"> or >= or < or <=\"", "\"void\"", "\"enum\"", "\"int\"",
  "\"length\"", "UMINUS", "LOWER_THAN_ELSE", "$accept", "program",
  "global_declarations", "global_declaration", "typedef_declaration",
  "$@1", "typename", "standard_type", "listspec", "dims", "dim",
  "enum_declaration", "$@2", "$@3", "enum_body", "id_list", "$@4",
  "initializer", "init_value", "expression", "variable",
  "general_expression", "assignment", "expression_list", "constant",
  "listexpression", "init_values", "class_declaration", "$@5",
  "class_body", "parent", "members_methods", "access", "member_or_method",
  "member", "var_declaration", "variabledefs", "variabledef",
  "anonymous_union", "$@6", "$@7", "union_body", "fields", "field",
  "method", "short_func_declaration", "short_par_func_header",
  "func_header_start", "parameter_types", "pass_list_dims",
  "nopar_func_header", "union_declaration", "$@8",
  "global_var_declaration", "init_variabledefs", "init_variabledef",
  "func_declaration", "full_func_declaration", "full_par_func_header",
  "class_func_header_start", "func_class", "parameter_list",
  "pass_variabledef", "nopar_class_func_header", "decl_statements",
  "declarations", "decltype", "statements", "statement",
  "expression_statement", "if_statement", "$@9", "$@10", "if_tail", "$@11",
  "while_statement", "$@12", "for_statement", "$@13", "optexpr",
  "switch_statement", "$@14", "switch_tail", "decl_cases",
  "casestatements", "casestatement", "$@15", "$@16",
  "single_casestatement", "$@17", "return_statement", "io_statement",
  "in_list", "in_item", "out_list", "out_item", "comp_statement",
  "main_function", "main_header", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-246)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-173)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -246,    47,    24,  -246,   -17,   189,  -246,  -246,    29,    52,
    -246,  -246,  -246,    66,   201,  -246,  -246,    94,  -246,  -246,
    -246,  -246,   104,    87,    -7,  -246,  -246,  -246,  -246,   107,
     138,   157,  -246,   163,   179,  -246,    94,  -246,  -246,  -246,
     187,    86,  -246,   208,   186,   283,  -246,  -246,    33,  -246,
     349,   349,    58,   349,   349,   207,   235,   244,   241,   246,
     255,   259,    26,     3,   245,   196,  -246,  -246,    94,  -246,
       1,   139,   180,  -246,  -246,  -246,  -246,   263,   272,   261,
     131,   295,   302,   559,   305,   299,   307,  -246,   674,   168,
     674,   315,   521,  -246,   598,   349,  -246,   674,   316,   155,
     573,   304,  -246,  -246,  -246,   297,   392,   428,   435,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   311,  -246,
      46,   184,   314,   319,  -246,  -246,   334,   331,   333,   189,
     343,   362,  -246,  -246,  -246,  -246,  -246,  -246,   354,  -246,
     196,  -246,   155,   204,   363,   371,  -246,   372,   371,  -246,
    -246,  -246,  -246,   189,  -246,   189,  -246,  -246,  -246,   674,
    -246,  -246,  -246,   360,   366,   674,   168,   674,  -246,   210,
    -246,   674,   375,   216,   360,   374,   373,  -246,   674,   674,
     674,   674,   674,   674,   674,  -246,   598,   393,   674,   674,
    -246,   674,  -246,   428,   435,    85,    94,  -246,  -246,   372,
    -246,  -246,  -246,  -246,  -246,  -246,   182,    94,  -246,   124,
    -246,  -246,  -246,    79,   383,    11,  -246,  -246,   109,  -246,
    -246,  -246,   354,    54,    46,   674,   227,   674,   559,   674,
    -246,   231,   210,    35,  -246,   360,    27,  -246,   239,  -246,
    -246,  -246,  -246,   253,   510,   303,   202,   390,  -246,   249,
     387,  -246,   262,  -246,  -246,    94,   336,  -246,   169,   388,
     398,   400,   101,   142,   339,  -246,  -246,   186,   406,  -246,
    -246,   399,  -246,   196,  -246,  -246,  -246,  -246,  -246,   266,
     478,   282,   405,   300,  -246,  -246,  -246,   168,  -246,  -246,
     674,  -246,  -246,  -246,  -246,   348,  -246,    94,  -246,  -246,
    -246,  -246,  -246,   142,  -246,    94,  -246,  -246,  -246,  -246,
    -246,  -246,   411,   422,  -246,  -246,   186,  -246,  -246,   478,
    -246,   478,   559,   130,  -246,  -246,  -246,  -246,  -246,   241,
     436,    33,  -246,  -246,  -246,   426,    93,    15,  -246,  -246,
    -246,   429,    54,   451,   636,    31,    15,   120,   189,   430,
     121,  -246,   431,   437,  -246,  -246,   445,   478,  -246,    34,
     189,   121,  -246,  -246,   423,  -246,   478,   478,   435,   478,
     294,   121,  -246,   478,  -246,  -246,   435,   435,  -246,  -246,
     478,  -246,   435
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,    15,    18,     0,     0,
      14,    17,    19,     0,     0,     3,     5,    21,    13,     6,
       7,   116,     0,     0,     0,     8,     9,    10,   117,     0,
       0,     0,     2,     0,     0,    16,    21,    74,   110,    26,
       0,     0,    20,     0,    34,     0,   114,   101,     0,   102,
     137,   137,     0,   137,   137,     0,     0,    78,     0,     0,
       0,     0,     0,    23,     0,   137,   115,   112,    21,   109,
      21,     0,     0,    68,    69,    70,   136,     0,     0,     0,
       0,     0,     0,   137,     0,     0,     0,    60,   137,   137,
     137,     0,   137,   150,    66,   137,    67,   137,     0,    64,
      48,     0,    62,    52,    55,     0,   137,     0,   132,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,   129,
      21,     0,     0,     0,   200,    11,     0,     0,     0,     0,
       0,     0,    27,   201,   202,   203,   199,   124,    92,   123,
     137,    33,    35,    48,     0,     0,   113,   107,    23,   127,
     106,   126,   103,     0,   122,     0,   148,   149,   152,   137,
     158,   161,   165,   163,     0,   137,   137,   137,    44,    46,
      45,   137,     0,     0,    65,     0,     0,    43,   137,   137,
     137,   137,   137,   137,   137,    47,    66,     0,   137,   137,
     151,   137,   120,     0,   130,    59,    21,   138,   118,     0,
     121,   119,   198,    23,    77,    75,    84,    21,    99,     0,
      98,   111,    31,     0,     0,     0,    22,    73,     0,    59,
      23,   128,   108,    21,    21,   137,     0,   137,   137,   137,
     186,     0,   193,     0,   192,   196,     0,   195,     0,    54,
      53,    71,   197,     0,    37,    38,    39,    41,    42,    40,
       0,    57,     0,    63,    61,    21,     0,    91,     0,     0,
       0,     0,    84,     0,     0,    96,    97,    34,     0,    29,
      28,     0,    25,   137,    36,   107,    23,   105,   125,     0,
     137,     0,     0,     0,    51,   188,   187,   137,   190,   189,
     137,    58,    50,    49,    56,     0,   135,    21,    12,    81,
      82,    83,    76,     0,    93,    21,    80,    85,    87,    88,
      86,   100,     0,     0,    89,    32,    34,    24,    72,   137,
     160,   137,   137,     0,   191,   194,   134,    90,    79,     0,
       0,     0,    30,   153,   159,     0,   137,     0,   166,   168,
      94,    23,    21,   157,   137,     0,     0,   137,     0,     0,
     171,   174,     0,     0,   155,   154,     0,   137,   180,     0,
       0,   169,   167,   173,   184,    95,   137,   137,   182,   137,
     137,   177,   183,   137,   156,   162,   181,   179,   176,   175,
     137,   185,   178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,  -246,  -246,  -246,  -246,    -2,   396,   -15,  -136,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -245,  -132,   -16,
     -45,   -68,   312,   320,  -175,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,   247,   190,  -246,  -226,  -195,   -12,  -246,  -246,
    -246,   181,  -246,   309,  -246,   506,  -246,   509,  -246,   290,
     518,  -246,  -246,  -246,  -246,   453,  -246,  -246,  -246,  -246,
    -246,   470,   306,  -246,    51,   195,   -44,   -89,  -104,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -215,
    -246,  -246,  -246,  -246,   185,   -84,  -246,  -246,   172,  -246,
    -246,  -246,  -246,   250,  -246,   248,  -246,  -246,  -246
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    15,    16,   203,   196,    18,   145,   138,
     216,    19,    59,   214,   132,   213,   267,    66,   141,    99,
     100,   101,   102,   175,   103,   104,   218,    20,    57,   127,
     128,   262,   263,   306,   307,   208,   264,   257,   309,   329,
     353,   130,   209,   210,   310,   311,    22,   312,    71,   150,
     313,    25,    58,    26,    45,    46,    27,    28,    29,    30,
      64,    72,   151,    31,   105,   106,   144,   108,   109,   110,
     111,   225,   343,   355,   366,   112,   227,   113,   228,   164,
     114,   229,   338,   349,   350,   351,   380,   369,   339,   373,
     115,   116,   233,   234,   236,   237,   117,    32,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,   256,    43,    36,   197,    44,   107,   107,   217,   107,
     107,    34,   222,   282,   271,   163,    42,   194,    73,    74,
     143,    56,   315,    75,   173,     4,   174,   135,   288,     5,
       6,     7,   357,     8,    49,   370,   285,   308,     9,     6,
       7,    50,  -104,   143,   169,   143,    70,     3,   147,   142,
     120,   107,   143,   137,    10,   148,    44,   272,   149,    37,
     295,    42,   193,    10,     6,     7,   136,   258,   289,    42,
      96,   332,   168,    69,   170,   358,   286,   308,   371,   290,
      11,   177,    38,    12,    13,    14,   287,    61,    10,    11,
     197,   226,    12,   199,    35,   143,    39,   231,   119,   235,
     -14,   275,   118,   238,   122,   123,    76,   335,   149,    42,
     243,   259,   260,   261,    11,   -14,   345,    12,   174,    35,
     252,   232,   268,   254,   142,    62,    48,   207,   269,   356,
       6,     7,   159,    76,   143,   143,   143,   143,   143,   143,
     222,   318,  -172,   345,   345,    47,   176,   346,     6,     7,
     302,   223,   273,   224,    10,    51,   304,   279,   274,   281,
     163,   283,   352,   244,   245,   246,   247,   248,   249,  -170,
     160,   359,    10,   265,   346,   346,   320,    52,   336,   152,
      11,    76,   153,    12,   337,    35,   179,   180,   181,   182,
     183,   255,   259,   260,   261,     6,     7,    87,    11,    73,
      74,    12,    40,    35,    75,    53,    91,   207,   276,    76,
     298,    54,   149,   184,   215,   333,   -16,   334,    55,    10,
     154,    84,   235,   155,   200,    87,    60,   155,   143,    41,
      88,   -16,    89,    90,    91,    92,   182,   183,    63,    65,
     185,    94,   232,   186,   140,    11,   187,   124,    12,   188,
      35,    96,   187,    97,   163,   188,   240,   142,    98,   191,
     184,   305,   374,   375,   197,   125,   363,   280,   368,   381,
     191,   284,   197,   197,   191,   139,   163,   363,   197,   291,
     376,   377,   191,   182,   183,   327,   378,   379,   126,   129,
     330,   382,   348,   292,   131,   133,   191,    73,    74,   134,
     158,   305,    75,   360,   156,   191,   319,    76,   294,   191,
      77,    78,    79,   157,    80,    81,    82,   345,    83,    84,
      85,    86,   321,    87,    67,   191,    68,   276,    88,   342,
      89,    90,    91,    92,   161,    93,   181,   182,   183,    94,
     323,   162,    95,   191,   165,   190,   192,   191,   346,    96,
     166,    97,    73,    74,   171,   178,    98,    75,   255,   167,
     198,   184,    76,   201,   204,    77,    78,    79,   202,    80,
      81,    82,   205,    83,    84,    85,    86,   296,    87,   297,
     314,   206,   297,    88,   211,    89,    90,    91,    92,   326,
      93,   297,   212,   219,    94,    73,    74,    95,  -133,   215,
      75,   220,   221,   191,    96,    76,    97,   230,    77,    78,
      79,    98,    80,    81,    82,   239,    83,    84,    85,    86,
     241,    87,   242,   251,   270,   183,    88,   293,    89,    90,
      91,    92,   299,    93,     6,     7,   316,    94,    73,    74,
      95,  -131,   300,    75,   301,   317,   322,    96,    76,    97,
     331,    77,    78,    79,    98,    80,    81,    82,   195,    83,
      84,    85,    86,    49,    87,  -137,   341,   344,  -104,    88,
     354,    89,    90,    91,    92,   364,    93,   337,   365,   362,
      94,    73,    74,    95,    11,   367,    75,    12,   172,    35,
      96,    76,    97,   328,    77,    78,    79,    98,    80,    81,
      82,   253,    83,    84,    85,    86,   250,    87,    21,   303,
     340,    23,    88,   277,    89,    90,    91,    92,   266,    93,
      24,   146,   121,    94,    73,    74,    95,     6,     7,    75,
     278,   347,   361,    96,    76,    97,   372,   324,   325,     0,
      98,     0,   180,   181,   182,   183,    84,     0,     0,     0,
      87,     0,     0,     0,     0,    88,     0,    89,    90,    91,
      92,     0,    73,    74,     0,     0,    94,    75,   184,     0,
       0,     0,    76,     0,     0,     0,    96,    11,    97,     0,
      12,     0,    35,    98,    84,     0,     0,     0,    87,     0,
       0,     0,     0,    88,     0,    89,    90,    91,    92,     0,
    -164,    73,    74,     0,    94,     0,    75,     0,     0,   185,
       0,    76,   186,     0,    96,   187,    97,     0,   188,     0,
       0,    98,     0,    84,     0,     0,   189,    87,  -137,     0,
       0,     0,    88,     0,    89,    90,    91,    92,     0,    73,
      74,     0,     0,    94,    75,     0,     0,     0,     0,    76,
       0,     0,     0,    96,     0,    97,     0,     0,     0,     0,
      98,    84,     0,     0,     0,    87,     0,     0,     0,     0,
      88,     0,    89,    90,    91,    92,  -164,    73,    74,     0,
       0,    94,    75,     0,     0,     0,     0,    76,     0,     0,
       0,    96,     0,    97,     0,     0,     0,     0,    98,    84,
       0,     0,     0,    87,     0,     0,     0,     0,    88,     0,
      89,    90,    91,    92,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,    97,     0,     0,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
       2,   196,    17,     5,   108,    17,    50,    51,   140,    53,
      54,    28,   148,   228,     3,    83,    15,   106,     3,     4,
      65,    36,   267,     8,    92,     1,    94,     1,     1,     5,
       6,     7,     1,     9,    41,     1,     1,   263,    14,     6,
       7,    48,    39,    88,    89,    90,    48,     0,    47,    65,
      52,    95,    97,    50,    30,    70,    68,    46,    70,    30,
     255,    15,   106,    30,     6,     7,    40,   203,    41,    15,
      55,   316,    88,    40,    90,    44,    41,   303,    44,    52,
      56,    97,    30,    59,    60,    61,    51,     1,    30,    56,
     194,   159,    59,    47,    61,   140,    30,   165,    40,   167,
      15,    47,    51,   171,    53,    54,    13,   322,   120,    15,
     178,    10,    11,    12,    56,    30,    23,    59,   186,    61,
     188,   166,    43,   191,   140,    39,    39,   129,    49,   344,
       6,     7,     1,    13,   179,   180,   181,   182,   183,   184,
     276,   273,    49,    23,    23,    41,    95,    54,     6,     7,
      49,   153,    43,   155,    30,    48,    14,   225,    49,   227,
     228,   229,   337,   179,   180,   181,   182,   183,   184,    49,
      39,   346,    30,    49,    54,    54,   280,    39,    48,    40,
      56,    13,    43,    59,    54,    61,    31,    32,    33,    34,
      35,   193,    10,    11,    12,     6,     7,    29,    56,     3,
       4,    59,     1,    61,     8,    48,    38,   209,   223,    13,
      41,    48,   224,    58,    45,   319,    15,   321,    39,    30,
      40,    25,   290,    43,    40,    29,    39,    43,   273,    28,
      34,    30,    36,    37,    38,    39,    34,    35,    30,    53,
      36,    45,   287,    39,    48,    56,    42,    40,    59,    45,
      61,    55,    42,    57,   322,    45,    40,   273,    62,    43,
      58,   263,   366,   367,   368,    30,   350,    40,   357,   373,
      43,    40,   376,   377,    43,    30,   344,   361,   382,    40,
     369,   370,    43,    34,    35,   297,   370,   371,    44,    48,
     305,   380,   336,    40,    48,    40,    43,     3,     4,    40,
      39,   303,     8,   347,    41,    43,    40,    13,    46,    43,
      16,    17,    18,    41,    20,    21,    22,    23,    24,    25,
      26,    27,    40,    29,    41,    43,    43,   342,    34,   331,
      36,    37,    38,    39,    39,    41,    33,    34,    35,    45,
      40,    39,    48,    43,    39,    41,    49,    43,    54,    55,
      51,    57,     3,     4,    39,    39,    62,     8,   360,    52,
      49,    58,    13,    49,    30,    16,    17,    18,    49,    20,
      21,    22,    41,    24,    25,    26,    27,    41,    29,    43,
      41,    48,    43,    34,    41,    36,    37,    38,    39,    41,
      41,    43,    30,    30,    45,     3,     4,    48,    49,    45,
       8,    30,    30,    43,    55,    13,    57,    41,    16,    17,
      18,    62,    20,    21,    22,    40,    24,    25,    26,    27,
      46,    29,    49,    30,    41,    35,    34,    40,    36,    37,
      38,    39,    44,    41,     6,     7,    30,    45,     3,     4,
      48,    49,    44,     8,    44,    46,    41,    55,    13,    57,
      39,    16,    17,    18,    62,    20,    21,    22,    30,    24,
      25,    26,    27,    41,    29,    30,    30,    41,    39,    34,
      19,    36,    37,    38,    39,    44,    41,    54,    41,    49,
      45,     3,     4,    48,    56,    40,     8,    59,    92,    61,
      55,    13,    57,   303,    16,    17,    18,    62,    20,    21,
      22,   189,    24,    25,    26,    27,   186,    29,     2,   262,
     329,     2,    34,   223,    36,    37,    38,    39,   209,    41,
       2,    68,    52,    45,     3,     4,    48,     6,     7,     8,
     224,   336,   347,    55,    13,    57,   364,   287,   290,    -1,
      62,    -1,    32,    33,    34,    35,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,     3,     4,    -1,    -1,    45,     8,    58,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    -1,    61,    62,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      41,     3,     4,    -1,    45,    -1,     8,    -1,    -1,    36,
      -1,    13,    39,    -1,    55,    42,    57,    -1,    45,    -1,
      -1,    62,    -1,    25,    -1,    -1,    53,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     3,
       4,    -1,    -1,    45,     8,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      62,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    40,     3,     4,    -1,
      -1,    45,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    62
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,    67,     0,     1,     5,     6,     7,     9,    14,
      30,    56,    59,    60,    61,    68,    69,    71,    72,    76,
      92,   110,   111,   112,   115,   116,   118,   121,   122,   123,
     124,   128,   162,   163,    28,    61,    71,    30,    30,    30,
       1,    28,    15,    73,   102,   119,   120,    41,    39,    41,
      48,    48,    39,    48,    48,    39,    73,    93,   117,    77,
      39,     1,    39,    30,   125,    53,    82,    41,    43,    40,
      71,   113,   126,     3,     4,     8,    13,    16,    17,    18,
      20,    21,    22,    24,    25,    26,    27,    29,    34,    36,
      37,    38,    39,    41,    45,    48,    55,    57,    62,    84,
      85,    86,    87,    89,    90,   129,   130,   131,   132,   133,
     134,   135,   140,   142,   145,   155,   156,   161,   129,    40,
      71,   126,   129,   129,    40,    30,    44,    94,    95,    48,
     106,    48,    79,    40,    40,     1,    40,    50,    74,    30,
      48,    83,    84,    85,   131,    73,   120,    47,    73,   102,
     114,   127,    40,    43,    40,    43,    41,    41,    39,     1,
      39,    39,    39,    86,   144,    39,    51,    52,    84,    85,
      84,    39,    72,    86,    86,    88,   129,    84,    39,    31,
      32,    33,    34,    35,    58,    36,    39,    42,    45,    53,
      41,    43,    49,   131,   132,    30,    71,   133,    49,    47,
      40,    49,    49,    70,    30,    41,    48,    71,   100,   107,
     108,    41,    30,    80,    78,    45,    75,    83,    91,    30,
      30,    30,    74,    71,    71,   136,    86,   141,   143,   146,
      41,    86,    85,   157,   158,    86,   159,   160,    86,    40,
      40,    46,    49,    86,    84,    84,    84,    84,    84,    84,
      88,    30,    86,    87,    86,    71,   101,   102,    74,    10,
      11,    12,    96,    97,   101,    49,   108,    81,    43,    49,
      41,     3,    46,    43,    49,    47,    73,   114,   127,    86,
      40,    86,   144,    86,    40,     1,    41,    51,     1,    41,
      52,    40,    40,    40,    46,   101,    41,    43,    41,    44,
      44,    44,    49,    97,    14,    71,    98,    99,   100,   103,
     109,   110,   112,   115,    41,    82,    30,    46,    83,    40,
     133,    40,    41,    40,   158,   160,    41,   102,    98,   104,
      73,    39,    82,   133,   133,   144,    48,    54,   147,   153,
     106,    30,    71,   137,    41,    23,    54,   130,   131,   148,
     149,   150,    89,   105,    19,   138,   144,     1,    44,    89,
     131,   149,    49,   150,    44,    41,   139,    40,   132,   152,
       1,    44,   153,   154,   133,   133,   132,   132,   150,   150,
     151,   133,   132
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    70,    69,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    77,    78,    76,    79,
      80,    81,    80,    82,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    90,    91,    91,    93,    92,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   102,   104,   105,   103,   106,   107,   107,   108,
     109,   110,   110,   111,   112,   113,   113,   114,   114,   115,
     117,   116,   118,   119,   119,   120,   121,   121,   122,   122,
     122,   123,   123,   124,   125,   126,   126,   127,   127,   128,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   136,   137,   135,   139,   138,   138,   141,   140,
     140,   143,   142,   144,   144,   146,   145,   147,   147,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   150,   150,
     152,   150,   150,   153,   154,   153,   155,   156,   156,   156,
     156,   157,   157,   158,   159,   159,   160,   161,   162,   163,
     163,   163,   163,   163
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     3,     2,     0,     0,     6,     3,
       4,     0,     3,     2,     0,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     4,
       4,     4,     1,     3,     3,     1,     4,     3,     4,     2,
       1,     3,     1,     3,     1,     1,     0,     1,     1,     1,
       1,     3,     3,     1,     0,     5,     4,     2,     0,     3,
       2,     2,     2,     2,     0,     1,     1,     1,     1,     3,
       3,     1,     3,     0,     0,     5,     3,     2,     1,     1,
       1,     2,     2,     4,     3,     4,     2,     1,     2,     3,
       0,     5,     3,     3,     1,     2,     1,     1,     4,     4,
       4,     4,     4,     4,     2,     4,     2,     1,     2,     3,
       2,     1,     1,     0,     5,     4,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     0,     0,     8,     0,     3,     0,     0,     6,
       5,     0,    10,     1,     0,     0,     6,     3,     1,     2,
       1,     1,     0,     2,     1,     4,     4,     0,     5,     4,
       0,     4,     3,     4,     0,     5,     3,     4,     4,     4,
       4,     3,     1,     1,     3,     1,     1,     3,     4,     4,
       4,     4,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* global_declarations: %empty  */
#line 150 "bison.y"
                                 {}
#line 1894 "bison.tab.c"
    break;

  case 11: /* $@1: %empty  */
#line 159 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);scope++;}
#line 1900 "bison.tab.c"
    break;

  case 12: /* typedef_declaration: "typedef" typename listspec "id" $@1 dims ";"  */
#line 160 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 1906 "bison.tab.c"
    break;

  case 14: /* typename: "id"  */
#line 163 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1912 "bison.tab.c"
    break;

  case 21: /* listspec: %empty  */
#line 172 "bison.y"
                                 {}
#line 1918 "bison.tab.c"
    break;

  case 23: /* dims: %empty  */
#line 175 "bison.y"
                                 {}
#line 1924 "bison.tab.c"
    break;

  case 26: /* $@2: %empty  */
#line 180 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);scope++;}
#line 1930 "bison.tab.c"
    break;

  case 27: /* $@3: %empty  */
#line 181 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 1936 "bison.tab.c"
    break;

  case 30: /* id_list: id_list "," "id" initializer  */
#line 186 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 1942 "bison.tab.c"
    break;

  case 31: /* $@4: %empty  */
#line 187 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1948 "bison.tab.c"
    break;

  case 34: /* initializer: %empty  */
#line 191 "bison.y"
                                 {}
#line 1954 "bison.tab.c"
    break;

  case 57: /* variable: variable "." "id"  */
#line 216 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1960 "bison.tab.c"
    break;

  case 59: /* variable: decltype "id"  */
#line 218 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1966 "bison.tab.c"
    break;

  case 66: /* expression_list: %empty  */
#line 228 "bison.y"
                                 {}
#line 1972 "bison.tab.c"
    break;

  case 74: /* $@5: %empty  */
#line 240 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);scope++;}
#line 1978 "bison.tab.c"
    break;

  case 75: /* class_declaration: "class" "id" $@5 class_body ";"  */
#line 242 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 1984 "bison.tab.c"
    break;

  case 77: /* parent: ":" "id"  */
#line 246 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1990 "bison.tab.c"
    break;

  case 78: /* parent: %empty  */
#line 247 "bison.y"
                                 {}
#line 1996 "bison.tab.c"
    break;

  case 84: /* access: %empty  */
#line 255 "bison.y"
                                 {}
#line 2002 "bison.tab.c"
    break;

  case 92: /* variabledef: listspec "id" dims  */
#line 268 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 2008 "bison.tab.c"
    break;

  case 93: /* $@6: %empty  */
#line 270 "bison.y"
                                                                                            {scope++;}
#line 2014 "bison.tab.c"
    break;

  case 94: /* $@7: %empty  */
#line 271 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2020 "bison.tab.c"
    break;

  case 101: /* short_func_declaration: short_par_func_header ";"  */
#line 283 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2026 "bison.tab.c"
    break;

  case 102: /* short_func_declaration: nopar_func_header ";"  */
#line 284 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2032 "bison.tab.c"
    break;

  case 104: /* func_header_start: typename listspec "id"  */
#line 288 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);scope++;/**Scope++ for every function!!!**/}
#line 2038 "bison.tab.c"
    break;

  case 109: /* nopar_func_header: func_header_start "(" ")"  */
#line 296 "bison.y"
                                                                                            {/** NO SCOPE due to func_header_start! **/}
#line 2044 "bison.tab.c"
    break;

  case 110: /* $@8: %empty  */
#line 298 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);scope++;}
#line 2050 "bison.tab.c"
    break;

  case 111: /* union_declaration: "union" "id" $@8 union_body ";"  */
#line 300 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2056 "bison.tab.c"
    break;

  case 118: /* full_func_declaration: full_par_func_header "{" decl_statements "}"  */
#line 312 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2062 "bison.tab.c"
    break;

  case 119: /* full_func_declaration: nopar_class_func_header "{" decl_statements "}"  */
#line 313 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2068 "bison.tab.c"
    break;

  case 120: /* full_func_declaration: nopar_func_header "{" decl_statements "}"  */
#line 314 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2074 "bison.tab.c"
    break;

  case 123: /* class_func_header_start: typename listspec func_class "id"  */
#line 319 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);scope++;/**Scope++ for every function!!!**/}
#line 2080 "bison.tab.c"
    break;

  case 124: /* func_class: "id" "::"  */
#line 321 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 2086 "bison.tab.c"
    break;

  case 128: /* pass_variabledef: "&" "id"  */
#line 327 "bison.y"
                                                                                            {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 2092 "bison.tab.c"
    break;

  case 133: /* decl_statements: %empty  */
#line 334 "bison.y"
                                 {}
#line 2098 "bison.tab.c"
    break;

  case 137: /* decltype: %empty  */
#line 340 "bison.y"
                                 {}
#line 2104 "bison.tab.c"
    break;

  case 152: /* $@9: %empty  */
#line 359 "bison.y"
                                                                                            {scope++;}
#line 2110 "bison.tab.c"
    break;

  case 153: /* $@10: %empty  */
#line 360 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2116 "bison.tab.c"
    break;

  case 155: /* $@11: %empty  */
#line 363 "bison.y"
                                                                                            {scope++;}
#line 2122 "bison.tab.c"
    break;

  case 156: /* if_tail: "else" $@11 statement  */
#line 364 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2128 "bison.tab.c"
    break;

  case 157: /* if_tail: %empty  */
#line 365 "bison.y"
                                                                                            {}
#line 2134 "bison.tab.c"
    break;

  case 158: /* $@12: %empty  */
#line 367 "bison.y"
                                                                                            {scope++;}
#line 2140 "bison.tab.c"
    break;

  case 159: /* while_statement: "while" "(" $@12 general_expression ")" statement  */
#line 368 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2146 "bison.tab.c"
    break;

  case 160: /* while_statement: "while" error general_expression ")" statement  */
#line 369 "bison.y"
                                                                                            {yyerror("CST_ERR | Missing '('");yyerrok;}
#line 2152 "bison.tab.c"
    break;

  case 161: /* $@13: %empty  */
#line 371 "bison.y"
                                                                                            {scope++;}
#line 2158 "bison.tab.c"
    break;

  case 162: /* for_statement: "for" "(" $@13 optexpr ";" optexpr ";" optexpr ")" statement  */
#line 372 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2164 "bison.tab.c"
    break;

  case 164: /* optexpr: %empty  */
#line 375 "bison.y"
                                 {}
#line 2170 "bison.tab.c"
    break;

  case 165: /* $@14: %empty  */
#line 377 "bison.y"
                                                                                            {scope++;}
#line 2176 "bison.tab.c"
    break;

  case 166: /* switch_statement: "switch" "(" $@14 general_expression ")" switch_tail  */
#line 378 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2182 "bison.tab.c"
    break;

  case 172: /* decl_cases: %empty  */
#line 386 "bison.y"
                                 {}
#line 2188 "bison.tab.c"
    break;

  case 176: /* casestatement: "case" constant error casestatement  */
#line 392 "bison.y"
                                                                                            {yyerror("CST_ERR | Missing ':'");yyerrok;}
#line 2194 "bison.tab.c"
    break;

  case 177: /* $@15: %empty  */
#line 393 "bison.y"
                                                                                            {scope++;}
#line 2200 "bison.tab.c"
    break;

  case 178: /* casestatement: "case" constant ":" $@15 statements  */
#line 394 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2206 "bison.tab.c"
    break;

  case 179: /* casestatement: "case" constant error statements  */
#line 395 "bison.y"
                                                                                            {yyerror("CST_ERR | Missing ':'");yyerrok;}
#line 2212 "bison.tab.c"
    break;

  case 180: /* $@16: %empty  */
#line 396 "bison.y"
                                                                                            {scope++;}
#line 2218 "bison.tab.c"
    break;

  case 181: /* casestatement: "default" ":" $@16 statements  */
#line 397 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2224 "bison.tab.c"
    break;

  case 182: /* casestatement: "default" error statements  */
#line 398 "bison.y"
                                                                                            {yyerror("CST_ERR | Missing ':'");yyerrok;}
#line 2230 "bison.tab.c"
    break;

  case 184: /* $@17: %empty  */
#line 401 "bison.y"
                                                                                            {scope++;}
#line 2236 "bison.tab.c"
    break;

  case 185: /* single_casestatement: "case" constant ":" $@17 statement  */
#line 402 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2242 "bison.tab.c"
    break;

  case 188: /* io_statement: "cin" "<<" in_list error  */
#line 407 "bison.y"
                                                                                            {yyerror("CST_ERR | Missing ';' or '>>'");yyerrok;}
#line 2248 "bison.tab.c"
    break;

  case 190: /* io_statement: "cout" ">>" out_list error  */
#line 409 "bison.y"
                                                                                            {yyerror("CST_ERR | Missing ';' or '<<'");yyerrok;}
#line 2254 "bison.tab.c"
    break;

  case 198: /* main_function: main_header "{" decl_statements "}"  */
#line 424 "bison.y"
                                                                                            {hashtbl_get(hashtbl, scope);scope--;}
#line 2260 "bison.tab.c"
    break;

  case 199: /* main_header: "int" "main" "(" ")"  */
#line 426 "bison.y"
                                                                                            {scope++;}
#line 2266 "bison.tab.c"
    break;

  case 200: /* main_header: error "main" "(" ")"  */
#line 427 "bison.y"
                                                                                            {yyerror("Bad main init! Accepting only 'int main()'");yyerrok;}
#line 2272 "bison.tab.c"
    break;

  case 201: /* main_header: "int" error "(" ")"  */
#line 428 "bison.y"
                                                                                            {yyerror("Bad main init! Accepting only 'int main()'");yyerrok;}
#line 2278 "bison.tab.c"
    break;

  case 202: /* main_header: "int" "main" error ")"  */
#line 429 "bison.y"
                                                                                            {yyerror("Bad main init! Accepting only 'int main()'");yyerrok;}
#line 2284 "bison.tab.c"
    break;

  case 203: /* main_header: "int" "main" "(" error  */
#line 430 "bison.y"
                                                                                            {yyerror("Bad main init! Accepting only 'int main()'");yyerrok;}
#line 2290 "bison.tab.c"
    break;


#line 2294 "bison.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 432 "bison.y"


int main(int argc, char *argv[]){

    if(!(hashtbl = hashtbl_create(10, NULL))) {
        fprintf(stderr, "ERROR: hashtbl_create() failed!\n");
        exit(EXIT_FAILURE);
    }
    
    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;
        }
    }

    yyparse();
    
    hashtbl_get(hashtbl, scope); // Retrieve the last table (Scope 0);
    hashtbl_destroy(hashtbl);
    fclose(yyin);
    
    
    if(error_count > 0){
        printf("Syntax Analysis failed due to %d errors\n", error_count);
    }else{
        printf("Syntax Analysis completed successfully.\n");
    }
    return 0;
}


void yyerror(const char *message)
{
    error_count++;
    
    if(flag_err_type==0){
        printf("-> ERROR at line %d caused by %s : %s\n", lineno, yytext, message);
    }else if(flag_err_type==1){
        *str_buf_ptr = '\0'; // String or Comment Error. Cleanup old chars stored in buffer.
        printf("-> ERROR at line %d near \"%s\": %s\n", lineno, str_buf, message);
    }
    flag_err_type = 0; // Reset flag_err_type to default.
    if(MAX_ERRORS <= 0) return;
    if(error_count == MAX_ERRORS){
        printf("Max errors (%d) detected. ABORTING...\n", MAX_ERRORS);
        exit(-1);
    }
}
