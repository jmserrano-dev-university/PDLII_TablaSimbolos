/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "lexico.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int linea_actual = 1;

/* Se debe modificar la implementación la función yyerror. En este caso simplemente se escribe el mensaje en pantalla, por lo que habrá que añadir previamente la declaración de la variable global asociada al número de línea (declarada en la práctica anterior en el fichero fuente del flex) y modificar yyerror para que se muestre dicho número de línea */
void yyerror (char *msg){
	char buffer[50];
	sprintf(buffer,"%s %d",msg,linea_actual);
	fprintf(stderr, "\n");
	fprintf(stderr,buffer);
}




/* Line 268 of yacc.c  */
#line 90 "lexico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CAB1 = 258,
     CAB2 = 259,
     CASE = 260,
     ID = 261,
     NUM = 262,
     BREAK = 263,
     INT = 264,
     FLOAT = 265,
     CHAR = 266,
     SET = 267,
     TYPEDEF = 268,
     REAL = 269,
     STRING = 270,
     BOOL = 271,
     TRUE = 272,
     FALSE = 273,
     CARACTER = 274,
     TEXTO_OUT = 275,
     OP_INOUT = 276,
     EMPTY = 277,
     LENGTH = 278,
     VOID = 279,
     SWITCH = 280,
     WHILE = 281,
     INCLUDE = 282,
     DEFINE = 283,
     IF = 284,
     IN = 285,
     OUT = 286,
     DEFAULT = 287,
     ELSE = 288,
     CREATE = 289,
     INSERT = 290,
     MAIN = 291,
     EXTRACT = 292,
     DELETE = 293,
     MINUS = 294,
     UNION = 295,
     INTERSECTION = 296,
     NEG = 297,
     PIZ = 298,
     PDE = 299,
     COMEN = 300,
     ERR = 301,
     CORI = 302,
     CORD = 303,
     PUNTOS = 304,
     LLIZ = 305,
     LLDE = 306,
     PYC = 307,
     COMA = 308,
     ASI = 309,
     II = 310,
     DIST = 311,
     MENORQ = 312,
     MAYORQ = 313,
     MENORIQ = 314,
     MAYORIQ = 315,
     RES = 316,
     SUM = 317,
     DIV = 318,
     MUL = 319,
     OR = 320,
     AND = 321,
     COMPC = 322,
     MINC = 323,
     ADDC = 324,
     NEGEXP = 325
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 202 "lexico.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   741

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  236

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    15,    19,    22,
      25,    27,    30,    32,    35,    38,    41,    43,    46,    48,
      51,    53,    55,    59,    61,    63,    65,    67,    69,    71,
      73,    77,    81,    83,    85,    89,    91,    96,   103,   109,
     114,   117,   119,   121,   123,   125,   127,   129,   131,   134,
     137,   146,   154,   162,   169,   177,   184,   191,   197,   199,
     201,   204,   206,   210,   213,   217,   219,   222,   228,   232,
     236,   240,   244,   248,   252,   256,   260,   264,   268,   272,
     276,   280,   282,   286,   289,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   313,   319,   325,   333,   339,
     343,   345,   353,   359,   364,   368,   370,   376,   381,   385,
     389,   392,   394,   396,   398,   402,   407,   412,   417,   421,
     425
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    73,    74,    -1,    74,    -1,    75,    76,
      -1,    75,    -1,    76,    -1,    77,    78,   104,    -1,    77,
     104,    -1,    78,   104,    -1,   104,    -1,    75,    79,    -1,
      79,    -1,    76,    81,    -1,    81,    52,    -1,    77,    83,
      -1,    83,    -1,    78,    87,    -1,    87,    -1,    27,    80,
      -1,     3,    -1,     4,    -1,    13,    82,     6,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,     6,    -1,    16,
      -1,    15,    -1,    82,    84,    52,    -1,    84,    53,    85,
      -1,    85,    -1,    86,    -1,    86,    54,    97,    -1,     6,
      -1,     6,    47,     7,    48,    -1,    24,     6,    43,    88,
      44,   105,    -1,    24,     6,    43,    44,   105,    -1,    88,
      53,    82,     6,    -1,    82,     6,    -1,    90,    -1,    96,
      -1,    98,    -1,   101,    -1,    99,    -1,    87,    -1,   102,
      -1,   106,    52,    -1,    97,    52,    -1,    25,    43,     6,
      44,    50,    91,    94,    51,    -1,    25,    43,     6,    44,
      50,    94,    51,    -1,    25,    43,     6,    44,    50,    91,
      51,    -1,    25,    43,     6,    44,    50,    51,    -1,    91,
       5,    92,    49,    93,     8,    52,    -1,     5,    92,    49,
      93,     8,    52,    -1,    91,     5,    92,    49,     8,    52,
      -1,     5,    92,    49,     8,    52,    -1,     7,    -1,    20,
      -1,    93,    89,    -1,    89,    -1,    32,    49,    93,    -1,
      32,    49,    -1,    50,    93,    51,    -1,    89,    -1,    50,
      51,    -1,    29,    97,    95,    33,    95,    -1,    29,    97,
      95,    -1,    97,    62,    97,    -1,    97,    61,    97,    -1,
      97,    64,    97,    -1,    97,    63,    97,    -1,    97,    66,
      97,    -1,    97,    65,    97,    -1,    97,    60,    97,    -1,
      97,    59,    97,    -1,    97,    58,    97,    -1,    97,    57,
      97,    -1,    97,    56,    97,    -1,    97,    55,    97,    -1,
       7,    -1,    43,    97,    44,    -1,    70,    97,    -1,     6,
      -1,    14,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,   107,    -1,   113,    -1,   109,    -1,   110,    -1,     6,
      54,    97,    -1,    26,    43,    97,    44,    95,    -1,    26,
      43,    97,    44,    52,    -1,    31,    43,    20,    53,   100,
      44,    52,    -1,    31,    43,    20,    44,    52,    -1,   100,
      53,     6,    -1,     6,    -1,    30,    43,    21,    53,     6,
      44,    52,    -1,     6,    43,   103,    44,    52,    -1,     6,
      43,    44,    52,    -1,   103,    53,    97,    -1,    97,    -1,
      24,    36,    43,    44,   105,    -1,    50,    77,    93,    51,
      -1,    50,    93,    51,    -1,    50,    77,    51,    -1,    50,
      51,    -1,   111,    -1,   112,    -1,   108,    -1,    34,    43,
      44,    -1,    38,    43,     6,    44,    -1,    22,    43,     6,
      44,    -1,    23,    43,     6,    44,    -1,    97,    69,     6,
      -1,    97,    68,     6,    -1,    67,    97,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    50,    54,    56,    58,    60,    61,    62,
      63,    65,    65,    69,    69,    71,    71,    73,    73,    75,
      77,    77,    81,    83,    83,    83,    83,    83,    83,    83,
      85,    87,    87,    89,    89,    91,    91,    93,    94,    96,
      96,    98,    98,    98,    98,    98,    98,    98,    98,    98,
     100,   101,   102,   102,   104,   105,   106,   107,   109,   109,
     111,   111,   113,   113,   115,   115,   115,   117,   118,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   128,   128,   128,   130,   131,   133,   134,   136,
     136,   138,   140,   141,   143,   144,   146,   148,   149,   150,
     151,   153,   154,   154,   157,   159,   161,   163,   168,   173,
     187
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CAB1", "CAB2", "CASE", "ID", "NUM",
  "BREAK", "INT", "FLOAT", "CHAR", "SET", "TYPEDEF", "REAL", "STRING",
  "BOOL", "TRUE", "FALSE", "CARACTER", "TEXTO_OUT", "OP_INOUT", "EMPTY",
  "LENGTH", "VOID", "SWITCH", "WHILE", "INCLUDE", "DEFINE", "IF", "IN",
  "OUT", "DEFAULT", "ELSE", "CREATE", "INSERT", "MAIN", "EXTRACT",
  "DELETE", "MINUS", "UNION", "INTERSECTION", "NEG", "PIZ", "PDE", "COMEN",
  "ERR", "CORI", "CORD", "PUNTOS", "LLIZ", "LLDE", "PYC", "COMA", "ASI",
  "II", "DIST", "MENORQ", "MAYORQ", "MENORIQ", "MAYORIQ", "RES", "SUM",
  "DIV", "MUL", "OR", "AND", "COMPC", "MINC", "ADDC", "NEGEXP", "$accept",
  "prog", "dec1", "dec2", "incs_s", "tipos_s", "vars_s", "procs_s", "incs",
  "cabeceras", "tipos", "tipo", "vars", "variables", "variables_s",
  "variable", "proc", "params", "sentencia", "switch", "casos_s",
  "literal", "sentencias", "caso_defecto", "bloque", "if", "expresion",
  "while", "out", "ids", "in", "llamada_proc", "params_llamada", "main",
  "cuerpo", "llamada_conjunto", "crea_conjunto", "destruye_conjunto",
  "llamada_sivacio", "llamada_length", "inserta_conjunto", "saca_conjunto",
  "llamada_complementario", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    73,    73,    74,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      80,    80,    81,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    91,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   102,   102,   103,   103,   104,   105,   105,   105,
     105,   106,   106,   106,   107,   108,   109,   110,   111,   112,
     113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     3,     2,     2,
       1,     2,     1,     2,     2,     2,     1,     2,     1,     2,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     3,     1,     4,     6,     5,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       8,     7,     7,     6,     7,     6,     6,     5,     1,     1,
       2,     1,     3,     2,     3,     1,     2,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     5,     7,     5,     3,
       1,     7,     5,     4,     3,     1,     5,     4,     3,     3,
       2,     1,     1,     1,     3,     4,     4,     4,     3,     3,
       2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    27,    23,    24,    25,    26,     0,    29,    28,     0,
       0,     0,     0,     3,     5,     6,     0,     0,    12,     0,
       0,    16,    18,    10,     0,     0,     0,    20,    21,    19,
       1,     2,     4,    11,    13,     0,    15,     8,    17,     9,
      14,    35,     0,    32,    33,    22,     0,     0,     7,     0,
      30,     0,     0,     0,     0,     0,     0,     0,    31,    84,
      81,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,    34,    90,    92,    93,    91,     0,    38,    40,
       0,     0,   106,    36,     0,     0,     0,     0,     0,   120,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,   110,     0,    46,    61,    41,     0,    42,     0,    43,
      45,    44,    47,     0,   113,   111,   112,    37,     0,    94,
       0,     0,   114,    82,    80,    79,    78,    77,    76,    75,
      70,    69,    72,    71,    74,    73,     0,     0,     0,     0,
       0,     0,     0,   109,     0,    84,   108,    60,    49,     0,
       0,    48,    39,   116,   117,     0,   105,     0,     0,     0,
       0,    65,    68,     0,     0,     0,   107,   119,   118,   103,
       0,     0,     0,     0,    66,     0,     0,     0,     0,     0,
     115,   102,   104,     0,    96,    95,    64,    67,     0,    98,
     100,     0,     0,     0,    53,     0,     0,     0,     0,     0,
      58,    59,     0,    63,     0,    52,     0,    51,   101,    97,
      99,     0,    62,     0,    50,     0,     0,     0,    57,     0,
       0,     0,    55,    56,     0,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    29,
      19,    20,    21,    42,    43,    44,   113,    55,   114,   115,
     205,   212,   116,   206,   172,   117,   118,   119,   120,   201,
     121,   122,   167,    23,    78,   123,    73,   124,    74,    75,
     125,   126,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -112
static const yytype_int16 yypact[] =
{
     644,  -112,  -112,  -112,  -112,  -112,   682,  -112,  -112,    -2,
      11,    60,   144,  -112,    -6,    49,   144,    58,  -112,    21,
      77,  -112,  -112,  -112,    78,    42,    45,  -112,  -112,  -112,
    -112,  -112,    49,  -112,  -112,    58,  -112,  -112,  -112,  -112,
    -112,    46,   -22,  -112,    38,  -112,    97,    51,  -112,    90,
    -112,    77,   629,    54,    93,   -28,    54,    63,  -112,    61,
    -112,  -112,  -112,  -112,  -112,  -112,    62,    71,    74,   629,
     629,   629,   675,  -112,  -112,  -112,  -112,   176,  -112,  -112,
      54,   682,  -112,  -112,   629,   112,   113,    79,   620,  -112,
    -112,   629,   629,   629,   629,   629,   629,   629,   629,   629,
     629,   629,   629,    18,   116,    82,    99,   629,   103,   104,
     106,  -112,   206,  -112,  -112,  -112,   295,  -112,   660,  -112,
    -112,  -112,  -112,   109,  -112,  -112,  -112,  -112,   145,   675,
     118,   119,  -112,  -112,   233,   233,   233,   233,   233,   233,
       4,     4,   -29,   -29,  -112,  -112,    57,   152,   629,   114,
     146,   169,   159,  -112,   325,   -31,  -112,  -112,  -112,   160,
     191,  -112,  -112,  -112,  -112,   151,   675,   -15,   164,   645,
     360,  -112,   171,   156,    12,   167,  -112,  -112,  -112,  -112,
     181,   629,   184,   241,  -112,   390,   425,   232,   187,   235,
    -112,  -112,   675,     1,  -112,  -112,  -112,  -112,   198,  -112,
    -112,    13,     6,   196,  -112,     3,   199,   200,   201,   245,
    -112,  -112,   205,   595,     6,  -112,   211,  -112,  -112,  -112,
    -112,   459,   595,   207,  -112,   216,   493,   527,  -112,   222,
     225,   561,  -112,  -112,   226,  -112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,  -112,   268,  -112,   273,   212,   266,   274,  -112,
     -10,     5,   -14,  -112,   239,  -112,   269,  -112,   -96,  -112,
    -112,    69,  -111,    87,  -105,  -112,   -52,  -112,  -112,  -112,
    -112,  -112,  -112,    -7,   -53,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
static const yytype_int16 yytable[] =
{
      72,   154,    36,    82,    25,    34,   202,     6,   214,    37,
      39,    24,   146,   210,    27,    28,    80,    88,    89,    90,
     157,    10,    34,    84,   -27,    81,   211,   127,    48,   180,
      50,    51,   129,   203,    26,   203,   101,   102,   181,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    54,   204,   171,   215,   149,   188,   208,   157,   185,
      30,   146,     6,    59,    60,   189,   209,    99,   100,   101,
     102,    61,    84,    40,    62,    63,    64,    65,   195,    66,
      67,   197,     9,    41,    45,    46,   128,   171,    47,   157,
     171,    68,    52,    49,   166,    56,   169,    57,    36,    79,
      69,   165,   222,     1,    77,    85,     2,     3,     4,     5,
     226,    83,     7,     8,    86,    84,   231,    87,   130,   131,
     155,    60,    25,   132,    70,   147,   157,    71,    61,   192,
     157,    62,    63,    64,    65,   157,    66,    67,   104,   105,
     106,    53,   148,   107,   108,   109,   150,   151,    68,   152,
       1,   162,   110,     2,     3,     4,     5,    69,   168,     7,
       8,   161,   163,   164,   170,   175,   177,   173,     9,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    70,   103,    60,    71,     2,     3,     4,     5,   174,
      61,     7,     8,    62,    63,    64,    65,   178,    66,    67,
     104,   105,   106,   179,   186,   107,   108,   109,   182,   187,
      68,   190,   103,    60,   110,     2,     3,     4,     5,    69,
      61,     7,     8,    62,    63,    64,    65,   111,    66,    67,
     104,   105,   106,   191,   193,   107,   108,   109,   198,   199,
      68,   200,   207,    70,   110,   213,    71,   155,    60,    69,
     217,   220,   218,   219,   221,    61,   227,   153,    62,    63,
      64,    65,   224,    66,    67,   104,   105,   106,   228,    22,
     107,   108,   109,    70,   232,    68,    71,   233,   235,   110,
      31,    22,    35,   223,    69,    22,    38,    32,    33,   112,
      58,   170,   216,   194,    97,    98,    99,   100,   101,   102,
       0,   155,    60,     0,    38,     0,     0,     0,    70,    61,
       0,    71,    62,    63,    64,    65,     0,    66,    67,   104,
     105,   106,     0,     0,   107,   108,   109,     0,     0,    68,
       0,   155,    60,   110,     0,     0,     0,     0,    69,    61,
       0,     0,    62,    63,    64,    65,   156,    66,    67,   104,
     105,   106,     0,     0,   107,   108,   109,     0,     0,    68,
       0,     0,    70,   110,     0,    71,   155,    60,    69,     0,
       0,     0,     0,     0,    61,     0,   176,    62,    63,    64,
      65,     0,    66,    67,   104,   105,   106,     0,     0,   107,
     108,   109,    70,     0,    68,    71,   155,    60,   110,     0,
       0,     0,     0,    69,    61,     0,     0,    62,    63,    64,
      65,   184,    66,    67,   104,   105,   106,     0,     0,   107,
     108,   109,     0,     0,    68,     0,     0,    70,   110,     0,
      71,   155,    60,    69,     0,     0,     0,     0,     0,    61,
       0,   196,    62,    63,    64,    65,     0,    66,    67,   104,
     105,   106,     0,     0,   107,   108,   109,    70,     0,    68,
      71,     0,     0,   110,     0,   155,    60,   225,    69,     0,
       0,     0,     0,    61,     0,   170,    62,    63,    64,    65,
       0,    66,    67,   104,   105,   106,     0,     0,   107,   108,
     109,     0,    70,    68,     0,    71,     0,   110,     0,   155,
      60,   229,    69,     0,     0,     0,     0,    61,     0,     0,
      62,    63,    64,    65,     0,    66,    67,   104,   105,   106,
       0,     0,   107,   108,   109,     0,    70,    68,     0,    71,
       0,   110,     0,   155,    60,   230,    69,     0,     0,     0,
       0,    61,     0,     0,    62,    63,    64,    65,     0,    66,
      67,   104,   105,   106,     0,     0,   107,   108,   109,     0,
      70,    68,     0,    71,     0,   110,     0,   155,    60,   234,
      69,     0,     0,     0,     0,    61,     0,     0,    62,    63,
      64,    65,     0,    66,    67,   104,   105,   106,     0,     0,
     107,   108,   109,     0,    70,    68,     0,    71,     0,   110,
       0,   155,    60,     0,    69,     0,     0,     0,     0,    61,
       0,     0,    62,    63,    64,    65,     0,    66,    67,   104,
     105,   106,     0,     0,   107,   108,   109,     0,    70,    68,
       0,    71,     0,   110,     0,    59,    60,     0,    69,     0,
       0,     0,     0,    61,     0,     0,    62,    63,    64,    65,
       1,    66,    67,     2,     3,     4,     5,     6,     0,     7,
       8,     0,    70,    68,   133,    71,     0,     0,     9,     0,
       0,    10,    69,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,     1,   183,
       0,     2,     3,     4,     5,     0,    70,     7,     8,    71,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   158,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   159,   160,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-112))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      52,   112,    16,    56,     6,    15,     5,    13,     5,    16,
      17,     6,    43,     7,     3,     4,    44,    69,    70,    71,
     116,    27,    32,    54,     6,    53,    20,    80,    35,    44,
      52,    53,    84,    32,    36,    32,    65,    66,    53,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    46,    51,   149,    51,   107,    44,    44,   154,   170,
       0,    43,    13,     6,     7,    53,    53,    63,    64,    65,
      66,    14,    54,    52,    17,    18,    19,    20,   183,    22,
      23,   186,    24,     6,     6,    43,    81,   183,    43,   185,
     186,    34,    54,    47,   146,    44,   148,     7,   112,     6,
      43,    44,   213,     6,    50,    43,     9,    10,    11,    12,
     221,    48,    15,    16,    43,    54,   227,    43,     6,     6,
       6,     7,     6,    44,    67,    43,   222,    70,    14,   181,
     226,    17,    18,    19,    20,   231,    22,    23,    24,    25,
      26,    44,    43,    29,    30,    31,    43,    43,    34,    43,
       6,     6,    38,     9,    10,    11,    12,    43,     6,    15,
      16,    52,    44,    44,    50,     6,     6,    21,    24,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     6,     7,    70,     9,    10,    11,    12,    20,
      14,    15,    16,    17,    18,    19,    20,     6,    22,    23,
      24,    25,    26,    52,    33,    29,    30,    31,    44,    53,
      34,    44,     6,     7,    38,     9,    10,    11,    12,    43,
      14,    15,    16,    17,    18,    19,    20,    51,    22,    23,
      24,    25,    26,    52,    50,    29,    30,    31,     6,    52,
      34,     6,    44,    67,    38,    49,    70,     6,     7,    43,
      51,     6,    52,    52,    49,    14,    49,    51,    17,    18,
      19,    20,    51,    22,    23,    24,    25,    26,    52,     0,
      29,    30,    31,    67,    52,    34,    70,    52,    52,    38,
      12,    12,    16,   214,    43,    16,    17,    14,    14,    77,
      51,    50,   205,    52,    61,    62,    63,    64,    65,    66,
      -1,     6,     7,    -1,    35,    -1,    -1,    -1,    67,    14,
      -1,    70,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    31,    -1,    -1,    34,
      -1,     6,     7,    38,    -1,    -1,    -1,    -1,    43,    14,
      -1,    -1,    17,    18,    19,    20,    51,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    31,    -1,    -1,    34,
      -1,    -1,    67,    38,    -1,    70,     6,     7,    43,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    51,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    -1,    -1,    29,
      30,    31,    67,    -1,    34,    70,     6,     7,    38,    -1,
      -1,    -1,    -1,    43,    14,    -1,    -1,    17,    18,    19,
      20,    51,    22,    23,    24,    25,    26,    -1,    -1,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    67,    38,    -1,
      70,     6,     7,    43,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    51,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    31,    67,    -1,    34,
      70,    -1,    -1,    38,    -1,     6,     7,     8,    43,    -1,
      -1,    -1,    -1,    14,    -1,    50,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      31,    -1,    67,    34,    -1,    70,    -1,    38,    -1,     6,
       7,     8,    43,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    31,    -1,    67,    34,    -1,    70,
      -1,    38,    -1,     6,     7,     8,    43,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    31,    -1,
      67,    34,    -1,    70,    -1,    38,    -1,     6,     7,     8,
      43,    -1,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    31,    -1,    67,    34,    -1,    70,    -1,    38,
      -1,     6,     7,    -1,    43,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    31,    -1,    67,    34,
      -1,    70,    -1,    38,    -1,     6,     7,    -1,    43,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    19,    20,
       6,    22,    23,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    67,    34,    44,    70,    -1,    -1,    24,    -1,
      -1,    27,    43,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,     6,    44,
      -1,     9,    10,    11,    12,    -1,    67,    15,    16,    70,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    10,    11,    12,    13,    15,    16,    24,
      27,    72,    73,    74,    75,    76,    77,    78,    79,    81,
      82,    83,    87,   104,    82,     6,    36,     3,     4,    80,
       0,    74,    76,    79,    81,    78,    83,   104,    87,   104,
      52,     6,    84,    85,    86,     6,    43,    43,   104,    47,
      52,    53,    54,    44,    82,    88,    44,     7,    85,     6,
       7,    14,    17,    18,    19,    20,    22,    23,    34,    43,
      67,    70,    97,   107,   109,   110,   113,    50,   105,     6,
      44,    53,   105,    48,    54,    43,    43,    43,    97,    97,
      97,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     6,    24,    25,    26,    29,    30,    31,
      38,    51,    77,    87,    89,    90,    93,    96,    97,    98,
      99,   101,   102,   106,   108,   111,   112,   105,    82,    97,
       6,     6,    44,    44,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    43,    43,    43,    97,
      43,    43,    43,    51,    93,     6,    51,    89,    52,    68,
      69,    52,     6,    44,    44,    44,    97,   103,     6,    97,
      50,    89,    95,    21,    20,     6,    51,     6,     6,    52,
      44,    53,    44,    44,    51,    93,    33,    53,    44,    53,
      44,    52,    97,    50,    52,    95,    51,    95,     6,    52,
       6,   100,     5,    32,    51,    91,    94,    44,    44,    53,
       7,    20,    92,    49,     5,    51,    94,    51,    52,    52,
       6,    49,    93,    92,    51,     8,    93,    49,    52,     8,
       8,    93,    52,    52,     8,    52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1806 of yacc.c  */
#line 1755 "lexico.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 190 "lexico.y"

/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"

