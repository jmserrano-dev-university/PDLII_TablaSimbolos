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
	int linea_actual = 1;	 //Almacena la línea por la que vamos
	tDato tipoAux; 			 //Almacenamos el tipo para las declaraciones de VARIABLES
	int numParametros;		 //Número de parámetros para los procedimientos
	int linea_if;			 //Línea que nos indica la linea de la cabecera del id
	int linea_aux;			 //Línea actual auxiliar para el if
	int contadorErrores = 0; //Contador de errores

	/* Se debe modificar la implementación la función yyerror. En este caso simplemente se escribe el mensaje en pantalla, por lo que habrá que añadir previamente la declaración de la variable global asociada al número de línea (declarada en la práctica anterior en el fichero fuente del flex) y modificar yyerror para que se muestre dicho número de línea */
	void yyerror (char *msg){
		char buffer[50];
		sprintf(buffer,"%s %d",msg,linea_actual);
		fprintf(stderr, "\n");
		fprintf(stderr,buffer);
	}



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
#define YYLAST   627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

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
     189,   196,   202,   204,   206,   209,   211,   215,   218,   219,
     224,   225,   228,   229,   233,   234,   241,   245,   249,   253,
     257,   261,   265,   269,   273,   277,   281,   285,   289,   293,
     295,   299,   302,   304,   306,   308,   310,   312,   314,   316,
     318,   320,   322,   326,   332,   338,   346,   352,   356,   358,
     366,   367,   368,   376,   381,   385,   387,   388,   395,   400,
     404,   408,   411,   413,   415,   417,   421,   426,   431,   436,
     440,   444
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    73,    -1,    73,    -1,    74,    75,
      -1,    74,    -1,    75,    -1,    76,    77,   114,    -1,    76,
     114,    -1,    77,   114,    -1,   114,    -1,    74,    78,    -1,
      78,    -1,    75,    80,    -1,    80,    -1,    76,    82,    -1,
      82,    -1,    77,    87,    -1,    87,    -1,    26,    79,    -1,
       3,    -1,     4,    -1,    13,    81,     6,    51,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,     6,    -1,    16,
      -1,    15,    -1,    -1,    81,    83,    84,    51,    -1,    84,
      52,    85,    -1,    85,    -1,    86,    -1,    86,    53,   105,
      -1,     6,    -1,    -1,    -1,    23,     6,    42,    88,    92,
      43,    89,   116,    -1,    -1,    -1,    23,     6,    42,    90,
      43,    91,   116,    -1,    92,    52,    81,     6,    -1,    81,
       6,    -1,    94,    -1,   103,    -1,   106,    -1,   109,    -1,
     107,    -1,    87,    -1,   110,    -1,   117,    51,    -1,   105,
      51,    -1,    24,    42,     6,    43,    49,    95,    98,    50,
      -1,    24,    42,     6,    43,    49,    98,    50,    -1,    24,
      42,     6,    43,    49,    95,    50,    -1,    24,    42,     6,
      43,    49,    50,    -1,    95,     5,    96,    48,    97,     8,
      51,    -1,     5,    96,    48,    97,     8,    51,    -1,    95,
       5,    96,    48,     8,    51,    -1,     5,    96,    48,     8,
      51,    -1,     7,    -1,    19,    -1,    97,    93,    -1,    93,
      -1,    31,    48,    97,    -1,    31,    48,    -1,    -1,    49,
     100,    97,    50,    -1,    -1,   101,    93,    -1,    -1,    49,
     102,    50,    -1,    -1,    28,   105,    99,    32,   104,    99,
      -1,    28,   105,    99,    -1,   105,    61,   105,    -1,   105,
      60,   105,    -1,   105,    63,   105,    -1,   105,    62,   105,
      -1,   105,    65,   105,    -1,   105,    64,   105,    -1,   105,
      59,   105,    -1,   105,    58,   105,    -1,   105,    57,   105,
      -1,   105,    56,   105,    -1,   105,    55,   105,    -1,   105,
      54,   105,    -1,     7,    -1,    42,   105,    43,    -1,    69,
     105,    -1,     6,    -1,    14,    -1,    17,    -1,    18,    -1,
      19,    -1,    15,    -1,   118,    -1,   124,    -1,   120,    -1,
     121,    -1,     6,    53,   105,    -1,    25,    42,   105,    43,
      99,    -1,    25,    42,   105,    43,    51,    -1,    30,    42,
      15,    52,   108,    43,    51,    -1,    30,    42,    15,    43,
      51,    -1,   108,    52,     6,    -1,     6,    -1,    29,    42,
      20,    52,     6,    43,    51,    -1,    -1,    -1,     6,    42,
     111,   113,   112,    43,    51,    -1,     6,    42,    43,    51,
      -1,   113,    52,   105,    -1,   105,    -1,    -1,    23,    35,
     115,    42,    43,   116,    -1,    49,    76,    97,    50,    -1,
      49,    97,    50,    -1,    49,    76,    50,    -1,    49,    50,
      -1,   122,    -1,   123,    -1,   119,    -1,    33,    42,    43,
      -1,    37,    42,     6,    43,    -1,    21,    42,     6,    43,
      -1,    22,    42,     6,    43,    -1,     6,    68,   105,    -1,
       6,    67,   105,    -1,    66,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    74,    88,    90,    92,    94,    95,    96,
      97,    99,    99,   103,   103,   105,   105,   107,   107,   109,
     111,   111,   115,   128,   129,   130,   131,   132,   142,   143,
     146,   146,   149,   150,   153,   154,   168,   181,   188,   181,
     193,   200,   193,   206,   213,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   232,   256,   275,   299,   321,   329,
     330,   337,   340,   341,   344,   344,   347,   347,   350,   350,
     351,   351,   352,   352,   356,   356,   367,   381,   394,   407,
     420,   433,   446,   459,   472,   485,   498,   511,   524,   537,
     538,   539,   552,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   603,   614,   627,   628,   631,   631,   634,
     637,   643,   637,   650,   658,   676,   690,   690,   695,   696,
     697,   698,   701,   702,   703,   706,   710,   716,   727,   738,
     751,   765
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
  "variable", "proc", "@2", "$@3", "@4", "$@5", "params", "sentencia",
  "switch", "casos_s", "literal", "sentencias", "caso_defecto", "bloque",
  "$@6", "$@7", "$@8", "if", "$@9", "expresion", "while", "out", "ids",
  "in", "llamada_proc", "@10", "@11", "params_llamada", "main", "$@12",
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
      95,    95,    96,    96,    97,    97,    98,    98,   100,    99,
     101,    99,   102,    99,   104,   103,   103,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     111,   112,   110,   110,   113,   113,   115,   114,   116,   116,
     116,   116,   117,   117,   117,   118,   119,   120,   121,   122,
     123,   124
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
       6,     5,     1,     1,     2,     1,     3,     2,     0,     4,
       0,     2,     0,     3,     0,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     5,     7,     5,     3,     1,     7,
       0,     0,     7,     4,     3,     1,     0,     6,     4,     3,
       3,     2,     1,     1,     1,     3,     4,     4,     4,     3,
       3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    27,    23,    24,    25,    26,     0,    29,    28,     0,
       0,     0,     0,     3,     5,     6,     0,     0,    12,    14,
      30,    16,    18,    10,     0,     0,   116,    20,    21,    19,
       1,     2,     4,    11,    13,     0,    15,     8,    17,     9,
       0,     0,    37,     0,     7,    36,     0,    33,    34,    22,
       0,     0,     0,    31,     0,     0,     0,     0,    41,     0,
      32,    92,    89,    93,    97,    94,    95,    96,     0,     0,
       0,     0,     0,     0,    35,    98,   100,   101,    99,    44,
      38,     0,     0,     0,   117,     0,     0,     0,     0,     0,
     131,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    92,    97,     0,
       0,     0,     0,     0,     0,     0,   121,     0,    50,    65,
      45,     0,    46,     0,    47,    49,    48,    51,     0,   124,
     122,   123,   102,     0,     0,   125,    90,    88,    87,    86,
      85,    84,    83,    78,    77,    80,    79,    82,    81,    39,
      43,   110,     0,     0,     0,     0,    70,     0,     0,     0,
     120,     0,    92,   119,    64,    53,    52,   127,   128,     0,
       0,   130,   129,     0,     0,    68,    76,     0,     0,     0,
       0,   118,   113,   115,   111,     0,    70,     0,     0,    74,
      71,     0,     0,     0,   126,     0,     0,     0,   104,   103,
       0,    73,    70,     0,   106,   108,     0,   114,     0,     0,
       0,    57,     0,     0,    69,    75,     0,     0,     0,   112,
      62,    63,     0,    67,     0,    56,     0,    55,   109,   105,
     107,     0,    66,     0,    54,     0,     0,     0,    61,     0,
       0,     0,    59,    60,     0,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    29,
      19,    20,    21,    40,    46,    47,    48,   118,    50,   104,
      51,    82,    57,   119,   120,   212,   222,   121,   213,   176,
     187,   177,   188,   122,   202,   123,   124,   125,   206,   126,
     127,   170,   196,   184,    23,    43,    84,   128,    75,   129,
      76,    77,   130,   131,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
     401,  -180,  -180,  -180,  -180,  -180,   293,  -180,  -180,    -3,
     103,    14,   444,  -180,    -2,     4,   444,     2,  -180,  -180,
    -180,  -180,  -180,  -180,    15,    12,  -180,  -180,  -180,  -180,
    -180,  -180,     4,  -180,  -180,     2,  -180,  -180,  -180,  -180,
      52,    10,    33,    49,  -180,  -180,    58,  -180,    43,  -180,
     293,    56,    70,  -180,    52,   534,    95,   -24,  -180,    72,
    -180,    66,  -180,  -180,  -180,  -180,  -180,  -180,    81,    85,
      86,   534,   125,   534,   562,  -180,  -180,  -180,  -180,  -180,
    -180,   293,    72,   127,  -180,   534,   126,   129,    87,   124,
    -180,  -180,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,    72,   141,  -180,    50,   147,   148,
     116,   117,   534,   119,   120,   121,  -180,   188,  -180,  -180,
    -180,    45,  -180,   550,  -180,  -180,  -180,  -180,   114,  -180,
    -180,  -180,   562,   123,   133,  -180,  -180,   110,   110,   110,
     110,   110,   110,    21,    21,    61,    61,  -180,  -180,  -180,
    -180,   149,   534,   534,   162,   534,   523,   170,   176,   195,
    -180,   222,    37,  -180,  -180,  -180,  -180,  -180,  -180,   157,
     534,   562,   562,   171,   298,   165,   187,   502,   168,   -23,
     179,  -180,  -180,   562,   172,   174,   -16,   502,   177,  -180,
    -180,   220,   180,   226,  -180,   534,   190,     3,  -180,  -180,
     256,  -180,   185,   192,  -180,  -180,    28,   562,   191,     8,
     200,  -180,     5,   199,  -180,  -180,   202,   205,   252,  -180,
    -180,  -180,   212,   502,     8,  -180,   211,  -180,  -180,  -180,
    -180,   309,   502,   217,  -180,   215,   362,   415,  -180,   216,
     218,   468,  -180,  -180,   225,  -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,   270,  -180,   254,   204,   267,   276,  -180,
     -10,     0,   -15,  -180,  -180,   238,  -180,    77,  -180,  -180,
    -180,  -180,  -180,  -112,  -180,  -180,    71,  -115,    82,  -179,
    -180,  -180,  -180,  -180,  -180,   -55,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,    -4,  -180,   -78,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -73
static const yytype_int16 yytable[] =
{
      74,    36,   161,    25,   106,    34,    24,   199,   209,   164,
     224,     6,    37,    39,    30,   220,    89,     6,    91,    80,
     192,    41,    34,   215,    10,     9,   149,   221,    81,   193,
     132,    44,    26,   175,   210,   198,   210,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   164,
      56,   162,    62,   211,    42,   225,   -27,   156,    45,    63,
      64,    49,    65,    66,    67,   190,    68,    69,   109,   110,
     111,   217,   200,   112,   113,   114,   -40,    22,    70,   151,
     218,   105,   115,   100,   101,   102,   103,    71,   164,    22,
      85,    52,   151,    22,    38,   163,    55,   171,   172,    58,
     174,    79,    36,    85,   152,   153,    27,    28,   232,    53,
      54,    72,    38,    59,    73,   183,   236,   152,   153,    85,
     164,    83,   241,    86,   164,   102,   103,    87,    88,   164,
     135,    90,   133,   107,    62,   134,     2,     3,     4,     5,
     207,    63,   108,     8,    65,    66,    67,   150,    68,    69,
     109,   110,   111,   -29,    25,   112,   113,   114,   154,   155,
      70,   157,   158,   159,   115,   166,   167,   136,   173,    71,
      98,    99,   100,   101,   102,   103,   168,   116,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     178,   179,   169,    72,   107,    62,    73,     2,     3,     4,
       5,   180,    63,   108,     8,    65,    66,    67,   182,    68,
      69,   109,   110,   111,   185,   -72,   112,   113,   114,   189,
     191,    70,   194,   197,   195,   115,   203,   201,   162,    62,
      71,   204,   205,   208,   175,   216,    63,    64,   160,    65,
      66,    67,   219,    68,    69,   109,   110,   111,   223,   227,
     112,   113,   114,   228,    72,    70,   229,    73,   230,   115,
     231,   234,   162,    62,    71,   237,   238,   242,    32,   243,
      63,    64,   181,    65,    66,    67,   245,    68,    69,   109,
     110,   111,    31,    35,   112,   113,   114,   117,    72,    70,
      33,    73,    60,   115,   226,   233,     0,     0,    71,     1,
       0,     0,     2,     3,     4,     5,   214,     0,     7,     8,
       0,     0,     0,     0,     0,   162,    62,   235,     0,     0,
       0,     0,    72,    63,    64,    73,    65,    66,    67,     0,
      68,    69,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   186,    70,     0,     0,     0,   115,     0,     0,     0,
       0,    71,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,   162,    62,
     239,     0,     0,     0,     0,    72,    63,    64,    73,    65,
      66,    67,     0,    68,    69,   109,   110,   111,     0,     0,
     112,   113,   114,     0,     0,    70,     0,     0,     0,   115,
       0,     0,     0,     0,    71,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,     0,     7,     8,     0,     0,
       0,   162,    62,   240,     9,     0,     0,    10,    72,    63,
      64,    73,    65,    66,    67,     0,    68,    69,   109,   110,
     111,     0,     0,   112,   113,   114,     0,     0,    70,     0,
       1,     0,   115,     2,     3,     4,     5,    71,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,   162,    62,   244,     0,     0,     0,
       0,    72,    63,    64,    73,    65,    66,    67,     0,    68,
      69,   109,   110,   111,     0,     0,   112,   113,   114,     0,
       0,    70,     0,     0,     0,   115,     0,     0,   162,    62,
      71,     0,     0,     0,     0,     0,    63,    64,     0,    65,
      66,    67,     0,    68,    69,   109,   110,   111,     0,     0,
     112,   113,   114,     0,    72,    70,     0,    73,     0,   115,
      61,    62,     0,     0,    71,     0,     0,     0,    63,    64,
       0,    65,    66,    67,     0,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    72,     0,
       0,    73,   175,     0,     0,     0,    71,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,   165,     0,    73,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-180))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      55,    16,   117,     6,    82,    15,     6,   186,     5,   121,
       5,    13,    16,    17,     0,     7,    71,    13,    73,    43,
      43,     6,    32,   202,    26,    23,   104,    19,    52,    52,
      85,    35,    35,    49,    31,    51,    31,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   161,
      50,     6,     7,    50,    42,    50,     6,   112,     6,    14,
      15,    51,    17,    18,    19,   177,    21,    22,    23,    24,
      25,    43,   187,    28,    29,    30,    43,     0,    33,    42,
      52,    81,    37,    62,    63,    64,    65,    42,   200,    12,
      53,    42,    42,    16,    17,    50,    53,   152,   153,    43,
     155,     6,   117,    53,    67,    68,     3,     4,   223,    51,
      52,    66,    35,    43,    69,   170,   231,    67,    68,    53,
     232,    49,   237,    42,   236,    64,    65,    42,    42,   241,
      43,     6,     6,     6,     7,     6,     9,    10,    11,    12,
     195,    14,    15,    16,    17,    18,    19,     6,    21,    22,
      23,    24,    25,     6,     6,    28,    29,    30,    42,    42,
      33,    42,    42,    42,    37,    51,    43,    43,     6,    42,
      60,    61,    62,    63,    64,    65,    43,    50,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      20,    15,    43,    66,     6,     7,    69,     9,    10,    11,
      12,     6,    14,    15,    16,    17,    18,    19,    51,    21,
      22,    23,    24,    25,    43,    50,    28,    29,    30,    32,
      52,    33,    43,    49,    52,    37,     6,    50,     6,     7,
      42,    51,     6,    43,    49,    43,    14,    15,    50,    17,
      18,    19,    51,    21,    22,    23,    24,    25,    48,    50,
      28,    29,    30,    51,    66,    33,    51,    69,     6,    37,
      48,    50,     6,     7,    42,    48,    51,    51,    14,    51,
      14,    15,    50,    17,    18,    19,    51,    21,    22,    23,
      24,    25,    12,    16,    28,    29,    30,    83,    66,    33,
      14,    69,    54,    37,   212,   224,    -1,    -1,    42,     6,
      -1,    -1,     9,    10,    11,    12,    50,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    -1,
      -1,    -1,    66,    14,    15,    69,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    43,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,     6,     7,
       8,    -1,    -1,    -1,    -1,    66,    14,    15,    69,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    -1,    33,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    42,    -1,    -1,     6,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,     6,     7,     8,    23,    -1,    -1,    26,    66,    14,
      15,    69,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    30,    -1,    -1,    33,    -1,
       6,    -1,    37,     9,    10,    11,    12,    42,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,    -1,    -1,    -1,
      -1,    66,    14,    15,    69,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    -1,
      -1,    33,    -1,    -1,    -1,    37,    -1,    -1,     6,     7,
      42,    -1,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    66,    33,    -1,    69,    -1,    37,
       6,     7,    -1,    -1,    42,    -1,    -1,    -1,    14,    15,
      -1,    17,    18,    19,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    66,    -1,
      -1,    69,    49,    -1,    -1,    -1,    42,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    51,    -1,    69,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    10,    11,    12,    13,    15,    16,    23,
      26,    71,    72,    73,    74,    75,    76,    77,    78,    80,
      81,    82,    87,   114,    81,     6,    35,     3,     4,    79,
       0,    73,    75,    78,    80,    77,    82,   114,    87,   114,
      83,     6,    42,   115,   114,     6,    84,    85,    86,    51,
      88,    90,    42,    51,    52,    53,    81,    92,    43,    43,
      85,     6,     7,    14,    15,    17,    18,    19,    21,    22,
      33,    42,    66,    69,   105,   118,   120,   121,   124,     6,
      43,    52,    91,    49,   116,    53,    42,    42,    42,   105,
       6,   105,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    89,    81,   116,     6,    15,    23,
      24,    25,    28,    29,    30,    37,    50,    76,    87,    93,
      94,    97,   103,   105,   106,   107,   109,   110,   117,   119,
     122,   123,   105,     6,     6,    43,    43,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   116,
       6,    42,    67,    68,    42,    42,   105,    42,    42,    42,
      50,    97,     6,    50,    93,    51,    51,    43,    43,    43,
     111,   105,   105,     6,   105,    49,    99,   101,    20,    15,
       6,    50,    51,   105,   113,    43,    43,   100,   102,    32,
      93,    52,    43,    52,    43,    52,   112,    49,    51,    99,
      97,    50,   104,     6,    51,     6,   108,   105,    43,     5,
      31,    50,    95,    98,    50,    99,    43,    43,    52,    51,
       7,    19,    96,    48,     5,    50,    98,    50,    51,    51,
       6,    48,    97,    96,    50,     8,    97,    48,    51,     8,
       8,    97,    51,    51,     8,    51
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
        case 2:

/* Line 1806 of yacc.c  */
#line 63 "lexico.y"
    {
					if(contadorErrores == 0){
						printf("\n\n-------------------------------\n");
						printf(" -- Generacion correcta.\n");
						printf("\n-------------------------------\n\n");
					}else{
						printf("\n\n-------------------------------\n");
						printf("\n-- Se ha encontrado %d errores.\n", contadorErrores);
						printf("\n-------------------------------\n\n");
					}
				 }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 74 "lexico.y"
    {
			if(contadorErrores == 0){
				printf("\n\n-------------------------------\n");
				printf(" -- Generacion correcta.\n\n");
				printf("\n-------------------------------\n\n");
			}else{
				printf("\n\n-------------------------------\n");
				printf("\n--Se ha encontrado %d errores.\n", contadorErrores);
				printf("\n-------------------------------\n\n");
			}
	   }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 115 "lexico.y"
    {	
								if(existeEntradaLocal((yyvsp[(3) - (4)]).cadena) == 0){
									pushTS(rellenaEntrada(linea_actual,(yyvsp[(3) - (4)]).cadena,(yyvsp[(2) - (4)]).tipo,defTipo,0));
								}else{
									printf("\n* Error linea: %d. El identificador \" %s \" de la refinicion de tipo ya existe.\n",linea_actual, (yyvsp[(3) - (4)]).cadena);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								}
							}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 128 "lexico.y"
    {(yyval).tipo = entero;}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 129 "lexico.y"
    {(yyval).tipo = real;}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 130 "lexico.y"
    {(yyval).tipo = caracter;}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 131 "lexico.y"
    {(yyval).tipo = conjunto;}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 132 "lexico.y"
    {
		if((tipoAux = existeEntradaDefTipo((yyvsp[(1) - (1)]).cadena)) != 0){
		 (yyval).tipo = tipoAux;
		}else{
			printf("\n* Error linea: %d. Tipo \" %s \" propio no definido.\n",linea_actual, (yyvsp[(1) - (1)]).cadena);
			(yyval).tipo = errorTipo;
			//tipoAux = errorTipo; //Ponemos la variable con tipo error
			contadorErrores++;
		}
	 }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 142 "lexico.y"
    {(yyval).tipo = booleano;}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 143 "lexico.y"
    {(yyval).tipo = cadena;}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 146 "lexico.y"
    {tipoAux = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 154 "lexico.y"
    { 				   
						   if(tipoAux != (yyvsp[(3) - (3)]).tipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								printf("\n* Error linea: %d. Asignacion de tipo incorrecta en la declaracion de la variable \" %s\".\n",linea_actual, (yyvsp[(1) - (3)]).cadena);
								(yyval).tipo = errorTipo;
								contadorErrores++;
						   }
						   
						   if((yyvsp[(3) - (3)]).tipo == errorTipo){ //Subimos el error
								(yyval).tipo = errorTipo;
						   }
						   
						 }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 168 "lexico.y"
    { if(existeEntradaLocal((yyvsp[(1) - (1)]).cadena) == 0){
					pushTS(rellenaEntrada(linea_actual,(yyvsp[(1) - (1)]).cadena,tipoAux,var,0));
					imprimirTS();
			    }else{
					printf("\n* Error linea: %d. Identificador \" %s \" declarado anteriormente.\n",linea_actual, (yyvsp[(1) - (1)]).cadena);
					(yyval).tipo = errorTipo;
					contadorErrores++;
				}
			  }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 181 "lexico.y"
    {if(existeEntradaLocal((yyvsp[(2) - (3)]).cadena) != 0){
						printf("\n* Error linea: %d. Funcion \" %s \" ya declarada.\n",linea_actual, (yyvsp[(2) - (3)]).cadena);
						(yyval).tipo = errorTipo;
						contadorErrores++;
					  }else{
						pushTS(rellenaEntrada(linea_actual,(yyvsp[(2) - (3)]).cadena,sinTipo,proc,0));
					  }
				   }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 188 "lexico.y"
    {
									pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
									copiaParametrosFormales();
								}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 191 "lexico.y"
    {borrarHastaMarcaTS();}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 193 "lexico.y"
    {if(existeEntradaLocal((yyvsp[(2) - (3)]).cadena) != 0){
					printf("\n* Error linea: %d. Funcion \" %s \" ya declarada.",linea_actual, (yyvsp[(2) - (3)]).cadena);
					(yyval).tipo = errorTipo;
					contadorErrores++;
				  }else{
					pushTS(rellenaEntrada(linea_actual,(yyvsp[(2) - (3)]).cadena,sinTipo,proc,0));
				  }
			   }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 200 "lexico.y"
    {
						pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
						copiaParametrosFormales();
					 }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 203 "lexico.y"
    {borrarHastaMarcaTS();}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 206 "lexico.y"
    {
								if(!pushTSParametroFormal(linea_actual, (yyvsp[(4) - (4)]).cadena, (yyvsp[(3) - (4)]).tipo)){
									printf("\n* Error linea: %d. El parametro formal \" %s \" existente.\n",linea_actual, (yyvsp[(4) - (4)]).cadena);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								}
							 }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 213 "lexico.y"
    {
				if(!pushTSParametroFormal(linea_actual, (yyvsp[(2) - (2)]).cadena, (yyvsp[(1) - (2)]).tipo)){
					printf("\n* Error linea: %d. Parametro formal \" %s \" existente.\n",linea_actual, (yyvsp[(2) - (2)]).cadena);
					(yyval).tipo  = errorTipo;
					contadorErrores++;
				}
		  }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 232 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(3) - (8)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (8)]).tipo){
																(yyval).tipo = tipoAux;
																	if(tipoAux != entero && tipoAux != caracter){ 
																		printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
																		contadorErrores++;
																	}
															   }else{
																if((tipoAux = existeEntrada((yyvsp[(3) - (8)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (8)]).tipo){
																 (yyval).tipo = tipoAux;
																	 if(tipoAux != entero && tipoAux != caracter){
																		printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
																		contadorErrores++;
																	 }
																}else{
																	if(tipoAux == (yyvsp[(6) - (8)]).tipo){
																		printf("\n* Error linea: %d. Variable \" %s \" no declarada\n",linea_actual, (yyvsp[(3) - (8)]).cadena);
																		contadorErrores++;
																	}else{
																		printf("\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH.\n",linea_actual);
																		contadorErrores++;
																	}
																}
															   }
															  }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 256 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(3) - (7)]).cadena)) != 0){
												(yyval).tipo = tipoAux;
													if(tipoAux != entero && tipoAux != caracter){ 
														printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
														contadorErrores++;
													}
											   }else{
												if((tipoAux = existeEntrada((yyvsp[(3) - (7)]).cadena)) != 0){
												 (yyval).tipo = tipoAux;
													 if(tipoAux != entero && tipoAux != caracter){
														printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
														contadorErrores++;
													 }
												}else{
													printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual, (yyvsp[(3) - (7)]).cadena);
													contadorErrores++;
												}
											   }
											  }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 275 "lexico.y"
    { 	if((tipoAux = existeEntradaLocal((yyvsp[(3) - (7)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (7)]).tipo){
											(yyval).tipo = tipoAux;
												if(tipoAux != entero && tipoAux != caracter){
													printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
													contadorErrores++;
												}
										   }else{
											if((tipoAux = existeEntrada((yyvsp[(3) - (7)]).cadena)) != 0 && tipoAux == (yyvsp[(6) - (7)]).tipo){
											 (yyval).tipo = tipoAux;
												 if(tipoAux != entero && tipoAux != caracter){
													printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
													contadorErrores++;
												 }
											}else{
												if(tipoAux == (yyvsp[(6) - (7)]).tipo){
													printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual, (yyvsp[(3) - (7)]).cadena);
													contadorErrores++;
												}else{
													printf("\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH.\n",linea_actual);
													contadorErrores++;
												}
											}
										   }
										  }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 299 "lexico.y"
    { if((tipoAux = existeEntradaLocal((yyvsp[(3) - (6)]).cadena)) != 0){
									(yyval).tipo = tipoAux;
									if(tipoAux != entero && tipoAux != caracter){
										printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
										contadorErrores++;
									}
										
								   }else{
									if((tipoAux = existeEntrada((yyvsp[(3) - (6)]).cadena)) != 0){
										 (yyval).tipo = tipoAux;
										 if(tipoAux != entero && tipoAux != caracter){
											printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter",linea_actual);
											contadorErrores++;
										 }
									}else{
										printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual, (yyvsp[(3) - (6)]).cadena);
										
									}
								   }
								  }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 321 "lexico.y"
    {	
																if((yyvsp[(1) - (7)]).tipo != (yyvsp[(3) - (7)]).tipo){ 
																	printf("\n* Error linea: %d. CASEs del Switch con diferente tipo.\n",linea_actual);
																	contadorErrores++;
																}else{
																	(yyval).tipo = (yyvsp[(3) - (7)]).tipo;
																}
														    }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 329 "lexico.y"
    {(yyval).tipo = (yyvsp[(2) - (6)]).tipo;}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 330 "lexico.y"
    {	if((yyvsp[(1) - (6)]).tipo != (yyvsp[(3) - (6)]).tipo){
												printf("\n* Error linea: %d. CASEs del Switch con diferente tipo.\n",linea_actual);
												contadorErrores++;
											}else{
												(yyval).tipo = (yyvsp[(3) - (6)]).tipo;
											}
										}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 337 "lexico.y"
    {(yyval).tipo = (yyvsp[(2) - (5)]).tipo;}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 340 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 341 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 350 "lexico.y"
    {linea_aux = linea_actual - 1;}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 351 "lexico.y"
    {linea_aux = linea_actual - 1;}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 352 "lexico.y"
    {linea_aux = linea_actual - 1;}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 356 "lexico.y"
    {linea_if = linea_aux;}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 356 "lexico.y"
    {
																if((yyvsp[(2) - (6)]).tipo != booleano && (yyvsp[(2) - (6)]).tipo != errorTipo){ 
																	printf("\n* Error linea: %d. Expresion en if no es booleana.\n",linea_if);
																	(yyval).tipo = errorTipo;
																	contadorErrores++;
																}
																
																if((yyvsp[(2) - (6)]).tipo == errorTipo){
																	(yyval).tipo = errorTipo;
																}
															}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 367 "lexico.y"
    {
							if((yyvsp[(2) - (3)]).tipo != booleano && (yyvsp[(2) - (3)]).tipo != errorTipo){ 
								printf("\n* Error linea: %d. Expresion en if no es booleana.\n",linea_aux);
								(yyval).tipo = errorTipo;
								contadorErrores++;
							}
							
							if((yyvsp[(2) - (3)]).tipo == errorTipo){
								(yyval).tipo = errorTipo;
							}
					  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 381 "lexico.y"
    { 
									  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
										  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == cadena || (yyvsp[(1) - (3)]).tipo == conjunto /*UNION*/)){
											(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
										  }else{
											printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion suma.\n",linea_actual);
											(yyval).tipo = errorTipo;
											contadorErrores++;
										  }
									  }else{
										(yyval).tipo = errorTipo;
									  }
									}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 394 "lexico.y"
    { 
							if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == conjunto /*DIFERENCIA*/)){
									(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion resta.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								  }
							}else{
								(yyval).tipo = errorTipo;
							}
						 }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 407 "lexico.y"
    { 
							if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
									(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion de multiplicacion.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								  }
							}else{
								(yyval).tipo = errorTipo;
							}
						  }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 420 "lexico.y"
    { 
							if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == conjunto /*INTERSECCION*/)){
									(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la  operacion de dividir.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
								(yyval).tipo = errorTipo;
							  }
							}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 433 "lexico.y"
    { 
							  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && (yyvsp[(1) - (3)]).tipo == booleano){
									(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion booleana AND.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
								(yyval).tipo = errorTipo;
							  }
							}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 446 "lexico.y"
    { 
							   if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								   if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && (yyvsp[(1) - (3)]).tipo == booleano){
										(yyval).tipo = (yyvsp[(1) - (3)]).tipo;
								   }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion booleana OR.\n",linea_actual);
										(yyval).tipo = errorTipo;
										contadorErrores++;
								   }
							   }else{
									(yyval).tipo = errorTipo;
							   }
							}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 459 "lexico.y"
    { 
								  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
									  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
										(yyval).tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
										(yyval).tipo = errorTipo;
										contadorErrores++;
									  }
								   }else{
										(yyval).tipo = errorTipo;
								   }
								}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 472 "lexico.y"
    { 
								  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
									  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
										(yyval).tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
										(yyval).tipo = errorTipo;
										contadorErrores++;
									  }
								   }else{
										(yyval).tipo = errorTipo;
								   }
								}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 485 "lexico.y"
    { 
								  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
									  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
										(yyval).tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
										(yyval).tipo = errorTipo;
										contadorErrores++;
									  }
								  }else{
									(yyval).tipo = errorTipo;
								  }
								}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 498 "lexico.y"
    { 
								  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
									  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real)){
										(yyval).tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
										(yyval).tipo = errorTipo;
										contadorErrores++;
									  }
								  }else{
									(yyval).tipo = errorTipo;
								  }
								}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 511 "lexico.y"
    { 
							  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == booleano)){
									(yyval).tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
									(yyval).tipo = errorTipo;
							  }
							}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 524 "lexico.y"
    { 
							  if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
								  if((yyvsp[(1) - (3)]).tipo == (yyvsp[(3) - (3)]).tipo && ((yyvsp[(1) - (3)]).tipo == entero || (yyvsp[(1) - (3)]).tipo == real || (yyvsp[(1) - (3)]).tipo == booleano)){
									(yyval).tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
									(yyval).tipo = errorTipo;
							  }
							}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 538 "lexico.y"
    {(yyval).tipo = (yyvsp[(2) - (3)]).tipo;}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 539 "lexico.y"
    { 
					   if((yyvsp[(2) - (2)]).tipo != errorTipo){
						   if((yyvsp[(2) - (2)]).tipo == booleano){
								(yyval).tipo = booleano;
						   }else{
								printf("\n* Error linea: %d. Expresion con tipos distintos en el operador booleano de negacion.\n",linea_actual);
								(yyval).tipo = errorTipo;
								contadorErrores++;
						   }
					    }else{
							(yyval).tipo = errorTipo;
						}
					}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 552 "lexico.y"
    { 
	   if((yyvsp[(1) - (1)]).tipo != errorTipo){
		   if((tipoAux = existeEntradaLocal((yyvsp[(1) - (1)]).cadena)) != 0){
			(yyval).tipo = tipoAux;
		   }else{
			if((tipoAux = existeEntrada((yyvsp[(1) - (1)]).cadena)) != 0){
				(yyval).tipo = tipoAux;
			}else{
				printf("\n* Error linea: %d. La variable \" %s \" no declarada.\n",linea_actual,(yyvsp[(1) - (1)]).cadena);
				(yyval).tipo = errorTipo;
				contadorErrores++;
			}
		   }
	   }else{
		 (yyval).tipo = errorTipo;
	   }
     }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 574 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 576 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 577 "lexico.y"
    {(yyval).tipo = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 578 "lexico.y"
    { 
						 if((yyvsp[(1) - (3)]).tipo != errorTipo && (yyvsp[(3) - (3)]).tipo != errorTipo){
							 if((tipoAux = existeEntradaLocal((yyvsp[(1) - (3)]).cadena)) != 0){
								(yyval).tipo = tipoAux;
							   }else{
								if((tipoAux = existeEntrada((yyvsp[(1) - (3)]).cadena)) != 0){
								 (yyval).tipo = tipoAux;
								}else{
									printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual,(yyvsp[(1) - (3)]).cadena);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								}
							 }
							   
							   if(tipoAux != (yyvsp[(3) - (3)]).tipo){
									printf("\n* Error linea: %d. Asignacion de tipo incorrecto.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
							   }
						 }else{
							(yyval).tipo = errorTipo;
						 }
					}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 603 "lexico.y"
    { 
											if((yyvsp[(3) - (5)]).tipo != booleano && (yyvsp[(3) - (5)]).tipo != errorTipo){ 
												printf("\n* Error linea: %d. Expresion en while no es booleana.\n",linea_actual);
												(yyval).tipo = errorTipo;
												contadorErrores++;
											}
											
											if((yyvsp[(3) - (5)]).tipo == errorTipo){
												(yyval).tipo = errorTipo;
											}
									   }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 614 "lexico.y"
    {
								if((yyvsp[(3) - (5)]).tipo != booleano && (yyvsp[(3) - (5)]).tipo != errorTipo){
									printf("\n* Error linea: %d. Expresion en while no es booleana.\n",linea_actual);
									(yyval).tipo = errorTipo;
									contadorErrores++;
								}
								
								if((yyvsp[(3) - (5)]).tipo == errorTipo){
									(yyval).tipo = errorTipo;
								}
							  }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 637 "lexico.y"
    {  if(existeEntrada((yyvsp[(1) - (2)]).cadena) != sinTipo){
							printf("\n* Error linea: %d. Llamada a procedimiento no declarada con anterioridad.\n",linea_actual);
							(yyval).tipo = errorTipo;
							contadorErrores++;
						 }
						 
					  }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 643 "lexico.y"
    {	if(compruebaNumeroParametros((yyvsp[(1) - (4)]).cadena, numParametros) == 0){ //Error en tipo
												printf("\n* Error linea: %d. El numero de parametros no coindicen en la llamada al procedimiento.\n", linea_actual);
												(yyval).tipo = errorTipo;
												contadorErrores++;
											}		
									   }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 650 "lexico.y"
    { if(existeEntrada((yyvsp[(1) - (4)]).cadena) != sinTipo){
					  printf("\n* Error linea: %d. Llamada a procedimiento \" %s \" no declarada con anterioridad.\n",linea_actual, (yyvsp[(1) - (4)]).cadena);
					  (yyval).tipo = errorTipo;
					  contadorErrores++;
				   }
				 }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 658 "lexico.y"
    { 	
													if((yyvsp[(3) - (3)]).tipo != errorTipo){
														numParametros++;
														if(compruebaParametroProcedimiento((yyvsp[(-1) - (3)]).cadena, (yyvsp[(3) - (3)]).tipo, numParametros) == 0){
															printf("\n* Error linea: %d. Parametro del procedimiento no coinciden en tipo.\n", linea_actual);
															(yyval).tipo = errorTipo;
															contadorErrores++;
														}
														
														if(compruebaParametroProcedimiento((yyvsp[(-1) - (3)]).cadena, (yyvsp[(3) - (3)]).tipo, numParametros) == 2){
															printf("\n* Error linea: %d. Numero de parametros excedido en la llamada a procedimiento.\n", linea_actual);
															(yyval).tipo = errorTipo;
															contadorErrores++;
														}
													}else{
														(yyval).tipo = errorTipo;
													}
												}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 676 "lexico.y"
    {	
				if((yyvsp[(1) - (1)]).tipo != errorTipo){
					numParametros = 1;
					if(compruebaParametroProcedimiento((yyvsp[(-1) - (1)]).cadena, (yyvsp[(1) - (1)]).tipo, numParametros) == 0){
						printf("\n* Error linea: %d. Parametro del procedimiento no coinciden en tipo.\n", linea_actual);
						(yyval).tipo = errorTipo;
						contadorErrores++;
					}
				}else{
					(yyval).tipo = errorTipo;
				}
			}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 690 "lexico.y"
    {
					pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
				 }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 692 "lexico.y"
    {borrarHastaMarcaTS();}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 706 "lexico.y"
    {
									(yyval).tipo = conjunto;
							   }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 710 "lexico.y"
    { if( existeEntradaLocal((yyvsp[(3) - (4)]).cadena) != conjunto && existeEntrada((yyvsp[(3) - (4)]).cadena) != conjunto){
											printf("\n* Error linea: %d. Identificador \" %s \" no declarado.\n",linea_actual, (yyvsp[(3) - (4)]).cadena);
											contadorErrores++;
										}
									  }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 716 "lexico.y"
    {  	
										if( existeEntradaLocal((yyvsp[(3) - (4)]).cadena) != conjunto && existeEntrada((yyvsp[(3) - (4)]).cadena) != conjunto){
											printf("\n* Error linea. %d. Identificador \" %s \" no declarado",linea_actual, (yyvsp[(3) - (4)]).cadena);
											(yyval).tipo = errorTipo;
											contadorErrores++;
										}else{
											(yyval).tipo = booleano;
										}
								   }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 727 "lexico.y"
    {
									if( existeEntradaLocal((yyvsp[(3) - (4)]).cadena) != conjunto && existeEntrada((yyvsp[(3) - (4)]).cadena) != conjunto){
										printf("\n* Error linea. %d. Identificador \" %s \" no declarado.\n",linea_actual, (yyvsp[(3) - (4)]).cadena);
										(yyval).tipo = errorTipo;
										contadorErrores++;
									}else{
										(yyval).tipo = entero;
									}
								  }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 738 "lexico.y"
    {
										if((yyvsp[(3) - (3)]).tipo != errorTipo){
											if( existeEntradaLocal((yyvsp[(1) - (3)]).cadena) != conjunto && existeEntrada((yyvsp[(1) - (3)]).cadena) != conjunto){
												printf("\n* Error linea: %d. Identificador \" %s \" no declarado.\n",linea_actual, (yyvsp[(1) - (3)]).cadena);
												(yyval).tipo = errorTipo;
												contadorErrores++;
											}
										}else{
											(yyval).tipo = errorTipo;
										}
									 }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 751 "lexico.y"
    {
									if((yyvsp[(3) - (3)]).tipo != errorTipo){
										if( existeEntradaLocal((yyvsp[(1) - (3)]).cadena) != conjunto && existeEntrada((yyvsp[(1) - (3)]).cadena) != conjunto){
											printf("\n* Error linea: %d. Identificador \" %s \" no declarado",linea_actual, (yyvsp[(1) - (3)]).cadena);
											(yyval).tipo = errorTipo;
											contadorErrores++;
										}
									}else{
										(yyval).tipo = errorTipo;
									}
								 }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 765 "lexico.y"
    {
									if( existeEntradaLocal((yyvsp[(2) - (2)]).cadena) != conjunto && existeEntrada((yyvsp[(2) - (2)]).cadena) != conjunto){
										printf("\n* Error linea: %d. Identificador \" %s \" no declarado",linea_actual, (yyvsp[(2) - (2)]).cadena);
										(yyval).tipo = errorTipo;
										contadorErrores++;
									}else{
										(yyval).tipo = conjunto;
									}
								  }
    break;



/* Line 1806 of yacc.c  */
#line 2773 "lexico.tab.c"
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
#line 776 "lexico.y"

/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"

