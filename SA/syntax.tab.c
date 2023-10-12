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
#line 1 "syntax.y"

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
    extern void yyerror(char const *message, int type);   

    HASHTBL *hashtbl; /* Define hashtable */
    int scope = 0; /* Define initial scope */

    extern int lineno,line_init;
    extern char str_buf[256];
    extern char* str_buf_ptr;

#line 94 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "EOF"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_FUNCTION = 3,                 /* "function"  */
  YYSYMBOL_T_SUBROUTINE = 4,               /* "subroutine"  */
  YYSYMBOL_T_END = 5,                      /* "end"  */
  YYSYMBOL_T_INTEGER = 6,                  /* "int"  */
  YYSYMBOL_T_REAL = 7,                     /* "real"  */
  YYSYMBOL_T_LOGICAL = 8,                  /* "logical"  */
  YYSYMBOL_T_CHARACTER = 9,                /* "char"  */
  YYSYMBOL_T_COMPLEX = 10,                 /* "complex"  */
  YYSYMBOL_T_RECORD = 11,                  /* "record"  */
  YYSYMBOL_T_ENDREC = 12,                  /* "endrec"  */
  YYSYMBOL_T_LIST = 13,                    /* "list"  */
  YYSYMBOL_T_DATA = 14,                    /* "data"  */
  YYSYMBOL_T_CONTINUE = 15,                /* "continue"  */
  YYSYMBOL_T_GOTO = 16,                    /* "goto"  */
  YYSYMBOL_T_CALL = 17,                    /* "call"  */
  YYSYMBOL_T_READ = 18,                    /* "read"  */
  YYSYMBOL_T_WRITE = 19,                   /* "write"  */
  YYSYMBOL_T_NEW = 20,                     /* "new"  */
  YYSYMBOL_T_LENGTH = 21,                  /* "length"  */
  YYSYMBOL_T_IF = 22,                      /* "if"  */
  YYSYMBOL_T_THEN = 23,                    /* "then"  */
  YYSYMBOL_T_ELSE = 24,                    /* "else"  */
  YYSYMBOL_T_ENDIF = 25,                   /* "endif"  */
  YYSYMBOL_T_DO = 26,                      /* "do"  */
  YYSYMBOL_T_ENDDO = 27,                   /* "enddo"  */
  YYSYMBOL_T_STOP = 28,                    /* "stop"  */
  YYSYMBOL_T_RETURN = 29,                  /* "return"  */
  YYSYMBOL_T_ID = 30,                      /* "id"  */
  YYSYMBOL_T_ICONST = 31,                  /* "int const"  */
  YYSYMBOL_T_RCONST = 32,                  /* "real const"  */
  YYSYMBOL_T_CCONST = 33,                  /* "char const"  */
  YYSYMBOL_T_LCONST = 34,                  /* "logical const"  */
  YYSYMBOL_T_STRING = 35,                  /* "string const"  */
  YYSYMBOL_T_OROP = 36,                    /* ".OR."  */
  YYSYMBOL_T_ANDOP = 37,                   /* ".AND."  */
  YYSYMBOL_T_NOTOP = 38,                   /* ".NOT."  */
  YYSYMBOL_T_RELOP = 39,                   /* ".GT. or .GE. or .LT. or .LE. or .EQ. or .NE."  */
  YYSYMBOL_T_ADDOP = 40,                   /* "+ or -"  */
  YYSYMBOL_T_MULOP = 41,                   /* "*"  */
  YYSYMBOL_T_DIVOP = 42,                   /* "/"  */
  YYSYMBOL_T_POWEROP = 43,                 /* "**"  */
  YYSYMBOL_T_LISTFUNC = 44,                /* "listfunc"  */
  YYSYMBOL_T_LPAREN = 45,                  /* "("  */
  YYSYMBOL_T_RPAREN = 46,                  /* ")"  */
  YYSYMBOL_T_COMMA = 47,                   /* ","  */
  YYSYMBOL_T_ASSIGN = 48,                  /* "="  */
  YYSYMBOL_T_DOT = 49,                     /* "."  */
  YYSYMBOL_T_COLON = 50,                   /* ":"  */
  YYSYMBOL_T_LBRACK = 51,                  /* "["  */
  YYSYMBOL_T_RBRACK = 52,                  /* "]"  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_program = 54,                   /* program  */
  YYSYMBOL_body = 55,                      /* body  */
  YYSYMBOL_declarations = 56,              /* declarations  */
  YYSYMBOL_type = 57,                      /* type  */
  YYSYMBOL_vars = 58,                      /* vars  */
  YYSYMBOL_undef_variable = 59,            /* undef_variable  */
  YYSYMBOL_dims = 60,                      /* dims  */
  YYSYMBOL_dim = 61,                       /* dim  */
  YYSYMBOL_fields = 62,                    /* fields  */
  YYSYMBOL_field = 63,                     /* field  */
  YYSYMBOL_vals = 64,                      /* vals  */
  YYSYMBOL_value_list = 65,                /* value_list  */
  YYSYMBOL_values = 66,                    /* values  */
  YYSYMBOL_value = 67,                     /* value  */
  YYSYMBOL_sign = 68,                      /* sign  */
  YYSYMBOL_constant = 69,                  /* constant  */
  YYSYMBOL_simple_constant = 70,           /* simple_constant  */
  YYSYMBOL_complex_constant = 71,          /* complex_constant  */
  YYSYMBOL_statements = 72,                /* statements  */
  YYSYMBOL_labeled_statement = 73,         /* labeled_statement  */
  YYSYMBOL_label = 74,                     /* label  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_simple_statement = 76,          /* simple_statement  */
  YYSYMBOL_assignment = 77,                /* assignment  */
  YYSYMBOL_variable = 78,                  /* variable  */
  YYSYMBOL_expressions = 79,               /* expressions  */
  YYSYMBOL_expression = 80,                /* expression  */
  YYSYMBOL_listexpression = 81,            /* listexpression  */
  YYSYMBOL_82_1 = 82,                      /* $@1  */
  YYSYMBOL_83_2 = 83,                      /* $@2  */
  YYSYMBOL_goto_statement = 84,            /* goto_statement  */
  YYSYMBOL_labels = 85,                    /* labels  */
  YYSYMBOL_if_statement = 86,              /* if_statement  */
  YYSYMBOL_subroutine_call = 87,           /* subroutine_call  */
  YYSYMBOL_io_statement = 88,              /* io_statement  */
  YYSYMBOL_read_list = 89,                 /* read_list  */
  YYSYMBOL_read_item = 90,                 /* read_item  */
  YYSYMBOL_iter_space = 91,                /* iter_space  */
  YYSYMBOL_step = 92,                      /* step  */
  YYSYMBOL_write_list = 93,                /* write_list  */
  YYSYMBOL_write_item = 94,                /* write_item  */
  YYSYMBOL_compound_statement = 95,        /* compound_statement  */
  YYSYMBOL_branch_statement = 96,          /* branch_statement  */
  YYSYMBOL_tail = 97,                      /* tail  */
  YYSYMBOL_loop_statement = 98,            /* loop_statement  */
  YYSYMBOL_99_3 = 99,                      /* $@3  */
  YYSYMBOL_subprograms = 100,              /* subprograms  */
  YYSYMBOL_subprogram = 101,               /* subprogram  */
  YYSYMBOL_header = 102,                   /* header  */
  YYSYMBOL_103_4 = 103,                    /* $@4  */
  YYSYMBOL_104_5 = 104,                    /* $@5  */
  YYSYMBOL_105_6 = 105,                    /* $@6  */
  YYSYMBOL_formal_parameters = 106         /* formal_parameters  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   458

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   127,   127,   129,   131,   132,   133,   134,   136,   137,
     138,   139,   140,   142,   143,   145,   146,   147,   149,   150,
     152,   153,   155,   156,   158,   159,   161,   162,   165,   167,
     168,   170,   171,   173,   174,   176,   177,   179,   180,   181,
     182,   184,   186,   187,   189,   190,   192,   194,   195,   197,
     198,   199,   200,   201,   202,   203,   204,   206,   207,   209,
     210,   211,   212,   214,   215,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   234,   234,   235,   235,   237,   238,   240,   241,   243,
     244,   246,   248,   249,   251,   252,   254,   255,   257,   259,
     260,   262,   263,   265,   266,   267,   269,   270,   272,   274,
     275,   277,   277,   279,   280,   282,   284,   285,   286,   287,
     288,   288,   289,   289,   290,   291,   291,   294,   295
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
  "\"EOF\"", "error", "\"invalid token\"", "\"function\"",
  "\"subroutine\"", "\"end\"", "\"int\"", "\"real\"", "\"logical\"",
  "\"char\"", "\"complex\"", "\"record\"", "\"endrec\"", "\"list\"",
  "\"data\"", "\"continue\"", "\"goto\"", "\"call\"", "\"read\"",
  "\"write\"", "\"new\"", "\"length\"", "\"if\"", "\"then\"", "\"else\"",
  "\"endif\"", "\"do\"", "\"enddo\"", "\"stop\"", "\"return\"", "\"id\"",
  "\"int const\"", "\"real const\"", "\"char const\"", "\"logical const\"",
  "\"string const\"", "\".OR.\"", "\".AND.\"", "\".NOT.\"",
  "\".GT. or .GE. or .LT. or .LE. or .EQ. or .NE.\"", "\"+ or -\"",
  "\"*\"", "\"/\"", "\"**\"", "\"listfunc\"", "\"(\"", "\")\"", "\",\"",
  "\"=\"", "\".\"", "\":\"", "\"[\"", "\"]\"", "$accept", "program",
  "body", "declarations", "type", "vars", "undef_variable", "dims", "dim",
  "fields", "field", "vals", "value_list", "values", "value", "sign",
  "constant", "simple_constant", "complex_constant", "statements",
  "labeled_statement", "label", "statement", "simple_statement",
  "assignment", "variable", "expressions", "expression", "listexpression",
  "$@1", "$@2", "goto_statement", "labels", "if_statement",
  "subroutine_call", "io_statement", "read_list", "read_item",
  "iter_space", "step", "write_list", "write_item", "compound_statement",
  "branch_statement", "tail", "loop_statement", "$@3", "subprograms",
  "subprogram", "header", "$@4", "$@5", "$@6", "formal_parameters", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -172,    10,    22,   107,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,   100,   -12,  -172,    39,    13,   -24,   178,    16,    12,
    -172,  -172,  -172,  -172,    35,    -8,   273,  -172,   307,  -172,
    -172,  -172,    82,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
     356,   100,    -8,   429,  -172,    48,    46,    56,  -172,    -5,
     -24,    -5,    85,  -172,    97,   110,  -172,  -172,  -172,  -172,
    -172,   242,   242,   178,   144,  -172,    -5,   391,  -172,    87,
    -172,   242,   101,   242,    -8,   121,   125,  -172,  -172,  -172,
     242,   204,   153,   184,   167,    57,   214,  -172,  -172,   436,
     125,    -8,  -172,    51,  -172,   191,   183,   185,   -24,   242,
     242,   242,   187,   138,   104,   186,  -172,    40,   391,   242,
     242,   242,   242,   242,   242,   242,   178,   343,   242,   351,
    -172,    89,    -8,   139,  -172,   391,  -172,   201,   195,   215,
      29,   220,   247,    -8,   125,  -172,  -172,    52,  -172,    44,
      48,   222,     1,  -172,   359,   367,   104,  -172,   242,   226,
    -172,   242,  -172,   163,   410,   150,   138,   187,   187,   187,
    -172,   290,   120,  -172,  -172,  -172,  -172,   168,  -172,  -172,
    -172,   209,   448,   223,   224,    27,   233,  -172,   125,  -172,
      51,   235,  -172,  -172,  -172,  -172,  -172,   173,   217,  -172,
    -172,   375,   231,   391,  -172,   236,  -172,   237,  -172,   242,
     256,  -172,    89,   448,    -8,   239,   448,   448,   448,   448,
     448,  -172,   244,  -172,   222,   242,  -172,   242,   242,   202,
     222,   334,  -172,  -172,   250,   251,  -172,   254,   264,   265,
     268,   269,   257,  -172,   270,   281,   383,  -172,  -172,  -172,
     283,   242,  -172,  -172,  -172,    75,  -172,  -172,  -172,  -172,
    -172,   296,  -172,  -172,   324,   306,   222,   391,  -172,  -172,
    -172,  -172,   286,  -172,  -172,  -172
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     1,   114,     8,     9,    10,    11,
      12,     0,     0,    54,     0,     0,     0,     0,     0,     0,
      56,    55,    62,    46,     0,     0,     3,    43,     0,    45,
      47,    49,     0,    50,    51,    52,    53,    48,   106,   107,
       0,     0,     0,     0,    23,     0,     6,     0,    85,    91,
       0,    96,    92,    95,     0,     0,    37,    38,    40,    39,
     105,     0,     0,     0,     0,    75,    74,   103,    80,    93,
     102,     0,     0,     0,     0,    17,     4,    14,    42,    44,
       0,     0,     0,     0,     0,     0,     0,   113,     7,     0,
      24,     0,    22,    34,    27,     0,     0,     0,     0,     0,
       0,     0,    72,    73,   103,     0,    83,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,    58,    57,    59,     0,   119,     0,
       0,     0,     0,     0,     5,    32,    33,     0,    30,     0,
       0,     0,     0,    94,     0,     0,     0,    78,     0,     0,
      84,     0,    81,    65,    66,    67,    68,    69,    70,    71,
     101,     0,     0,     7,    61,    21,    20,     0,    19,    13,
      60,     0,     0,     0,     0,     0,     0,   115,    25,    28,
      34,     0,    31,    35,    36,    26,    88,     0,    62,    77,
      76,     0,    62,    63,    82,     0,     7,     0,    90,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    86,     0,     0,    79,     0,     0,     0,
       0,   100,   111,    18,     0,   128,   118,     0,     0,     0,
       0,     0,    34,    87,     0,     0,     0,     7,   110,   108,
       0,     0,    98,   112,   122,     0,   120,   124,   125,   117,
     116,     0,    97,   104,     0,     0,     0,    99,   123,   127,
     121,   126,     0,   109,    89,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   -84,  -172,     8,   -35,   -72,  -172,   136,   303,
     -34,  -172,   205,  -172,   169,   115,  -172,   211,  -172,  -172,
     322,   -13,   330,  -158,  -172,    -3,   279,   -47,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,   311,   -69,  -115,  -172,
     304,  -108,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -171
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,   204,    76,    77,   167,   168,    43,
      44,    46,    94,   137,   138,   139,   182,    65,   184,    26,
      27,    28,    29,    30,    31,    66,   107,    67,    68,   194,
     150,    33,   187,    34,    35,    36,    52,    53,   163,   242,
      69,    70,    37,    38,   239,    39,   243,    40,    87,    88,
     260,   258,   261,   205
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    48,   120,   198,   132,    74,    22,    90,   160,    92,
       4,    25,    49,    51,   102,   103,   104,   108,    45,    42,
      24,    50,    75,    32,   117,    32,   119,     5,   208,   143,
     174,   188,   224,   108,   125,   227,   228,   229,   230,   231,
      80,   160,    72,    22,    82,    24,    50,    51,    86,    42,
     169,    42,   144,   145,   146,    92,   134,    24,   129,   175,
     130,    71,   153,   154,   155,   156,   157,   158,   159,    47,
      23,   162,   209,   143,   259,    56,    57,    58,    59,   200,
      73,     6,     7,     8,     9,    10,   135,   151,    74,   181,
      93,   136,   152,    95,   179,    51,   198,    42,   178,   180,
     234,   191,   235,    96,   193,    75,     6,     7,     8,     9,
      10,    41,   219,     6,     7,     8,     9,    10,    11,   165,
     166,    12,    13,    14,    15,    16,    17,    80,   186,    18,
      81,    82,    98,    19,   116,    20,    21,    22,    23,    51,
     109,   110,    99,   111,   112,   113,   114,   115,   197,   118,
     147,    24,   221,   255,   148,   100,   109,   110,    32,   111,
     112,   113,   114,   115,    54,    55,   121,   199,   162,   225,
     162,   236,   122,   169,    22,    56,    57,    58,    59,   113,
     114,   115,    61,   126,    62,   170,   151,   127,    24,   101,
     112,   113,   114,   115,   257,    64,   106,   128,    54,    55,
     110,   233,   111,   112,   113,   114,   115,   240,    22,    56,
      57,    58,    59,    60,   201,   202,    61,   131,    62,   213,
     214,   140,    24,    63,    54,    55,   237,   238,   141,    64,
     115,   171,   142,   149,    22,    56,    57,    58,    59,   124,
     172,   197,    61,   264,    62,   173,    54,    55,    24,   101,
     176,    32,   177,    23,   203,    64,   192,    56,    57,    58,
      59,    60,    54,    55,    61,   215,    62,   212,   206,   207,
      24,    63,    22,    56,    57,    58,    59,    64,   210,   217,
      61,   218,    62,   222,   220,   226,    24,   101,    13,    14,
      15,    16,    17,    64,   232,    18,   244,   136,   245,    19,
     246,    20,    21,    22,    23,    13,    14,    15,    16,    17,
     247,   248,   195,   196,   249,   250,   252,    24,    20,    21,
      22,    23,    13,    14,    15,    16,    17,   253,   262,    18,
     256,   263,   265,    19,    24,    20,    21,    22,   223,    13,
      14,    15,    16,    17,    89,   185,   195,   251,    78,   211,
     183,    24,    20,    21,    22,    23,    -2,    83,    79,   123,
      84,    97,     6,     7,     8,     9,    10,   105,    24,    85,
     109,   110,     0,   111,   112,   113,   114,   115,     0,   109,
     110,   241,   111,   112,   113,   114,   115,   109,   110,   161,
     111,   112,   113,   114,   115,   109,   110,   164,   111,   112,
     113,   114,   115,   109,   110,   189,   111,   112,   113,   114,
     115,   109,   110,   190,   111,   112,   113,   114,   115,   109,
     110,   216,   111,   112,   113,   114,   115,   109,   110,   254,
     111,   112,   113,   114,   115,     6,     7,     8,     9,    10,
      41,    91,     6,     7,     8,     9,    10,    41,   133,   111,
     112,   113,   114,   115,     6,     7,     8,     9,    10
};

static const yytype_int16 yycheck[] =
{
       3,    14,    74,   161,    88,    13,    30,    42,   116,    43,
       0,     3,    15,    16,    61,    62,    63,    64,    30,    11,
      44,    45,    30,    26,    71,    28,    73,     5,     1,    98,
       1,    30,   203,    80,    81,   206,   207,   208,   209,   210,
      45,   149,    30,    30,    49,    44,    45,    50,    40,    41,
     122,    43,    99,   100,   101,    89,    91,    44,     1,    30,
       3,    45,   109,   110,   111,   112,   113,   114,   115,    30,
      31,   118,    45,   142,   245,    31,    32,    33,    34,   163,
      45,     6,     7,     8,     9,    10,    35,    47,    13,    45,
      42,    40,    52,    47,    42,    98,   254,    89,   133,    47,
     215,   148,   217,    47,   151,    30,     6,     7,     8,     9,
      10,    11,   196,     6,     7,     8,     9,    10,    11,    30,
      31,    14,    15,    16,    17,    18,    19,    45,   141,    22,
      48,    49,    47,    26,    47,    28,    29,    30,    31,   142,
      36,    37,    45,    39,    40,    41,    42,    43,   161,    48,
      46,    44,   199,   237,    50,    45,    36,    37,   161,    39,
      40,    41,    42,    43,    20,    21,    45,    47,   215,   204,
     217,   218,    47,   245,    30,    31,    32,    33,    34,    41,
      42,    43,    38,    30,    40,    46,    47,     3,    44,    45,
      40,    41,    42,    43,   241,    51,    52,    30,    20,    21,
      37,   214,    39,    40,    41,    42,    43,   220,    30,    31,
      32,    33,    34,    35,    46,    47,    38,     3,    40,    46,
      47,    30,    44,    45,    20,    21,    24,    25,    45,    51,
      43,    30,    47,    47,    30,    31,    32,    33,    34,    35,
      45,   254,    38,   256,    40,    30,    20,    21,    44,    45,
      30,   254,     5,    31,    45,    51,    30,    31,    32,    33,
      34,    35,    20,    21,    38,    48,    40,    32,    45,    45,
      44,    45,    30,    31,    32,    33,    34,    51,    45,    48,
      38,    45,    40,    27,    47,    46,    44,    45,    15,    16,
      17,    18,    19,    51,    50,    22,    46,    40,    47,    26,
      46,    28,    29,    30,    31,    15,    16,    17,    18,    19,
      46,    46,    22,    23,    46,    46,    46,    44,    28,    29,
      30,    31,    15,    16,    17,    18,    19,    46,    32,    22,
      47,    25,    46,    26,    44,    28,    29,    30,   202,    15,
      16,    17,    18,    19,    41,   140,    22,   232,    26,   180,
     139,    44,    28,    29,    30,    31,     0,     1,    28,    80,
       4,    50,     6,     7,     8,     9,    10,    63,    44,    13,
      36,    37,    -1,    39,    40,    41,    42,    43,    -1,    36,
      37,    47,    39,    40,    41,    42,    43,    36,    37,    46,
      39,    40,    41,    42,    43,    36,    37,    46,    39,    40,
      41,    42,    43,    36,    37,    46,    39,    40,    41,    42,
      43,    36,    37,    46,    39,    40,    41,    42,    43,    36,
      37,    46,    39,    40,    41,    42,    43,    36,    37,    46,
      39,    40,    41,    42,    43,     6,     7,     8,     9,    10,
      11,    12,     6,     7,     8,     9,    10,    11,    12,    39,
      40,    41,    42,    43,     6,     7,     8,     9,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,    55,    56,     0,     5,     6,     7,     8,     9,
      10,    11,    14,    15,    16,    17,    18,    19,    22,    26,
      28,    29,    30,    31,    44,    57,    72,    73,    74,    75,
      76,    77,    78,    84,    86,    87,    88,    95,    96,    98,
     100,    11,    57,    62,    63,    30,    64,    30,    74,    78,
      45,    78,    89,    90,    20,    21,    31,    32,    33,    34,
      35,    38,    40,    45,    51,    70,    78,    80,    81,    93,
      94,    45,    30,    45,    13,    30,    58,    59,    73,    75,
      45,    48,    49,     1,     4,    13,    57,   101,   102,    62,
      58,    12,    63,    42,    65,    47,    47,    89,    47,    45,
      45,    45,    80,    80,    80,    93,    52,    79,    80,    36,
      37,    39,    40,    41,    42,    43,    47,    80,    48,    80,
      59,    45,    47,    79,    35,    80,    30,     3,    30,     1,
       3,     3,    55,    12,    58,    35,    40,    66,    67,    68,
      30,    45,    47,    90,    80,    80,    80,    46,    50,    47,
      83,    47,    52,    80,    80,    80,    80,    80,    80,    80,
      94,    46,    80,    91,    46,    30,    31,    60,    61,    59,
      46,    30,    45,    30,     1,    30,    30,     5,    58,    42,
      47,    45,    69,    70,    71,    65,    74,    85,    30,    46,
      46,    80,    30,    80,    82,    22,    23,    74,    76,    47,
      55,    46,    47,    45,    57,   106,    45,    45,     1,    45,
      45,    67,    32,    46,    47,    48,    46,    48,    45,    55,
      47,    80,    27,    61,   106,    58,    46,   106,   106,   106,
     106,   106,    50,    74,    91,    91,    80,    24,    25,    97,
      74,    47,    92,    99,    46,    47,    46,    46,    46,    46,
      46,    68,    46,    46,    46,    55,    47,    80,   104,   106,
     103,   105,    32,    25,    74,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    70,
      70,    71,    72,    72,    73,    73,    74,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    78,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    82,    81,    83,    81,    84,    84,    85,    85,    86,
      86,    87,    88,    88,    89,    89,    90,    90,    91,    92,
      92,    93,    93,    94,    94,    94,    95,    95,    96,    97,
      97,    99,    98,   100,   100,   101,   102,   102,   102,   102,
     103,   102,   104,   102,   102,   105,   102,   106,   106
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     3,     5,     3,     0,     1,     1,
       1,     1,     1,     3,     1,     2,     4,     1,     3,     1,
       1,     1,     2,     1,     2,     4,     4,     2,     3,     3,
       1,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     6,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       4,     4,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     4,     4,     3,     5,
       1,     0,     4,     0,     3,     2,     6,     3,     1,     9,
       5,     2,     2,     2,     3,     1,     1,     7,     4,     2,
       0,     3,     1,     1,     7,     1,     1,     1,     7,     3,
       1,     0,     7,     2,     0,     3,     6,     6,     5,     2,
       0,     7,     0,     7,     6,     0,     7,     4,     2
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
  case 7: /* declarations: %empty  */
#line 134 "syntax.y"
                                                                                                             { }
#line 1681 "syntax.tab.c"
    break;

  case 16: /* undef_variable: "id" "(" dims ")"  */
#line 146 "syntax.y"
                                                                                   { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1687 "syntax.tab.c"
    break;

  case 17: /* undef_variable: "id"  */
#line 147 "syntax.y"
                                                                                   { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1693 "syntax.tab.c"
    break;

  case 21: /* dim: "id"  */
#line 153 "syntax.y"
                                                                                   { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1699 "syntax.tab.c"
    break;

  case 26: /* vals: vals "," "id" value_list  */
#line 161 "syntax.y"
                                                                                   { hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope); }
#line 1705 "syntax.tab.c"
    break;

  case 27: /* vals: "id" value_list  */
#line 162 "syntax.y"
                                                                                   { hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope); }
#line 1711 "syntax.tab.c"
    break;

  case 34: /* sign: %empty  */
#line 174 "syntax.y"
                                                                                             { }
#line 1717 "syntax.tab.c"
    break;

  case 59: /* variable: variable "." "id"  */
#line 209 "syntax.y"
                                                                                        { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1723 "syntax.tab.c"
    break;

  case 62: /* variable: "id"  */
#line 212 "syntax.y"
                                                                                        { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1729 "syntax.tab.c"
    break;

  case 81: /* $@1: %empty  */
#line 234 "syntax.y"
                                                                                                               { scope++; }
#line 1735 "syntax.tab.c"
    break;

  case 82: /* listexpression: "[" expressions "]" $@1  */
#line 234 "syntax.y"
                                                                                                                                     { hashtbl_get(hashtbl, scope); scope--; }
#line 1741 "syntax.tab.c"
    break;

  case 83: /* $@2: %empty  */
#line 235 "syntax.y"
                                                                                                               { scope++; }
#line 1747 "syntax.tab.c"
    break;

  case 84: /* listexpression: "[" "]" $@2  */
#line 235 "syntax.y"
                                                                                                                                     { hashtbl_get(hashtbl, scope); scope--; }
#line 1753 "syntax.tab.c"
    break;

  case 86: /* goto_statement: "goto" "id" "," "(" labels ")"  */
#line 238 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope); }
#line 1759 "syntax.tab.c"
    break;

  case 89: /* if_statement: "if" "(" expression ")" label "," label "," label  */
#line 243 "syntax.y"
                                                                                                                { scope++; }
#line 1765 "syntax.tab.c"
    break;

  case 90: /* if_statement: "if" "(" expression ")" simple_statement  */
#line 244 "syntax.y"
                                                                                                                { scope++; }
#line 1771 "syntax.tab.c"
    break;

  case 97: /* read_item: "(" read_list "," "id" "=" iter_space ")"  */
#line 255 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1777 "syntax.tab.c"
    break;

  case 100: /* step: %empty  */
#line 260 "syntax.y"
                                                                                                                          { }
#line 1783 "syntax.tab.c"
    break;

  case 104: /* write_item: "(" write_list "," "id" "=" iter_space ")"  */
#line 266 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1789 "syntax.tab.c"
    break;

  case 109: /* tail: "else" body "endif"  */
#line 274 "syntax.y"
                                                                                                                { scope++; }
#line 1795 "syntax.tab.c"
    break;

  case 110: /* tail: "endif"  */
#line 275 "syntax.y"
                                                                                                                { hashtbl_get(hashtbl, scope); scope--; }
#line 1801 "syntax.tab.c"
    break;

  case 111: /* $@3: %empty  */
#line 277 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope); scope++;}
#line 1807 "syntax.tab.c"
    break;

  case 112: /* loop_statement: "do" "id" "=" iter_space body "enddo" $@3  */
#line 277 "syntax.y"
                                                                                                                                                                          { hashtbl_get(hashtbl, scope); scope--; }
#line 1813 "syntax.tab.c"
    break;

  case 114: /* subprograms: %empty  */
#line 280 "syntax.y"
                                                                                                                { }
#line 1819 "syntax.tab.c"
    break;

  case 115: /* subprogram: header body "end"  */
#line 282 "syntax.y"
                                                                                                                { hashtbl_get(hashtbl, scope); scope--; }
#line 1825 "syntax.tab.c"
    break;

  case 116: /* header: type "function" "id" "(" formal_parameters ")"  */
#line 284 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); { scope++; } }
#line 1831 "syntax.tab.c"
    break;

  case 117: /* header: "list" "function" "id" "(" formal_parameters ")"  */
#line 285 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1837 "syntax.tab.c"
    break;

  case 118: /* header: "subroutine" "id" "(" formal_parameters ")"  */
#line 286 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope); }
#line 1843 "syntax.tab.c"
    break;

  case 119: /* header: "subroutine" "id"  */
#line 287 "syntax.y"
                                                                                                                { hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); }
#line 1849 "syntax.tab.c"
    break;

  case 120: /* $@4: %empty  */
#line 288 "syntax.y"
                                                                                                                { yyerror("Wrong use of header", 0); yyerrok;}
#line 1855 "syntax.tab.c"
    break;

  case 121: /* header: "list" error "id" "(" formal_parameters ")" $@4  */
#line 288 "syntax.y"
                                                                                                                                                                  { hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope); }
#line 1861 "syntax.tab.c"
    break;

  case 122: /* $@5: %empty  */
#line 289 "syntax.y"
                                                                                                                { yyerror("Wrong use of header", 0); yyerrok;}
#line 1867 "syntax.tab.c"
    break;

  case 123: /* header: error "function" "id" "(" formal_parameters ")" $@5  */
#line 289 "syntax.y"
                                                                                                                                                                  { hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope); }
#line 1873 "syntax.tab.c"
    break;

  case 124: /* header: "list" "function" error "(" formal_parameters ")"  */
#line 290 "syntax.y"
                                                                                                                { yyerror("Wrong use of header", 0); yyerrok;}
#line 1879 "syntax.tab.c"
    break;

  case 125: /* $@6: %empty  */
#line 291 "syntax.y"
                                                                                                                { yyerror("Wrong use of header", 0); yyerrok;}
#line 1885 "syntax.tab.c"
    break;

  case 126: /* header: "list" "function" "id" error formal_parameters ")" $@6  */
#line 291 "syntax.y"
                                                                                                                                                                  { hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope); }
#line 1891 "syntax.tab.c"
    break;


#line 1895 "syntax.tab.c"

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

#line 298 "syntax.y"


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
