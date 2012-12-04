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
#include "tablaSimbolos.h" //Añadimos la tabla de simbolos

/*Declaración de para usar yylval*/
typedef struct{
	int token; 		/*Código del token*/
	char *cadena; 	/*Nombre del token*/
	tDato tipo; 	/*Tipo del token*/
}atributos;

#define YYSTYPE atributos
/*Fin Declaración*/

int linea_actual = 1;

/* Se debe modificar la implementación la función yyerror. En este caso simplemente se escribe el mensaje en pantalla, por lo que habrá que añadir previamente la declaración de la variable global asociada al número de línea (declarada en la práctica anterior en el fichero fuente del flex) y modificar yyerror para que se muestre dicho número de línea */
void yyerror (char *msg){
	char buffer[50];
	sprintf(buffer,"%s %d",msg,linea_actual);
	fprintf(stderr, "\n");
	fprintf(stderr,buffer);
}

tDato tipoAux; //Almacenamos el tipo para las declaraciones de VARIABLES
int numParametros;
char nombreProc[100];



/* Line 268 of yacc.c  */
#line 104 "lexico.tab.c"

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
     OP_INOUT = 275,
     EMPTY = 276,
     LENGTH = 277,
     VOID = 278,
     SWITCH = 279,
     WHILE = 280,
     INCLUDE = 281,
     DEFINE = 282,
     IF = 283,
     IN = 284,
     OUT = 285,
     DEFAULT = 286,
     ELSE = 287,
     CREATE = 288,
     INSERT = 289,
     MAIN = 290,
     EXTRACT = 291,
     DELETE = 292,
     MINUS = 293,
     UNION = 294,
     INTERSECTION = 295,
     NEG = 296,
     PIZ = 297,
     PDE = 298,
     COMEN = 299,
     ERR = 300,
     CORI = 301,
     CORD = 302,
     PUNTOS = 303,
     LLIZ = 304,
     LLDE = 305,
     PYC = 306,
     COMA = 307,
     ASI = 308,
     II = 309,
     DIST = 310,
     MENORQ = 311,
     MAYORQ = 312,
     MENORIQ = 313,
     MAYORIQ = 314,
     RES = 315,
     SUM = 316,
     DIV = 317,
     MUL = 318,
     OR = 319,
     AND = 320,
     COMPC = 321,
     MINC = 322,
     ADDC = 323,
     NEGEXP = 324
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
#line 215 "lexico.tab.c"

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
#define YYLAST   783

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

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
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    15,    19,    22,
      25,    27,    30,    32,    35,    37,    40,    42,    45,    47,
      50,    52,    54,    59,    61,    63,    65,    67,    69,    71,
      73,    74,    79,    83,    85,    87,    91,    93,    94,    95,
     104,   105,   106,   114,   119,   122,   124,   126,   128,   130,
     132,   134,   136,   139,   142,   151,   159,   167,   174,   182,
     189,   196,   202,   204,   206,   209,   211,   215,   218,   222,
     224,   227,   233,   237,   241,   245,   249,   253,   257,   261,
     265,   269,   273,   277,   281,   285,   287,   291,   294,   296,
     298,   300,   302,   304,   306,   308,   310,   312,   314,   318,
     324,   330,   338,   344,   348,   350,   358,   359,   360,   368,
     373,   377,   379,   380,   387,   392,   396,   400,   403,   405,
     407,   409,   413,   418,   423,   428,   432,   436
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    73,    -1,    73,    -1,    74,    75,
      -1,    74,    -1,    75,    -1,    76,    77,   110,    -1,    76,
     110,    -1,    77,   110,    -1,   110,    -1,    74,    78,    -1,
      78,    -1,    75,    80,    -1,    80,    -1,    76,    82,    -1,
      82,    -1,    77,    87,    -1,    87,    -1,    26,    79,    -1,
       3,    -1,     4,    -1,    13,    81,     6,    51,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,     6,    -1,    16,
      -1,    15,    -1,    -1,    81,    83,    84,    51,    -1,    84,
      52,    85,    -1,    85,    -1,    86,    -1,    86,    53,   101,
      -1,     6,    -1,    -1,    -1,    23,     6,    42,    88,    92,
      43,    89,   112,    -1,    -1,    -1,    23,     6,    42,    90,
      43,    91,   112,    -1,    92,    52,    81,     6,    -1,    81,
       6,    -1,    94,    -1,   100,    -1,   102,    -1,   105,    -1,
     103,    -1,    87,    -1,   106,    -1,   113,    51,    -1,   101,
      51,    -1,    24,    42,     6,    43,    49,    95,    98,    50,
      -1,    24,    42,     6,    43,    49,    98,    50,    -1,    24,
      42,     6,    43,    49,    95,    50,    -1,    24,    42,     6,
      43,    49,    50,    -1,    95,     5,    96,    48,    97,     8,
      51,    -1,     5,    96,    48,    97,     8,    51,    -1,    95,
       5,    96,    48,     8,    51,    -1,     5,    96,    48,     8,
      51,    -1,     7,    -1,    19,    -1,    97,    93,    -1,    93,
      -1,    31,    48,    97,    -1,    31,    48,    -1,    49,    97,
      50,    -1,    93,    -1,    49,    50,    -1,    28,   101,    99,
      32,    99,    -1,    28,   101,    99,    -1,   101,    61,   101,
      -1,   101,    60,   101,    -1,   101,    63,   101,    -1,   101,
      62,   101,    -1,   101,    65,   101,    -1,   101,    64,   101,
      -1,   101,    59,   101,    -1,   101,    58,   101,    -1,   101,
      57,   101,    -1,   101,    56,   101,    -1,   101,    55,   101,
      -1,   101,    54,   101,    -1,     7,    -1,    42,   101,    43,
      -1,    69,   101,    -1,     6,    -1,    14,    -1,    17,    -1,
      18,    -1,    19,    -1,    15,    -1,   114,    -1,   120,    -1,
     116,    -1,   117,    -1,     6,    53,   101,    -1,    25,    42,
     101,    43,    99,    -1,    25,    42,   101,    43,    51,    -1,
      30,    42,    15,    52,   104,    43,    51,    -1,    30,    42,
      15,    43,    51,    -1,   104,    52,     6,    -1,     6,    -1,
      29,    42,    20,    52,     6,    43,    51,    -1,    -1,    -1,
       6,    42,   107,   109,   108,    43,    51,    -1,     6,    42,
      43,    51,    -1,   109,    52,   101,    -1,   101,    -1,    -1,
      23,    35,   111,    42,    43,   112,    -1,    49,    76,    97,
      50,    -1,    49,    97,    50,    -1,    49,    76,    50,    -1,
      49,    50,    -1,   118,    -1,   119,    -1,   115,    -1,    33,
      42,    43,    -1,    37,    42,     6,    43,    -1,    21,    42,
       6,    43,    -1,    22,    42,     6,    43,    -1,   101,    68,
       6,    -1,   101,    67,     6,    -1,    66,   101,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    65,    69,    71,    73,    75,    76,    77,
      78,    80,    80,    84,    84,    86,    86,    88,    88,    90,
      92,    92,    96,   107,   108,   109,   110,   111,   119,   120,
     123,   123,   126,   127,   130,   131,   141,   153,   160,   153,
     162,   169,   162,   172,   173,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   186,   210,   229,   253,   275,   281,
     282,   288,   291,   292,   295,   295,   298,   298,   301,   301,
     301,   305,   306,   310,   316,   322,   329,   336,   343,   350,
     357,   364,   371,   378,   385,   392,   393,   394,   401,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   445,
     446,   449,   450,   453,   453,   456,   459,   464,   459,   470,
     477,   488,   495,   495,   498,   499,   500,   501,   504,   505,
     506,   509,   513,   518,   527,   538,   547,   565
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CAB1", "CAB2", "CASE", "ID", "NUM",
  "BREAK", "INT", "FLOAT", "CHAR", "SET", "TYPEDEF", "REAL", "STRING",
  "BOOL", "TRUE", "FALSE", "CARACTER", "OP_INOUT", "EMPTY", "LENGTH",
  "VOID", "SWITCH", "WHILE", "INCLUDE", "DEFINE", "IF", "IN", "OUT",
  "DEFAULT", "ELSE", "CREATE", "INSERT", "MAIN", "EXTRACT", "DELETE",
  "MINUS", "UNION", "INTERSECTION", "NEG", "PIZ", "PDE", "COMEN", "ERR",
  "CORI", "CORD", "PUNTOS", "LLIZ", "LLDE", "PYC", "COMA", "ASI", "II",
  "DIST", "MENORQ", "MAYORQ", "MENORIQ", "MAYORIQ", "RES", "SUM", "DIV",
  "MUL", "OR", "AND", "COMPC", "MINC", "ADDC", "NEGEXP", "$accept", "prog",
  "dec1", "dec2", "incs_s", "tipos_s", "vars_s", "procs_s", "incs",
  "cabeceras", "tipos", "tipo", "vars", "$@1", "variables", "variables_s",
  "variable", "proc", "$@2", "$@3", "$@4", "$@5", "params", "sentencia",
  "switch", "casos_s", "literal", "sentencias", "caso_defecto", "bloque",
  "if", "expresion", "while", "out", "ids", "in", "llamada_proc", "$@6",
  "$@7", "params_llamada", "main", "$@8", "cuerpo", "llamada_conjunto",
  "crea_conjunto", "destruye_conjunto", "llamada_sivacio",
  "llamada_length", "inserta_conjunto", "saca_conjunto",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    72,    72,    72,    73,    73,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      79,    79,    80,    81,    81,    81,    81,    81,    81,    81,
      83,    82,    84,    84,    85,    85,    86,    88,    89,    87,
      90,    91,    87,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   107,   108,   106,   106,
     109,   109,   111,   110,   112,   112,   112,   112,   113,   113,
     113,   114,   115,   116,   117,   118,   119,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     3,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     3,     1,     1,     3,     1,     0,     0,     8,
       0,     0,     7,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     8,     7,     7,     6,     7,     6,
       6,     5,     1,     1,     2,     1,     3,     2,     3,     1,
       2,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       5,     7,     5,     3,     1,     7,     0,     0,     7,     4,
       3,     1,     0,     6,     4,     3,     3,     2,     1,     1,
       1,     3,     4,     4,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    27,    23,    24,    25,    26,     0,    29,    28,     0,
       0,     0,     0,     3,     5,     6,     0,     0,    12,    14,
      30,    16,    18,    10,     0,     0,   112,    20,    21,    19,
       1,     2,     4,    11,    13,     0,    15,     8,    17,     9,
       0,     0,    37,     0,     7,    36,     0,    33,    34,    22,
       0,     0,     0,    31,     0,     0,     0,     0,    41,     0,
      32,    88,    85,    89,    93,    90,    91,    92,     0,     0,
       0,     0,     0,     0,    35,    94,    96,    97,    95,    44,
      38,     0,     0,     0,   113,     0,     0,     0,     0,     0,
     127,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    88,    93,     0,
       0,     0,     0,     0,     0,     0,   117,     0,    50,    65,
      45,     0,    46,     0,    47,    49,    48,    51,     0,   120,
     118,   119,    98,     0,     0,   121,    86,    84,    83,    82,
      81,    80,    79,    74,    73,    76,    75,    78,    77,    39,
      43,   106,     0,     0,     0,     0,     0,     0,   116,     0,
      88,   115,    64,    53,     0,     0,    52,   123,   124,     0,
       0,     0,     0,     0,    69,    72,     0,     0,     0,   114,
     126,   125,   109,   111,   107,     0,     0,    70,     0,     0,
       0,     0,     0,   122,     0,     0,     0,   100,    99,    68,
      71,     0,   102,   104,     0,   110,     0,     0,     0,    57,
       0,     0,     0,     0,     0,   108,    62,    63,     0,    67,
       0,    56,     0,    55,   105,   101,   103,     0,    66,     0,
      54,     0,     0,     0,    61,     0,     0,     0,    59,    60,
       0,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    29,
      19,    20,    21,    40,    46,    47,    48,   118,    50,   104,
      51,    82,    57,   119,   120,   210,   218,   121,   211,   175,
     122,   123,   124,   125,   204,   126,   127,   170,   195,   184,
      23,    43,    84,   128,    75,   129,    76,    77,   130,   131,
      78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -175
static const yytype_int16 yypact[] =
{
     613,  -175,  -175,  -175,  -175,  -175,   152,  -175,  -175,    -4,
      75,    11,    13,  -175,    58,     0,    13,    52,  -175,  -175,
    -175,  -175,  -175,  -175,    76,    47,  -175,  -175,  -175,  -175,
    -175,  -175,     0,  -175,  -175,    52,  -175,  -175,  -175,  -175,
      90,    53,    54,    61,  -175,  -175,   -17,  -175,    63,  -175,
     152,    69,    77,  -175,    90,    48,    93,    31,  -175,    51,
    -175,    65,  -175,  -175,  -175,  -175,  -175,  -175,    83,    84,
      86,    48,    48,    48,   703,  -175,  -175,  -175,  -175,  -175,
    -175,   152,    51,   184,  -175,    48,   126,   127,    91,   181,
    -175,  -175,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    51,   129,  -175,     8,   137,   143,
     108,   112,    48,   113,   115,   117,  -175,   245,  -175,  -175,
    -175,   332,  -175,   616,  -175,  -175,  -175,  -175,   118,  -175,
    -175,  -175,   703,   128,   130,  -175,  -175,    46,    46,    46,
      46,    46,    46,    59,    59,    29,    29,  -175,  -175,  -175,
    -175,   131,   160,    48,   123,   150,   161,   169,  -175,   366,
     -32,  -175,  -175,  -175,   191,   198,  -175,  -175,  -175,   159,
      48,   168,   510,   400,  -175,   183,   164,    43,   175,  -175,
    -175,  -175,  -175,   703,   167,   171,   279,  -175,   434,   468,
     216,   172,   219,  -175,    48,   185,     1,  -175,  -175,  -175,
    -175,   186,  -175,  -175,    49,   703,   176,    57,   182,  -175,
       2,   197,   180,   207,   226,  -175,  -175,  -175,   200,   714,
      57,  -175,   199,  -175,  -175,  -175,  -175,   521,   714,   217,
    -175,   220,   574,   627,  -175,   221,   225,   680,  -175,  -175,
     228,  -175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,   265,  -175,   266,   201,   267,   274,  -175,
      45,    -1,   -15,  -175,  -175,   179,  -175,    56,  -175,  -175,
    -175,  -175,  -175,  -101,  -175,  -175,    70,  -114,    71,  -174,
    -175,   -55,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
      -8,  -175,   -78,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -41
static const yytype_int16 yytable[] =
{
      74,    36,    25,   159,   106,    24,   207,   220,    37,    39,
     151,    30,   198,     6,   -27,   200,    89,    90,    91,     1,
     162,    85,     2,     3,     4,     5,   149,    44,     7,     8,
     132,    26,   208,   208,    53,    54,     9,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    56,
     151,   209,   221,   174,    61,    62,    22,   154,   162,   188,
      34,    85,    63,    64,   216,    65,    66,    67,    22,    68,
      69,     6,    22,    38,    80,     9,   217,    34,    27,    28,
     105,    70,    41,    81,    10,   174,   191,   162,   174,    42,
      71,    38,   213,   102,   103,   192,    45,   -40,   172,    79,
      83,   214,    36,    52,    49,   228,    98,    99,   100,   101,
     102,   103,    58,   232,    72,   183,    55,    73,    85,   237,
      59,   100,   101,   102,   103,    86,    87,   162,    88,   160,
      62,   162,   133,   134,   135,   150,   162,    63,    64,   205,
      65,    66,    67,   -29,    68,    69,   109,   110,   111,    25,
     152,   112,   113,   114,   153,   155,    70,   156,     1,   157,
     115,     2,     3,     4,     5,    71,   171,     7,     8,   166,
     176,   167,   173,   168,   169,   178,   177,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    72,
     107,    62,    73,     2,     3,     4,     5,   180,    63,   108,
       8,    65,    66,    67,   181,    68,    69,   109,   110,   111,
     182,   185,   112,   113,   114,   189,   190,    70,   193,   194,
     196,   115,   201,   202,   136,   203,    71,   215,   206,   212,
     219,   224,   226,    60,   116,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   223,   227,   230,
      72,   107,    62,    73,     2,     3,     4,     5,   225,    63,
     108,     8,    65,    66,    67,   233,    68,    69,   109,   110,
     111,   234,   238,   112,   113,   114,   239,    31,    70,   241,
      32,   222,   115,    35,   117,   160,    62,    71,    33,     0,
     229,     0,     0,    63,    64,   158,    65,    66,    67,     0,
      68,    69,   109,   110,   111,     0,     0,   112,   113,   114,
       0,    72,    70,     0,    73,     0,   115,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,     0,   173,     0,
     197,     0,     0,     0,     0,     0,     0,     0,   160,    62,
       0,     0,     0,     0,     0,    72,    63,    64,    73,    65,
      66,    67,     0,    68,    69,   109,   110,   111,     0,     0,
     112,   113,   114,     0,     0,    70,     0,     0,     0,   115,
       0,     0,   160,    62,    71,     0,     0,     0,     0,     0,
      63,    64,   161,    65,    66,    67,     0,    68,    69,   109,
     110,   111,     0,     0,   112,   113,   114,     0,    72,    70,
       0,    73,     0,   115,     0,     0,   160,    62,    71,     0,
       0,     0,     0,     0,    63,    64,   179,    65,    66,    67,
       0,    68,    69,   109,   110,   111,     0,     0,   112,   113,
     114,     0,    72,    70,     0,    73,     0,   115,     0,     0,
     160,    62,    71,     0,     0,     0,     0,     0,    63,    64,
     187,    65,    66,    67,     0,    68,    69,   109,   110,   111,
       0,     0,   112,   113,   114,     0,    72,    70,     0,    73,
       0,   115,     0,     0,   160,    62,    71,     0,     0,     0,
       0,     0,    63,    64,   199,    65,    66,    67,     0,    68,
      69,   109,   110,   111,     0,     0,   112,   113,   114,     0,
      72,    70,     0,    73,     0,   115,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   160,    62,   231,
       0,     0,     0,     0,    72,    63,    64,    73,    65,    66,
      67,     0,    68,    69,   109,   110,   111,     0,     0,   112,
     113,   114,     0,   186,    70,     0,     0,     0,   115,     0,
       0,     0,     0,    71,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,     0,     0,     0,
     160,    62,   235,     0,     0,     0,     0,    72,    63,    64,
      73,    65,    66,    67,     0,    68,    69,   109,   110,   111,
       0,     0,   112,   113,   114,     0,     0,    70,     0,     0,
       0,   115,     0,     0,     0,     0,    71,     0,     0,     1,
       0,     0,     2,     3,     4,     5,     6,     0,     7,     8,
       0,     0,     0,   160,    62,   236,     9,     0,     0,    10,
      72,    63,    64,    73,    65,    66,    67,     0,    68,    69,
     109,   110,   111,     0,     0,   112,   113,   114,     0,     0,
      70,     0,     0,     0,   115,     0,     0,   163,     0,    71,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,   164,   165,     0,   160,    62,   240,     0,
       0,     0,     0,    72,    63,    64,    73,    65,    66,    67,
       0,    68,    69,   109,   110,   111,     0,     0,   112,   113,
     114,     0,     0,    70,     0,     0,     0,   115,     0,     0,
     160,    62,    71,     0,     0,     0,     0,     0,    63,    64,
       0,    65,    66,    67,     0,    68,    69,   109,   110,   111,
       0,     0,   112,   113,   114,     0,    72,    70,     0,    73,
       0,   115,     0,     0,     0,     0,    71,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,    73
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-175))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      55,    16,     6,   117,    82,     6,     5,     5,    16,    17,
      42,     0,   186,    13,     6,   189,    71,    72,    73,     6,
     121,    53,     9,    10,    11,    12,   104,    35,    15,    16,
      85,    35,    31,    31,    51,    52,    23,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    50,
      42,    50,    50,   154,     6,     7,     0,   112,   159,   173,
      15,    53,    14,    15,     7,    17,    18,    19,    12,    21,
      22,    13,    16,    17,    43,    23,    19,    32,     3,     4,
      81,    33,     6,    52,    26,   186,    43,   188,   189,    42,
      42,    35,    43,    64,    65,    52,     6,    43,   153,     6,
      49,    52,   117,    42,    51,   219,    60,    61,    62,    63,
      64,    65,    43,   227,    66,   170,    53,    69,    53,   233,
      43,    62,    63,    64,    65,    42,    42,   228,    42,     6,
       7,   232,     6,     6,    43,     6,   237,    14,    15,   194,
      17,    18,    19,     6,    21,    22,    23,    24,    25,     6,
      42,    28,    29,    30,    42,    42,    33,    42,     6,    42,
      37,     9,    10,    11,    12,    42,     6,    15,    16,    51,
      20,    43,    49,    43,    43,     6,    15,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       6,     7,    69,     9,    10,    11,    12,     6,    14,    15,
      16,    17,    18,    19,     6,    21,    22,    23,    24,    25,
      51,    43,    28,    29,    30,    32,    52,    33,    43,    52,
      49,    37,     6,    51,    43,     6,    42,    51,    43,    43,
      48,    51,     6,    54,    50,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    50,    48,    50,
      66,     6,     7,    69,     9,    10,    11,    12,    51,    14,
      15,    16,    17,    18,    19,    48,    21,    22,    23,    24,
      25,    51,    51,    28,    29,    30,    51,    12,    33,    51,
      14,   210,    37,    16,    83,     6,     7,    42,    14,    -1,
     220,    -1,    -1,    14,    15,    50,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    66,    33,    -1,    69,    -1,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    66,    14,    15,    69,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    -1,    33,    -1,    -1,    -1,    37,
      -1,    -1,     6,     7,    42,    -1,    -1,    -1,    -1,    -1,
      14,    15,    50,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    30,    -1,    66,    33,
      -1,    69,    -1,    37,    -1,    -1,     6,     7,    42,    -1,
      -1,    -1,    -1,    -1,    14,    15,    50,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    66,    33,    -1,    69,    -1,    37,    -1,    -1,
       6,     7,    42,    -1,    -1,    -1,    -1,    -1,    14,    15,
      50,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    66,    33,    -1,    69,
      -1,    37,    -1,    -1,     6,     7,    42,    -1,    -1,    -1,
      -1,    -1,    14,    15,    50,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    -1,
      66,    33,    -1,    69,    -1,    37,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
      -1,    -1,    -1,    -1,    66,    14,    15,    69,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    43,    33,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
       6,     7,     8,    -1,    -1,    -1,    -1,    66,    14,    15,
      69,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,     6,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    -1,     6,     7,     8,    23,    -1,    -1,    26,
      66,    14,    15,    69,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    37,    -1,    -1,    51,    -1,    42,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    -1,     6,     7,     8,    -1,
      -1,    -1,    -1,    66,    14,    15,    69,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,
       6,     7,    42,    -1,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    66,    33,    -1,    69,
      -1,    37,    -1,    -1,    -1,    -1,    42,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    10,    11,    12,    13,    15,    16,    23,
      26,    71,    72,    73,    74,    75,    76,    77,    78,    80,
      81,    82,    87,   110,    81,     6,    35,     3,     4,    79,
       0,    73,    75,    78,    80,    77,    82,   110,    87,   110,
      83,     6,    42,   111,   110,     6,    84,    85,    86,    51,
      88,    90,    42,    51,    52,    53,    81,    92,    43,    43,
      85,     6,     7,    14,    15,    17,    18,    19,    21,    22,
      33,    42,    66,    69,   101,   114,   116,   117,   120,     6,
      43,    52,    91,    49,   112,    53,    42,    42,    42,   101,
     101,   101,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    89,    81,   112,     6,    15,    23,
      24,    25,    28,    29,    30,    37,    50,    76,    87,    93,
      94,    97,   100,   101,   102,   103,   105,   106,   113,   115,
     118,   119,   101,     6,     6,    43,    43,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   112,
       6,    42,    42,    42,   101,    42,    42,    42,    50,    97,
       6,    50,    93,    51,    67,    68,    51,    43,    43,    43,
     107,     6,   101,    49,    93,    99,    20,    15,     6,    50,
       6,     6,    51,   101,   109,    43,    43,    50,    97,    32,
      52,    43,    52,    43,    52,   108,    49,    51,    99,    50,
      99,     6,    51,     6,   104,   101,    43,     5,    31,    50,
      95,    98,    43,    43,    52,    51,     7,    19,    96,    48,
       5,    50,    98,    50,    51,    51,     6,    48,    97,    96,
      50,     8,    97,    48,    51,     8,     8,    97,    51,    51,
       8,    51
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
        case 3:

/* Line 1806 of yacc.c  */
#line 65 "lexico.y"
    {createTS();}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 96 "lexico.y"
    {
								if(existeEntradaLocal((yyvsp[(3) - (4)]).cadena) == 0){
									pushTS(rellenaEntrada(linea_actual,(yyvsp[(3) - (4)]).cadena,(yyvsp[(2) - (4)]).tipo,defTipo,0));
								}else{
									printf("\n\n*Error linea %d: El identificador de la refinicion de tipo ya existe",linea_actual);
								}
							}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 107 "lexico.y"
    {(yyval).tipo = entero;}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 108 "lexico.y"
    {(yyval).tipo = real;}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 109 "lexico.y"
    {(yyval).tipo = caracter;}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 110 "lexico.y"
    {(yyval).tipo = conjunto;}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 111 "lexico.y"
    {
		if((tipoAux = existeEntradaDefTipo((yyvsp[(1) - (1)]).cadena)) != 0){
		 (yyval).tipo = tipoAux;
		}else{
			printf("\n\n* Error linea %d: Tipo propio no definido",linea_actual);
			
		}
	 }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 119 "lexico.y"
    {(yyval).tipo = booleano;}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 120 "lexico.y"
    {(yyval).tipo = cadena;}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 123 "lexico.y"
    {tipoAux = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 131 "lexico.y"
    { 				   
						   if(tipoAux != (yyvsp[(3) - (3)]).tipo){
								printf("\n\n* Error linea: %d. Asignacion de tipo incorrecta en la declaración",linea_actual);
								
						   }
						 }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 141 "lexico.y"
    { if(existeEntradaLocal((yyvsp[(1) - (1)]).cadena) == 0){
					pushTS(rellenaEntrada(linea_actual,(yyvsp[(1) - (1)]).cadena,tipoAux,var,0)); 
					/*imprimirTS();*/
			    }else{
					printf("\n\n* Error linea: %d: Identificador declarado anteriormente\n",linea_actual);
					
				}
			  }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 153 "lexico.y"
    {if(existeEntradaLocal((yyvsp[(2) - (3)]).cadena) != 0){
						printf("\n\n* Error linea: %d: Funcion ya declarada",linea_actual);
						
					  }else{
						pushTS(rellenaEntrada(linea_actual,(yyvsp[(2) - (3)]).cadena,sinTipo,proc,0));
						/*imprimirTS();*/
					  }
				   }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 160 "lexico.y"
    {pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); /*imprimirTS();*/}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 160 "lexico.y"
    {borrarHastaMarcaTS(); /*imprimirTS();*/}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 162 "lexico.y"
    {if(existeEntradaLocal((yyvsp[(2) - (3)]).cadena) != 0){
					printf("\n\n* Error linea: %d: Funcion ya declarada",linea_actual);
					
				  }else{
					pushTS(rellenaEntrada(linea_actual,(yyvsp[(2) - (3)]).cadena,sinTipo,proc,0));
					/*imprimirTS();*/
				  }
			   }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 169 "lexico.y"
    {pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); /*imprimirTS();*/}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 169 "lexico.y"
    {borrarHastaMarcaTS(); /*imprimirTS();*/}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 172 "lexico.y"
    {if(!pushTSParametroFormal(linea_actual, (yyvsp[(4) - (4)]).cadena, (yyvsp[(3) - (4)]).tipo)){ printf("\n\n* Error linea: %d: Parametro formal existente\n",linea_actual); } /*else imprimirTS();*/}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 173 "lexico.y"
    {if(!pushTSParametroFormal(linea_actual, (yyvsp[(2) - (2)]).cadena, (yyvsp[(1) - (2)]).tipo)){ printf("\n\n* Error linea: %d: Parametro formal existente\n",linea_actual); }/*else imprimirTS();*/}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 186 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(3) - (8)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (8)]).tipo){
																(yyval).tipo = tipoAux;
																	if(tipoAux != entero && tipoAux != caracter){ 
																		printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
																		
																	}
															   }else{
																if((tipoAux = existeEntrada((yyvsp[(3) - (8)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (8)]).tipo){
																 (yyval).tipo = tipoAux;
																	 if(tipoAux != entero && tipoAux != caracter){
																		printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
																		
																	 }
																}else{
																	if(tipoAux == (yyvsp[(6) - (8)]).tipo){
																		printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
																		
																	}else{
																		printf("\n\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
																		
																	}
																}
															   }
															  }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 210 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(3) - (7)]).cadena)) != 0){
												(yyval).tipo = tipoAux;
													if(tipoAux != entero && tipoAux != caracter){ 
														printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
														
													}
											   }else{
												if((tipoAux = existeEntrada((yyvsp[(3) - (7)]).cadena)) != 0){
												 (yyval).tipo = tipoAux;
													 if(tipoAux != entero && tipoAux != caracter){
														printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
														
													 }
												}else{
												 printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
												 
												}
											   }
											  }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 229 "lexico.y"
    { 	if((tipoAux = existeEntradaLocal((yyvsp[(3) - (7)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (7)]).tipo){
											(yyval).tipo = tipoAux;
												if(tipoAux != entero && tipoAux != caracter){
													printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
													
												}
										   }else{
											if((tipoAux = existeEntrada((yyvsp[(3) - (7)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (7)]).tipo){
											 (yyval).tipo = tipoAux;
												 if(tipoAux != entero && tipoAux != caracter){
													printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
													
												 }
											}else{
												if(tipoAux == (yyvsp[(6) - (7)]).tipo){
													printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
													
												}else{
													printf("\n\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
													
												}
											}
										   }
										  }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 253 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(3) - (6)]).cadena)) != 0){
									(yyval).tipo = tipoAux;
									if(tipoAux != entero && tipoAux != caracter){
										printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
										
									}
										
								   }else{
									if((tipoAux = existeEntrada((yyvsp[(3) - (6)]).cadena)) != 0){
										 (yyval).tipo = tipoAux;
										 if(tipoAux != entero && tipoAux != caracter){
											printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
											
										 }
									}else{
										printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
										
									}
								   }
								  }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 275 "lexico.y"
    {	if((yyvsp[(1) - (7)]).tipo != (yyvsp[(3) - (7)]).tipo){ 
																	printf("\n\n* Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
																}else{
																	(yyval).tipo = (yyvsp[(3) - (7)]).tipo;
																}
														    }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 281 "lexico.y"
    {(yyval).tipo = (yyvsp[(2) - (6)]).tipo;}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 282 "lexico.y"
    {	if((yyvsp[(1) - (6)]).tipo != (yyvsp[(3) - (6)]).tipo){
												printf("\n\n* Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
											}else{
												(yyval).tipo = (yyvsp[(3) - (6)]).tipo;
											}
										}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 288 "lexico.y"
    {(yyval).tipo = (yyvsp[(2) - (5)]).tipo;}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 291 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 292 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 305 "lexico.y"
    { if((yyvsp[(2) - (5)]).tipo != booleano){ printf("\n\n* Error linea %d: Expresion en if no es booleana",linea_actual);} }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 306 "lexico.y"
    { if((yyvsp[(2) - (3)]).tipo != booleano){ printf("\n\n* Error linea %d: Expresion en if no es booleana",linea_actual); } }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 310 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == cadena)){
										(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
									  }else{
										printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									  }
									}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 316 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
								(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
							  }
							}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 322 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
								(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 329 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
								(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 336 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && (yyvsp[(1) - (3)]).tipo == booleano){
								(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 343 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && (yyvsp[(1) - (3)]).tipo == booleano){
									(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
							   }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
							   }
							}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 350 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
									(yyval).tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 357 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
									(yyval).tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 364 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
									(yyval).tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 371 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
									(yyval).tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 378 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == booleano)){
								(yyval).tipo = booleano;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 385 "lexico.y"
    { if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == booleano)){
								(yyval).tipo = booleano;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 393 "lexico.y"
    {(yyval).tipo = (yyvsp[(2) - (3)]).tipo;}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 394 "lexico.y"
    { if((yyvsp[(2) - (2)]).tipo == booleano){
							(yyval).tipo = booleano;
					   }else{
							printf("\n\n* Error linea: %d. Expresion con tipos distintos\n",linea_actual);
							
					   }
					}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 401 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(1) - (1)]).cadena)) != 0){
		(yyval).tipo = tipoAux;
		//printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);
	   }else{
		if((tipoAux = existeEntrada((yyvsp[(1) - (1)]).cadena)) != 0){
			(yyval).tipo = tipoAux;
			//printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);
		}else{
			printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
			
		}
	   }
     }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 419 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 421 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 422 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 423 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(1) - (3)]).cadena)) != 0){
						(yyval).tipo = tipoAux;
						//printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);
					   }else{
						if((tipoAux = existeEntrada((yyvsp[(1) - (3)]).cadena)) != 0){
						 (yyval).tipo = tipoAux;
						 //printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);
						}else{
							printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
							
						}
					   }
					   
					   if(tipoAux != (yyvsp[(3) - (3)]).tipo){
							printf("\n\n* Error linea: %d. Asignacion de tipo incorrecta",linea_actual);
							
					   }
					 }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 445 "lexico.y"
    { if((yyvsp[(3) - (5)]).tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 446 "lexico.y"
    { if((yyvsp[(3) - (5)]).tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 459 "lexico.y"
    {  if(existeEntrada((yyvsp[(1) - (2)]).cadena) != sinTipo){
							printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
							
						 }
						 
					  }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 464 "lexico.y"
    {	if(compruebaNumeroParametros((yyvsp[(1) - (4)]).cadena, numParametros) == 0){ //Error en tipo
												printf("\n\n* Error linea %d: El numero de parametros no coindicen en la llamada al procedimiento", linea_actual);
												
											}		
									   }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 470 "lexico.y"
    { if(existeEntrada((yyvsp[(1) - (4)]).cadena) != sinTipo){
					  printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
					  
				   }
				 }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 477 "lexico.y"
    { numParametros++;
													if(compruebaParametroProcedimiento((yyvsp[(-1) - (3)]).cadena, (yyvsp[(3) - (3)]).tipo, numParametros) == 0){
														printf("\n\n* Error linea: %d: Parametro del procedimiento no coinciden en tipo", linea_actual);
														
													}
													
													if(compruebaParametroProcedimiento((yyvsp[(-1) - (3)]).cadena, (yyvsp[(3) - (3)]).tipo, numParametros) == 2){
														printf("\n\n* Error linea: %d: Numero de parametros excedido en la llamada a procedimiento", linea_actual);
														
													}
												}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 488 "lexico.y"
    {numParametros = 1; if(compruebaParametroProcedimiento((yyvsp[(-1) - (1)]).cadena, (yyvsp[(1) - (1)]).tipo, numParametros) == 0){
									printf("\n\n* Error linea: %d: Parametro del procedimiento no coinciden en tipo", linea_actual);
									
								}
			}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 495 "lexico.y"
    {pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); /*imprimirTS();*/}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 495 "lexico.y"
    {borrarHastaMarcaTS(); /*imprimirTS();*/}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 509 "lexico.y"
    {
									(yyval).tipo = conjunto;
							   }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 513 "lexico.y"
    { if( existeEntradaLocal((yyvsp[(3) - (4)]).cadena) != conjunto && existeEntrada((yyvsp[(3) - (4)]).cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}
									  }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 518 "lexico.y"
    {  	
										if( existeEntradaLocal((yyvsp[(3) - (4)]).cadena) != conjunto && existeEntrada((yyvsp[(3) - (4)]).cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}else{
											(yyval).tipo = booleano;
										}
								   }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 527 "lexico.y"
    {
										if( existeEntradaLocal((yyvsp[(3) - (4)]).cadena) != conjunto && existeEntrada((yyvsp[(3) - (4)]).cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}else{
											(yyval).tipo = entero;
										}
								  }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 538 "lexico.y"
    {
										if((yyvsp[(1) - (3)]).tipo != conjunto){
											printf("\n\n* Error linea %d: La variable no es un conjunto",linea_actual);
										}
									 }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 547 "lexico.y"
    {
									if((yyvsp[(1) - (3)]).tipo != conjunto){
										printf("\n\n* Error linea %d: La variable no es un conjunto",linea_actual);
									}
								 }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 565 "lexico.y"
    {
											if((yyvsp[(2) - (2)]).tipo != conjunto){
												printf("\n\n* Error linea %d: La variable no es un conjunto",linea_actual);
											}
										 }
    break;



/* Line 1806 of yacc.c  */
#line 2544 "lexico.tab.c"
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
#line 572 "lexico.y"

/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"

