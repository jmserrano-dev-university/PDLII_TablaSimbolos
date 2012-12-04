#ifndef lint
static char yysccsid[] = "@(#)yaccpar     1.7 (Berkeley) 09/09/90";
#endif
#define YYBYACC 1
#line 2 "lexico.y"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaSimbolos.h" /*Añadimos la tabla de simbolos*/

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

tDato tipoAux; /*Almacenamos el tipo para las declaraciones de VARIABLES*/
int numParametros;
char nombreProc[100];

#line 36 "y_tab.c"
#define CAB1 257
#define CAB2 258
#define CASE 259
#define ID 260
#define NUM 261
#define BREAK 262
#define INT 263
#define FLOAT 264
#define CHAR 265
#define SET 266
#define TYPEDEF 267
#define REAL 268
#define STRING 269
#define BOOL 270
#define TRUE 271
#define FALSE 272
#define CARACTER 273
#define OP_INOUT 274
#define EMPTY 275
#define LENGTH 276
#define VOID 277
#define SWITCH 278
#define WHILE 279
#define INCLUDE 280
#define DEFINE 281
#define IF 282
#define IN 283
#define OUT 284
#define DEFAULT 285
#define ELSE 286
#define CREATE 287
#define INSERT 288
#define MAIN 289
#define EXTRACT 290
#define DELETE 291
#define MINUS 292
#define UNION 293
#define INTERSECTION 294
#define NEG 295
#define PIZ 296
#define PDE 297
#define COMEN 298
#define ERR 299
#define CORI 300
#define CORD 301
#define PUNTOS 302
#define LLIZ 303
#define LLDE 304
#define PYC 305
#define COMA 306
#define ASI 307
#define MAYORIQ 308
#define MENORIQ 309
#define MAYORQ 310
#define MENORQ 311
#define DIST 312
#define II 313
#define SUM 314
#define RES 315
#define MUL 316
#define DIV 317
#define AND 318
#define OR 319
#define ADDC 320
#define MINC 321
#define COMPC 322
#define NEGEXP 323
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    2,
    2,    2,    2,    3,    3,    4,    5,    5,    6,    6,
    7,    7,    9,   14,   14,   10,   11,   15,   15,   15,
   15,   15,   15,   15,   17,   12,   16,   16,   18,   18,
   19,   22,   24,   13,   25,   26,   13,   21,   21,   27,
   27,   27,   27,   27,   27,   27,   27,   27,   28,   28,
   28,   28,   35,   35,   35,   35,   37,   37,   38,   38,
   36,   36,   39,   39,   39,   29,   29,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   30,   30,   32,   32,   44,   44,   31,
   46,   47,   33,   33,   45,   45,   48,    8,   23,   23,
   23,   23,   34,   34,   34,   40,   51,   42,   43,   49,
   50,   41,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    1,    2,    1,
    2,    1,    2,    1,    1,    3,    4,    1,    1,    1,
    1,    1,    1,    1,    0,    4,    3,    1,    1,    3,
    1,    0,    0,    8,    0,    0,    7,    4,    2,    1,
    1,    1,    1,    1,    1,    1,    2,    2,    8,    7,
    7,    6,    7,    6,    6,    5,    1,    1,    2,    1,
    3,    2,    3,    1,    2,    5,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    1,
    3,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    3,    5,    5,    7,    5,    3,    1,    7,
    0,    0,    7,    4,    3,    1,    0,    6,    4,    3,
    3,    2,    1,    1,    1,    3,    4,    4,    4,    3,
    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
   18,   20,   22,   35,    0,    0,  117,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,    0,    0,    0,    0,    0,    0,   16,
   10,   41,    0,   38,    0,   27,    0,    0,    0,   26,
   36,    0,    0,    0,    0,   46,    0,   37,    0,   90,
   94,   98,   95,   96,   97,    0,    0,    0,    0,    0,
    0,    0,   99,  100,  101,  102,   49,   43,    0,    0,
    0,  118,    0,    0,    0,    0,    0,  132,   92,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   47,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  122,    0,   55,    0,   70,   50,   51,
   52,   53,   54,   56,    0,    0,  123,  124,  125,    0,
    0,    0,  126,   91,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   82,   83,   44,   48,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  121,    0,   58,
   57,    0,  120,   69,  128,  129,    0,    0,    0,    0,
    0,    0,    0,   74,    0,    0,    0,    0,  119,  114,
    0,    0,    0,    0,   75,    0,    0,    0,    0,    0,
  127,    0,    0,    0,  105,  104,   73,   76,    0,  107,
  109,    0,    0,    0,    0,    0,   62,    0,    0,    0,
    0,    0,  113,   67,   68,    0,    0,    0,   61,    0,
   60,  110,  106,  108,    0,    0,    0,   59,    0,    0,
    0,   66,    0,    0,    0,   64,   65,    0,   63,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  126,   30,   24,   53,   44,   54,   55,  127,
   65,   57,   92,  112,   58,   90,  128,  129,  130,  131,
  132,  133,  134,  135,  218,  219,  226,  136,  185,   83,
   84,   85,   86,  212,  192,  178,  203,   47,  137,  138,
  139,
};
short yysindex[] = {                                   1245,
    0,    0,    0,    0,    0,  -99,    0,    0, -237, -238,
    0,   77,    0, -258, -257, -252,   77, -251,    0,    0,
    0,    0,    0,    0, -224, -218,    0,    0,    0,    0,
    0, -257, -252,    0, -154, -252, -172,    0, -251,    0,
    0,    0,    0, -148, -222,    0, -176, -252, -147,    0,
    0,    0, -204,    0, -184,    0,  -99, -173, -166,    0,
    0, -148, 1114, -122, -213,    0, -161,    0, -155,    0,
    0,    0,    0,    0,    0, -150, -143, -139, 1114, -102,
 1114, 1306,    0,    0,    0,    0,    0,    0,  -99, -161,
  564,    0, 1114, -100,  -98, -125, 1162,    0,    0, 1114,
 1114, 1114, 1114, 1114, 1114, 1114, 1114, 1114, 1114, 1114,
 1114, -161,  -87,    0, -293,    0,  -86, -120, -117, 1114,
  -97,  -94,  -90,    0,  601,    0, 1279,    0,    0,    0,
    0,    0,    0,    0, -109,  781,    0,    0,    0, 1306,
  -85,  -84,    0,    0,  501,  501,  501,  501,  501,  501,
 -182, -182, -200, -200,    0,    0,    0,    0,  -80, 1114,
 1114,  -62, 1114,   48,  -77,  -51,  -40,    0,  815,    0,
    0, -293,    0,    0,    0,    0,  -83, 1114, 1306, 1306,
  -76, 1185,  849,    0,  -61,  -82, -201,  -71,    0,    0,
 1306,  -79,  -73,  691,    0,  883,  917,  -29,  -72,  -28,
    0, 1114,  -58, -254,    0,    0,    0,    0,  -45,    0,
    0, -198, 1306,  -69, -187,  -49,    0, -253,  -70,  -48,
  -41,   -4,    0,    0,    0,  -42, 1082, -187,    0,  -34,
    0,    0,    0,    0,  950, 1082,  -31,    0,  -30,  983,
 1016,    0,  -27,  -26, 1049,    0,    0,  -25,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  679,  720,  735,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 1263, 1278,    0,    0, 1293,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -175,    0, 1308,    0,    0,
    0,    0,    0,    0, -179,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -128,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -177,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -247, 1135,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  635,
    0,    0,    0,    0,  220,  276,  332,  388,  444,  500,
  108,  164,  -68,  -10,    0,    0,    0,    0, 1146,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 1294,    0,    0,    0,    0,    0,    0,  -23,  -22,
    0,    0,    0,    0,  747,    0,    0,    0,    0,    0,
 -193,  -21,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -190,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -20,    0,    0,    0,
    0,    0,    0,    0,    0,  -19,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  277,    0,  274,   -7,  199,  275,   -6,  280,  254,
   44,  -15,   17,    0,   -2,    0,    0,  235,    0,  -63,
    0,    0,  -37,    0,    0,    0, -115,    0,    0,    0,
    0,    0,    0,    0,    0,   92,   83, -124, -121,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
#define YYTABLESIZE 1625
short yytable[] = {                                      82,
  169,   41,  159,   25,  215,  228,   33,   36,    6,    6,
   40,   42,   32,   93,    6,   97,   23,   99,   28,   29,
  174,   10,   26,   35,   48,    9,  160,  161,   23,  140,
  216,  216,   51,   23,   43,   45,  145,  146,  147,  148,
  149,  150,  151,  152,  153,  154,  155,  156,  184,  217,
  229,   27,  114,  174,   64,   43,  164,   93,  196,   38,
   93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,  206,  224,  157,  208,   38,   46,  184,   38,
  174,  184,   56,   88,   42,  225,  113,   42,   42,   42,
   42,   38,   89,   42,   42,  199,  179,  180,  221,  182,
   61,   62,  236,  116,  200,   49,  115,  222,   35,   41,
  240,   52,  116,   60,  191,  115,  245,  110,  111,   59,
  174,   45,   63,   66,  174,   39,   39,   40,   40,  174,
   67,   93,   93,  108,  109,  110,  111,   87,  213,   93,
   93,   91,   93,   93,   93,   94,   93,   93,   93,   93,
   93,   93,   95,   93,   93,   93,   96,   98,   93,  141,
    1,  142,   93,    2,    3,    4,    5,   93,   93,    7,
    8,  143,  158,   26,   93,  162,   93,   93,  163,   93,
   93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   80,   80,   93,   93,  171,  186,  181,  165,   80,
   80,  166,   80,   80,   80,  167,   80,   80,   80,   80,
   80,  175,  176,   80,   80,   80,  177,  187,   80,  188,
  193,  190,   80,  198,  197,  201,  202,   80,   80,  204,
  209,  211,  210,  231,   80,  223,   80,   80,  214,   80,
   80,   80,   80,   80,   80,   80,   80,   80,   80,   81,
   81,  220,  227,   80,   80,  234,  232,   81,   81,  235,
   81,   81,   81,  233,   81,   81,   81,   81,   81,  238,
  241,   81,   81,   81,  242,  112,   81,  246,  247,  249,
   81,  130,  131,   72,   71,   81,   81,   32,   31,  125,
   50,   39,   81,   34,   81,   81,   68,   81,   81,   81,
   81,   81,   81,   81,   81,   81,   81,  172,   70,  230,
  237,   81,   81,    0,    0,   71,   72,    0,   73,   74,
   75,    0,   76,   77,  117,  118,  119,    0,    0,  120,
  121,  122,    0,    0,   78,    0,    1,    0,  123,    2,
    3,    4,    5,   79,    0,    7,    8,    0,    0,    0,
  183,    0,    0,    9,    0,  100,  101,  102,  103,  104,
  105,  106,  107,  108,  109,  110,  111,   78,   78,   80,
   81,    0,    0,    0,    0,   78,   78,    0,   78,   78,
   78,    0,   78,   78,   78,   78,   78,    0,    0,   78,
   78,   78,    0,    0,   78,    0,    0,    0,   78,    0,
    0,    0,    0,   78,   78,    0,    0,    0,    0,    0,
   78,    0,   78,   78,    0,   78,   78,   78,   78,   78,
   78,   78,   78,   79,   79,    0,    0,    0,    0,   78,
   78,   79,   79,    0,   79,   79,   79,    0,   79,   79,
   79,   79,   79,    0,    0,   79,   79,   79,    0,    0,
   79,    0,    0,    0,   79,    0,    0,    0,    0,   79,
   79,    0,    0,    0,    0,    0,   79,    0,   79,   79,
    0,   79,   79,   79,   79,   79,   79,   79,   79,   84,
   84,    0,    0,    0,    0,   79,   79,   84,   84,    0,
   84,   84,   84,    0,   84,   84,   84,   84,   84,    0,
    0,   84,   84,   84,    0,    0,   84,    0,    0,    0,
   84,    0,    0,    0,    0,   84,   84,    0,    0,    0,
    0,    0,   84,    0,   84,   84,    0,   84,   84,   84,
   84,   84,   84,    0,    0,   85,   85,    0,    0,    0,
    0,   84,   84,   85,   85,    0,   85,   85,   85,    0,
   85,   85,   85,   85,   85,    0,    0,   85,   85,   85,
    0,    0,   85,    0,    0,    0,   85,    0,    0,    0,
    0,   85,   85,    0,    0,    0,    0,    0,   85,    0,
   85,   85,    0,   85,   85,   85,   85,   85,   85,    0,
    0,   86,   86,    0,    0,    0,    0,   85,   85,   86,
   86,    0,   86,   86,   86,    0,   86,   86,   86,   86,
   86,    0,    0,   86,   86,   86,    0,    0,   86,    0,
    0,    0,   86,    0,    0,    0,    0,   86,   86,    0,
    0,    0,    0,    0,   86,    0,   86,   86,    0,   86,
   86,   86,   86,   86,   86,    0,    0,   87,   87,    0,
    0,    0,    0,   86,   86,   87,   87,    0,   87,   87,
   87,    0,   87,   87,   87,   87,   87,    0,    0,   87,
   87,   87,    0,    0,   87,    0,    0,    0,   87,    0,
    0,    0,    0,   87,   87,    0,    0,    0,    0,    0,
   87,    0,   87,   87,    0,   87,   87,   87,   87,   87,
   87,    0,    0,   88,   88,    0,    0,    0,    0,   87,
   87,   88,   88,    0,   88,   88,   88,    0,   88,   88,
   88,   88,   88,    0,    0,   88,   88,   88,    0,    0,
   88,    0,    0,    0,   88,    0,    0,    0,    0,   88,
   88,    0,    0,    0,    0,    0,   88,    0,   88,   88,
    0,   88,   88,   88,   88,   88,   88,    0,    0,   89,
   89,    0,    0,    0,    0,   88,   88,   89,   89,    0,
   89,   89,   89,    0,   89,   89,   89,   89,   89,    0,
    0,   89,   89,   89,    0,    0,   89,    0,    0,    0,
   89,    0,    0,    0,    0,   89,   89,    0,    0,    0,
    0,    0,   89,    0,   89,   89,    0,   89,   89,   89,
   89,   89,   89,    0,  106,  107,  108,  109,  110,  111,
    0,   89,   89,  115,   70,    0,    2,    3,    4,    5,
    0,   71,  116,    8,   73,   74,   75,    0,   76,   77,
  117,  118,  119,    0,    0,  120,  121,  122,    0,    0,
   78,    0,    0,    0,  123,    0,    0,    0,    0,   79,
  115,   70,    0,    2,    3,    4,    5,  124,   71,  116,
    8,   73,   74,   75,    0,   76,   77,  117,  118,  119,
    0,    0,  120,  121,  122,   80,   81,   78,    0,    0,
    0,  123,    0,    0,  103,  103,   79,    0,    0,    0,
    0,    0,  103,  103,  168,  103,  103,  103,    0,  103,
  103,  103,  103,  103,    0,    0,  103,  103,  103,    0,
    0,  103,   80,   81,    0,  103,    0,    0,    0,    0,
  103,  103,    0,    0,    0,    0,    0,  103,    7,  103,
  103,    7,    7,    7,    7,    0,    0,    7,    7,    0,
  172,   70,    0,    0,    0,    7,  103,  103,   71,   72,
    0,   73,   74,   75,    0,   76,   77,  117,  118,  119,
    0,    0,  120,  121,  122,    0,    0,   78,    0,    8,
    0,  123,    8,    8,    8,    8,   79,    0,    8,    8,
    0,    0,    0,  183,    9,  205,    8,    9,    9,    9,
    9,    0,    0,    9,    9,    0,   77,   77,   77,    0,
    0,    9,   80,   81,   77,   77,    0,   77,   77,   77,
    0,   77,   77,   77,   77,   77,    0,    0,   77,   77,
   77,    0,    0,   77,    0,    0,    0,   77,    0,    0,
  172,   70,   77,    0,    0,    0,    0,    0,   71,   72,
   77,   73,   74,   75,    0,   76,   77,  117,  118,  119,
    0,    0,  120,  121,  122,    0,    0,   78,   77,   77,
    0,  123,    0,    0,  172,   70,   79,    0,    0,    0,
    0,    0,   71,   72,  173,   73,   74,   75,    0,   76,
   77,  117,  118,  119,    0,    0,  120,  121,  122,    0,
    0,   78,   80,   81,    0,  123,    0,    0,  172,   70,
   79,    0,    0,    0,    0,    0,   71,   72,  189,   73,
   74,   75,    0,   76,   77,  117,  118,  119,    0,    0,
  120,  121,  122,    0,    0,   78,   80,   81,    0,  123,
    0,    0,  172,   70,   79,    0,    0,    0,    0,    0,
   71,   72,  195,   73,   74,   75,    0,   76,   77,  117,
  118,  119,    0,    0,  120,  121,  122,    0,    0,   78,
   80,   81,    0,  123,    0,    0,  172,   70,   79,    0,
    0,    0,    0,    0,   71,   72,  207,   73,   74,   75,
    0,   76,   77,  117,  118,  119,    0,    0,  120,  121,
  122,    0,    0,   78,   80,   81,    0,  123,    0,  172,
   70,  239,   79,    0,    0,    0,    0,   71,   72,  183,
   73,   74,   75,    0,   76,   77,  117,  118,  119,    0,
    0,  120,  121,  122,    0,    0,   78,    0,   80,   81,
  123,    0,  172,   70,  243,   79,    0,    0,    0,    0,
   71,   72,    0,   73,   74,   75,    0,   76,   77,  117,
  118,  119,    0,    0,  120,  121,  122,    0,    0,   78,
    0,   80,   81,  123,    0,  172,   70,  244,   79,    0,
    0,    0,    0,   71,   72,    0,   73,   74,   75,    0,
   76,   77,  117,  118,  119,    0,    0,  120,  121,  122,
    0,    0,   78,    0,   80,   81,  123,    0,  172,   70,
  248,   79,    0,    0,    0,    0,   71,   72,    0,   73,
   74,   75,    0,   76,   77,  117,  118,  119,    0,    0,
  120,  121,  122,    0,    0,   78,    0,   80,   81,  123,
    0,  172,   70,    0,   79,    0,    0,    0,    0,   71,
   72,    0,   73,   74,   75,    0,   76,   77,  117,  118,
  119,    0,    0,  120,  121,  122,    0,    0,   78,    0,
   80,   81,  123,   69,   70,    0,    0,   79,    0,    0,
    0,   71,   72,    0,   73,   74,   75,    0,   76,   77,
    0,    0,    0,    0,   34,    0,    0,    0,    0,    0,
   78,    0,    0,   80,   81,  111,  111,    0,    0,   79,
    0,    0,    0,  111,  111,    0,  111,  111,  111,    0,
  111,  111,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  111,    0,    0,   80,   81,    0,    0,   98,
    0,  111,   98,   98,   98,   98,   98,   98,   98,   98,
   98,   98,   98,   98,    0,    0,    0,    0,  144,    0,
    0,    0,    0,    0,    0,    0,    0,  111,  111,  100,
  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
  111,  194,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  100,  101,  102,  103,  104,  105,  106,  107,
  108,  109,  110,  111,    1,    0,    0,    2,    3,    4,
    5,    6,    0,    7,    8,    0,    0,    0,    0,    0,
    0,    9,    6,    0,   10,    6,    6,    6,    6,    0,
    0,    6,    6,    0,    0,    0,    0,    5,    0,    6,
    5,    5,    5,    5,    0,    0,    5,    5,    0,    0,
    0,    0,    4,    0,    5,    4,    4,    4,    4,    0,
    0,    4,    4,    0,    0,    0,    0,    3,    0,    4,
    3,    3,    3,    3,    0,    0,    3,    3,    0,    0,
    0,    0,    0,  170,    3,    0,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,   93,    0,
    0,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,  100,  101,  102,  103,  104,  105,  106,
  107,  108,  109,  110,  111,
};
short yycheck[] = {                                      63,
  125,   17,  296,    6,  259,  259,   14,   15,  267,  267,
   17,   18,  260,  307,  267,   79,    0,   81,  257,  258,
  136,  280,  260,  281,   32,  277,  320,  321,   12,   93,
  285,  285,   39,   17,   18,  260,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,  164,  304,
  304,  289,   90,  169,   57,   39,  120,  305,  183,   16,
  308,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  194,  261,  112,  197,   33,  296,  194,   36,
  196,  197,  305,  297,  260,  273,   89,  263,  264,  265,
  266,   48,  306,  269,  270,  297,  160,  161,  297,  163,
  305,  306,  227,  297,  306,  260,  297,  306,  281,  125,
  235,  260,  306,  261,  178,  306,  241,  318,  319,  296,
  236,  297,  307,  297,  240,  305,  306,  305,  306,  245,
  297,  260,  261,  316,  317,  318,  319,  260,  202,  268,
  269,  303,  271,  272,  273,  296,  275,  276,  277,  278,
  279,  307,  296,  282,  283,  284,  296,  260,  287,  260,
  260,  260,  291,  263,  264,  265,  266,  296,  297,  269,
  270,  297,  260,  260,  303,  296,  305,  306,  296,  308,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  260,  261,  322,  323,  305,  274,  260,  296,  268,
  269,  296,  271,  272,  273,  296,  275,  276,  277,  278,
  279,  297,  297,  282,  283,  284,  297,  269,  287,  260,
  297,  305,  291,  306,  286,  297,  306,  296,  297,  303,
  260,  260,  305,  304,  303,  305,  305,  306,  297,  308,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  260,
  261,  297,  302,  322,  323,  260,  305,  268,  269,  302,
  271,  272,  273,  305,  275,  276,  277,  278,  279,  304,
  302,  282,  283,  284,  305,  297,  287,  305,  305,  305,
  291,  305,  305,  304,  304,  296,  297,   14,   12,   91,
   37,   17,  303,   14,  305,  306,   62,  308,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  260,  261,  218,
  228,  322,  323,   -1,   -1,  268,  269,   -1,  271,  272,
  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,
  283,  284,   -1,   -1,  287,   -1,  260,   -1,  291,  263,
  264,  265,  266,  296,   -1,  269,  270,   -1,   -1,   -1,
  303,   -1,   -1,  277,   -1,  308,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  260,  261,  322,
  323,   -1,   -1,   -1,   -1,  268,  269,   -1,  271,  272,
  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,
  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,
   -1,   -1,   -1,  296,  297,   -1,   -1,   -1,   -1,   -1,
  303,   -1,  305,  306,   -1,  308,  309,  310,  311,  312,
  313,  314,  315,  260,  261,   -1,   -1,   -1,   -1,  322,
  323,  268,  269,   -1,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,
  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,
  297,   -1,   -1,   -1,   -1,   -1,  303,   -1,  305,  306,
   -1,  308,  309,  310,  311,  312,  313,  314,  315,  260,
  261,   -1,   -1,   -1,   -1,  322,  323,  268,  269,   -1,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,
  291,   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,   -1,
   -1,   -1,  303,   -1,  305,  306,   -1,  308,  309,  310,
  311,  312,  313,   -1,   -1,  260,  261,   -1,   -1,   -1,
   -1,  322,  323,  268,  269,   -1,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,
   -1,  296,  297,   -1,   -1,   -1,   -1,   -1,  303,   -1,
  305,  306,   -1,  308,  309,  310,  311,  312,  313,   -1,
   -1,  260,  261,   -1,   -1,   -1,   -1,  322,  323,  268,
  269,   -1,  271,  272,  273,   -1,  275,  276,  277,  278,
  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,
   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,  297,   -1,
   -1,   -1,   -1,   -1,  303,   -1,  305,  306,   -1,  308,
  309,  310,  311,  312,  313,   -1,   -1,  260,  261,   -1,
   -1,   -1,   -1,  322,  323,  268,  269,   -1,  271,  272,
  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,
  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,
   -1,   -1,   -1,  296,  297,   -1,   -1,   -1,   -1,   -1,
  303,   -1,  305,  306,   -1,  308,  309,  310,  311,  312,
  313,   -1,   -1,  260,  261,   -1,   -1,   -1,   -1,  322,
  323,  268,  269,   -1,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,
  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,
  297,   -1,   -1,   -1,   -1,   -1,  303,   -1,  305,  306,
   -1,  308,  309,  310,  311,  312,  313,   -1,   -1,  260,
  261,   -1,   -1,   -1,   -1,  322,  323,  268,  269,   -1,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,
  291,   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,   -1,
   -1,   -1,  303,   -1,  305,  306,   -1,  308,  309,  310,
  311,  312,  313,   -1,  314,  315,  316,  317,  318,  319,
   -1,  322,  323,  260,  261,   -1,  263,  264,  265,  266,
   -1,  268,  269,  270,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,
  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,
  260,  261,   -1,  263,  264,  265,  266,  304,  268,  269,
  270,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,  322,  323,  287,   -1,   -1,
   -1,  291,   -1,   -1,  260,  261,  296,   -1,   -1,   -1,
   -1,   -1,  268,  269,  304,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,
   -1,  287,  322,  323,   -1,  291,   -1,   -1,   -1,   -1,
  296,  297,   -1,   -1,   -1,   -1,   -1,  303,  260,  305,
  306,  263,  264,  265,  266,   -1,   -1,  269,  270,   -1,
  260,  261,   -1,   -1,   -1,  277,  322,  323,  268,  269,
   -1,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,  260,
   -1,  291,  263,  264,  265,  266,  296,   -1,  269,  270,
   -1,   -1,   -1,  303,  260,  305,  277,  263,  264,  265,
  266,   -1,   -1,  269,  270,   -1,  260,  261,  262,   -1,
   -1,  277,  322,  323,  268,  269,   -1,  271,  272,  273,
   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,  283,
  284,   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,   -1,
  260,  261,  296,   -1,   -1,   -1,   -1,   -1,  268,  269,
  304,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,   -1,   -1,  287,  322,  323,
   -1,  291,   -1,   -1,  260,  261,  296,   -1,   -1,   -1,
   -1,   -1,  268,  269,  304,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,
   -1,  287,  322,  323,   -1,  291,   -1,   -1,  260,  261,
  296,   -1,   -1,   -1,   -1,   -1,  268,  269,  304,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,
  282,  283,  284,   -1,   -1,  287,  322,  323,   -1,  291,
   -1,   -1,  260,  261,  296,   -1,   -1,   -1,   -1,   -1,
  268,  269,  304,  271,  272,  273,   -1,  275,  276,  277,
  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,
  322,  323,   -1,  291,   -1,   -1,  260,  261,  296,   -1,
   -1,   -1,   -1,   -1,  268,  269,  304,  271,  272,  273,
   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,  283,
  284,   -1,   -1,  287,  322,  323,   -1,  291,   -1,  260,
  261,  262,  296,   -1,   -1,   -1,   -1,  268,  269,  303,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,   -1,   -1,  287,   -1,  322,  323,
  291,   -1,  260,  261,  262,  296,   -1,   -1,   -1,   -1,
  268,  269,   -1,  271,  272,  273,   -1,  275,  276,  277,
  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,
   -1,  322,  323,  291,   -1,  260,  261,  262,  296,   -1,
   -1,   -1,   -1,  268,  269,   -1,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
   -1,   -1,  287,   -1,  322,  323,  291,   -1,  260,  261,
  262,  296,   -1,   -1,   -1,   -1,  268,  269,   -1,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,
  282,  283,  284,   -1,   -1,  287,   -1,  322,  323,  291,
   -1,  260,  261,   -1,  296,   -1,   -1,   -1,   -1,  268,
  269,   -1,  271,  272,  273,   -1,  275,  276,  277,  278,
  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,
  322,  323,  291,  260,  261,   -1,   -1,  296,   -1,   -1,
   -1,  268,  269,   -1,  271,  272,  273,   -1,  275,  276,
   -1,   -1,   -1,   -1,  260,   -1,   -1,   -1,   -1,   -1,
  287,   -1,   -1,  322,  323,  260,  261,   -1,   -1,  296,
   -1,   -1,   -1,  268,  269,   -1,  271,  272,  273,   -1,
  275,  276,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  287,   -1,   -1,  322,  323,   -1,   -1,  305,
   -1,  296,  308,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,   -1,   -1,   -1,   -1,  297,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  322,  323,  308,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  297,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  308,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  260,   -1,   -1,  263,  264,  265,
  266,  267,   -1,  269,  270,   -1,   -1,   -1,   -1,   -1,
   -1,  277,  260,   -1,  280,  263,  264,  265,  266,   -1,
   -1,  269,  270,   -1,   -1,   -1,   -1,  260,   -1,  277,
  263,  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,
   -1,   -1,  260,   -1,  277,  263,  264,  265,  266,   -1,
   -1,  269,  270,   -1,   -1,   -1,   -1,  260,   -1,  277,
  263,  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,
   -1,   -1,   -1,  305,  277,   -1,  308,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  319,  305,   -1,
   -1,  308,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  319,  308,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 323
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"CAB1","CAB2","CASE","ID","NUM",
"BREAK","INT","FLOAT","CHAR","SET","TYPEDEF","REAL","STRING","BOOL","TRUE",
"FALSE","CARACTER","OP_INOUT","EMPTY","LENGTH","VOID","SWITCH","WHILE",
"INCLUDE","DEFINE","IF","IN","OUT","DEFAULT","ELSE","CREATE","INSERT","MAIN",
"EXTRACT","DELETE","MINUS","UNION","INTERSECTION","NEG","PIZ","PDE","COMEN",
"ERR","CORI","CORD","PUNTOS","LLIZ","LLDE","PYC","COMA","ASI","MAYORIQ",
"MENORIQ","MAYORQ","MENORQ","DIST","II","SUM","RES","MUL","DIV","AND","OR",
"ADDC","MINC","COMPC","NEGEXP",
};
char *yyrule[] = {
"$accept : prog",
"prog : dec1 dec2",
"prog : dec2",
"dec1 : incs_s defs_s tipos_s",
"dec1 : defs_s tipos_s",
"dec1 : incs_s tipos_s",
"dec1 : incs_s defs_s",
"dec1 : incs_s",
"dec1 : defs_s",
"dec1 : tipos_s",
"dec2 : vars_s procs_s main",
"dec2 : vars_s main",
"dec2 : procs_s main",
"dec2 : main",
"incs_s : incs_s incs",
"incs_s : incs",
"defs_s : defs_s defs defs",
"tipos_s : tipos_s tipos",
"tipos_s : tipos",
"vars_s : vars_s vars",
"vars_s : vars",
"procs_s : procs_s proc",
"procs_s : proc",
"incs : INCLUDE cabeceras",
"cabeceras : CAB1",
"cabeceras : CAB2",
"defs : DEFINE ID NUM",
"tipos : TYPEDEF tipo ID PYC",
"tipo : INT",
"tipo : FLOAT",
"tipo : CHAR",
"tipo : SET",
"tipo : ID",
"tipo : BOOL",
"tipo : STRING",
"$$1 :",
"vars : tipo $$1 variables PYC",
"variables : variables COMA variables_s",
"variables : variables_s",
"variables_s : variable",
"variables_s : variable ASI expresion",
"variable : ID",
"$$2 :",
"$$3 :",
"proc : VOID ID PIZ $$2 params PDE $$3 cuerpo",
"$$4 :",
"$$5 :",
"proc : VOID ID PIZ $$4 PDE $$5 cuerpo",
"params : params COMA tipo ID",
"params : tipo ID",
"sentencia : switch",
"sentencia : if",
"sentencia : while",
"sentencia : in",
"sentencia : out",
"sentencia : proc",
"sentencia : llamada_proc",
"sentencia : llamada_conjunto PYC",
"sentencia : expresion PYC",
"switch : SWITCH PIZ ID PDE LLIZ casos_s caso_defecto LLDE",
"switch : SWITCH PIZ ID PDE LLIZ caso_defecto LLDE",
"switch : SWITCH PIZ ID PDE LLIZ casos_s LLDE",
"switch : SWITCH PIZ ID PDE LLIZ LLDE",
"casos_s : casos_s CASE literal PUNTOS sentencias BREAK PYC",
"casos_s : CASE literal PUNTOS sentencias BREAK PYC",
"casos_s : casos_s CASE literal PUNTOS BREAK PYC",
"casos_s : CASE literal PUNTOS BREAK PYC",
"literal : NUM",
"literal : CARACTER",
"sentencias : sentencias sentencia",
"sentencias : sentencia",
"caso_defecto : DEFAULT PUNTOS sentencias",
"caso_defecto : DEFAULT PUNTOS",
"bloque : LLIZ sentencias LLDE",
"bloque : sentencia",
"bloque : LLIZ LLDE",
"if : IF expresion bloque ELSE bloque",
"if : IF expresion bloque",
"expresion : expresion SUM expresion",
"expresion : expresion RES expresion",
"expresion : expresion MUL expresion",
"expresion : expresion DIV expresion",
"expresion : expresion AND expresion",
"expresion : expresion OR expresion",
"expresion : expresion MAYORIQ expresion",
"expresion : expresion MENORIQ expresion",
"expresion : expresion MAYORQ expresion",
"expresion : expresion MENORQ expresion",
"expresion : expresion DIST expresion",
"expresion : expresion II expresion",
"expresion : NUM",
"expresion : PIZ expresion PDE",
"expresion : NEGEXP expresion",
"expresion : ID",
"expresion : REAL",
"expresion : TRUE",
"expresion : FALSE",
"expresion : CARACTER",
"expresion : STRING",
"expresion : crea_conjunto",
"expresion : llamada_complementario",
"expresion : llamada_sivacio",
"expresion : llamada_length",
"expresion : ID ASI expresion",
"while : WHILE PIZ expresion PDE bloque",
"while : WHILE PIZ expresion PDE PYC",
"out : OUT PIZ STRING COMA ids PDE PYC",
"out : OUT PIZ STRING PDE PYC",
"ids : ids COMA ID",
"ids : ID",
"in : IN PIZ OP_INOUT COMA ID PDE PYC",
"$$6 :",
"$$7 :",
"llamada_proc : ID PIZ $$6 params_llamada $$7 PDE PYC",
"llamada_proc : ID PIZ PDE PYC",
"params_llamada : params_llamada COMA expresion",
"params_llamada : expresion",
"$$8 :",
"main : VOID MAIN $$8 PIZ PDE cuerpo",
"cuerpo : LLIZ vars_s sentencias LLDE",
"cuerpo : LLIZ sentencias LLDE",
"cuerpo : LLIZ vars_s LLDE",
"cuerpo : LLIZ LLDE",
"llamada_conjunto : inserta_conjunto",
"llamada_conjunto : saca_conjunto",
"llamada_conjunto : destruye_conjunto",
"crea_conjunto : CREATE PIZ PDE",
"destruye_conjunto : DELETE PIZ ID PDE",
"llamada_sivacio : EMPTY PIZ ID PDE",
"llamada_length : LENGTH PIZ ID PDE",
"inserta_conjunto : ID ADDC expresion",
"saca_conjunto : ID MINC expresion",
"llamada_complementario : COMPC ID",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#ifdef YYSTACKSIZE
#ifndef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#endif
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 600
#define YYMAXDEPTH 600
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 554 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 754 "y_tab.c"
#define YYABORT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, reading %d (%s)\n", yystate,
                    yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: state %d, shifting to state %d\n",
                    yystate, yytable[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: state %d, error recovery shifting\
 to state %d\n", *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: error recovery discarding state %d\n",
                            *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, error recovery discards token %d (%s)\n",
                    yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("yydebug: state %d, reducing by rule %d (%s)\n",
                yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 2:
#line 65 "lexico.y"
{createTS();}
break;
case 27:
#line 96 "lexico.y"
{
								if(existeEntradaLocal(yyvsp[-1].cadena) == 0){
									pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,yyvsp[-2].tipo,defTipo,0));
								}else{
									printf("\n\n*Error linea %d: El identificador de la refinicion de tipo ya existe",linea_actual);
								}
							}
break;
case 28:
#line 107 "lexico.y"
{yyval.tipo = entero;}
break;
case 29:
#line 108 "lexico.y"
{yyval.tipo = real;}
break;
case 30:
#line 109 "lexico.y"
{yyval.tipo = caracter;}
break;
case 31:
#line 110 "lexico.y"
{yyval.tipo = conjunto;}
break;
case 32:
#line 111 "lexico.y"
{
		if((tipoAux = existeEntradaDefTipo(yyvsp[0].cadena)) != 0){
		 yyval.tipo = tipoAux;
		}else{
			printf("\n\n* Error linea %d: Tipo propio no definido",linea_actual);
			
		}
	 }
break;
case 33:
#line 119 "lexico.y"
{yyval.tipo = booleano;}
break;
case 34:
#line 120 "lexico.y"
{yyval.tipo = cadena;}
break;
case 35:
#line 123 "lexico.y"
{tipoAux = yyvsp[0].tipo;}
break;
case 40:
#line 131 "lexico.y"
{ 				   
						   if(tipoAux != yyvsp[0].tipo){
								printf("\n\n* Error linea: %d. Asignacion de tipo incorrecta en la declaración",linea_actual);
								
						   }
						 }
break;
case 41:
#line 141 "lexico.y"
{ if(existeEntradaLocal(yyvsp[0].cadena) == 0){
					pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,tipoAux,var,0)); 
					/*imprimirTS();*/
			    }else{
					printf("\n\n* Error linea: %d: Identificador declarado anteriormente\n",linea_actual);
					
				}
			  }
break;
case 42:
#line 153 "lexico.y"
{if(existeEntradaLocal(yyvsp[-1].cadena) != 0){
						printf("\n\n* Error linea: %d: Funcion ya declarada",linea_actual);
						
					  }else{
						pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,sinTipo,proc,0));
						/*imprimirTS();*/
					  }
				   }
break;
case 43:
#line 160 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); /*imprimirTS();*/}
break;
case 44:
#line 160 "lexico.y"
{borrarHastaMarcaTS(); /*imprimirTS();*/}
break;
case 45:
#line 162 "lexico.y"
{if(existeEntradaLocal(yyvsp[-1].cadena) != 0){
					printf("\n\n* Error linea: %d: Funcion ya declarada",linea_actual);
					
				  }else{
					pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,sinTipo,proc,0));
					/*imprimirTS();*/
				  }
			   }
break;
case 46:
#line 169 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); /*imprimirTS();*/}
break;
case 47:
#line 169 "lexico.y"
{borrarHastaMarcaTS(); /*imprimirTS();*/}
break;
case 48:
#line 172 "lexico.y"
{if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)){ printf("\n\n* Error linea: %d: Parametro formal existente\n",linea_actual); } /*else imprimirTS();*/}
break;
case 49:
#line 173 "lexico.y"
{if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)){ printf("\n\n* Error linea: %d: Parametro formal existente\n",linea_actual); }/*else imprimirTS();*/}
break;
case 59:
#line 186 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-5].cadena)) != 0 && tipoAux == yyvsp[-2].tipo){
																yyval.tipo = tipoAux;
																	if(tipoAux != entero && tipoAux != caracter){ 
																		printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
																		
																	}
															   }else{
																if((tipoAux = existeEntrada(yyvsp[-5].cadena)) != 0 && tipoAux == yyvsp[-2].tipo){
																 yyval.tipo = tipoAux;
																	 if(tipoAux != entero && tipoAux != caracter){
																		printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
																		
																	 }
																}else{
																	if(tipoAux == yyvsp[-2].tipo){
																		printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
																		
																	}else{
																		printf("\n\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
																		
																	}
																}
															   }
															  }
break;
case 60:
#line 210 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-4].cadena)) != 0){
												yyval.tipo = tipoAux;
													if(tipoAux != entero && tipoAux != caracter){ 
														printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
														
													}
											   }else{
												if((tipoAux = existeEntrada(yyvsp[-4].cadena)) != 0){
												 yyval.tipo = tipoAux;
													 if(tipoAux != entero && tipoAux != caracter){
														printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
														
													 }
												}else{
												 printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
												 
												}
											   }
											  }
break;
case 61:
#line 229 "lexico.y"
{ 	if((tipoAux = existeEntradaLocal(yyvsp[-4].cadena)) != 0 && tipoAux == yyvsp[-1].tipo){
											yyval.tipo = tipoAux;
												if(tipoAux != entero && tipoAux != caracter){
													printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
													
												}
										   }else{
											if((tipoAux = existeEntrada(yyvsp[-4].cadena)) != 0 && tipoAux == yyvsp[-1].tipo){
											 yyval.tipo = tipoAux;
												 if(tipoAux != entero && tipoAux != caracter){
													printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
													
												 }
											}else{
												if(tipoAux == yyvsp[-1].tipo){
													printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
													
												}else{
													printf("\n\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
													
												}
											}
										   }
										  }
break;
case 62:
#line 253 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-3].cadena)) != 0){
									yyval.tipo = tipoAux;
									if(tipoAux != entero && tipoAux != caracter){
										printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
										
									}
										
								   }else{
									if((tipoAux = existeEntrada(yyvsp[-3].cadena)) != 0){
										 yyval.tipo = tipoAux;
										 if(tipoAux != entero && tipoAux != caracter){
											printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
											
										 }
									}else{
										printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
										
									}
								   }
								  }
break;
case 63:
#line 275 "lexico.y"
{	if(yyvsp[-6].tipo != yyvsp[-4].tipo){ 
																	printf("\n\n* Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
																}else{
																	yyval.tipo = yyvsp[-4].tipo;
																}
														    }
break;
case 64:
#line 281 "lexico.y"
{yyval.tipo = yyvsp[-4].tipo;}
break;
case 65:
#line 282 "lexico.y"
{	if(yyvsp[-5].tipo != yyvsp[-3].tipo){
												printf("\n\n* Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
											}else{
												yyval.tipo = yyvsp[-3].tipo;
											}
										}
break;
case 66:
#line 288 "lexico.y"
{yyval.tipo = yyvsp[-3].tipo;}
break;
case 67:
#line 291 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 68:
#line 292 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 76:
#line 305 "lexico.y"
{ if(yyvsp[-3].tipo != booleano){ printf("\n\n* Error linea %d: Expresion en if no es booleana",linea_actual);} }
break;
case 77:
#line 306 "lexico.y"
{ if(yyvsp[-1].tipo != booleano){ printf("\n\n* Error linea %d: Expresion en if no es booleana",linea_actual); } }
break;
case 78:
#line 310 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == cadena || yyvsp[-2].tipo == conjunto /*UNION*/)){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									  }
									}
break;
case 79:
#line 316 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == conjunto /*DIFERENCIA*/)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
							  }
							}
break;
case 80:
#line 322 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
break;
case 81:
#line 329 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == conjunto /*INTERSECCION*/)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
break;
case 82:
#line 336 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
break;
case 83:
#line 343 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
							   }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
							   }
							}
break;
case 84:
#line 350 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
break;
case 85:
#line 357 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
break;
case 86:
#line 364 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
break;
case 87:
#line 371 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
break;
case 88:
#line 378 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
break;
case 89:
#line 385 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
break;
case 91:
#line 393 "lexico.y"
{yyval.tipo = yyvsp[-1].tipo;}
break;
case 92:
#line 394 "lexico.y"
{ if(yyvsp[0].tipo == booleano){
							yyval.tipo = booleano;
					   }else{
							printf("\n\n* Error linea: %d. Expresion con tipos distintos\n",linea_actual);
							
					   }
					}
break;
case 93:
#line 401 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[0].cadena)) != 0){
		yyval.tipo = tipoAux;
	   }else{
		if((tipoAux = existeEntrada(yyvsp[0].cadena)) != 0){
			yyval.tipo = tipoAux;
		}else{
			printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
			
		}
	   }
     }
break;
case 99:
#line 417 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 101:
#line 419 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 102:
#line 420 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 103:
#line 421 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-2].cadena)) != 0){
						yyval.tipo = tipoAux;
					   }else{
						if((tipoAux = existeEntrada(yyvsp[-2].cadena)) != 0){
						 yyval.tipo = tipoAux;
						}else{
							printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
						}
					   }
					   
					   if(tipoAux != yyvsp[0].tipo){
							printf("\n\n* Error linea: %d. Asignacion de tipo incorrecta",linea_actual);
							
					   }
					 }
break;
case 104:
#line 438 "lexico.y"
{ if(yyvsp[-2].tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
break;
case 105:
#line 439 "lexico.y"
{ if(yyvsp[-2].tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
break;
case 111:
#line 452 "lexico.y"
{  if(existeEntrada(yyvsp[-1].cadena) != sinTipo){
							printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
							
						 }
						 
					  }
break;
case 112:
#line 457 "lexico.y"
{	if(compruebaNumeroParametros(yyvsp[-3].cadena, numParametros) == 0){ /*Error en tipo*/
												printf("\n\n* Error linea %d: El numero de parametros no coindicen en la llamada al procedimiento", linea_actual);
												
											}		
									   }
break;
case 114:
#line 463 "lexico.y"
{ if(existeEntrada(yyvsp[-3].cadena) != sinTipo){
					  printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
					  
				   }
				 }
break;
case 115:
#line 470 "lexico.y"
{ numParametros++;
													if(compruebaParametroProcedimiento(yyvsp[-4].cadena, yyvsp[0].tipo, numParametros) == 0){
														printf("\n\n* Error linea: %d: Parametro del procedimiento no coinciden en tipo", linea_actual);
														
													}
													
													if(compruebaParametroProcedimiento(yyvsp[-4].cadena, yyvsp[0].tipo, numParametros) == 2){
														printf("\n\n* Error linea: %d: Numero de parametros excedido en la llamada a procedimiento", linea_actual);
														
													}
												}
break;
case 116:
#line 481 "lexico.y"
{numParametros = 1; if(compruebaParametroProcedimiento(yyvsp[-2].cadena, yyvsp[0].tipo, numParametros) == 0){
									printf("\n\n* Error linea: %d: Parametro del procedimiento no coinciden en tipo", linea_actual);
									
								}
			}
break;
case 117:
#line 488 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); /*imprimirTS();*/}
break;
case 118:
#line 488 "lexico.y"
{borrarHastaMarcaTS(); /*imprimirTS();*/}
break;
case 126:
#line 502 "lexico.y"
{
									yyval.tipo = conjunto;
							   }
break;
case 127:
#line 506 "lexico.y"
{ if( existeEntradaLocal(yyvsp[-1].cadena) != conjunto && existeEntrada(yyvsp[-1].cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}
									  }
break;
case 128:
#line 511 "lexico.y"
{  	
										if( existeEntradaLocal(yyvsp[-1].cadena) != conjunto && existeEntrada(yyvsp[-1].cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}else{
											yyval.tipo = booleano;
										}
								   }
break;
case 129:
#line 520 "lexico.y"
{
									if( existeEntradaLocal(yyvsp[-1].cadena) != conjunto && existeEntrada(yyvsp[-1].cadena) != conjunto){
										printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
									}else{
										yyval.tipo = entero;
									}
								  }
break;
case 130:
#line 529 "lexico.y"
{
										if( existeEntradaLocal(yyvsp[-2].cadena) != conjunto && existeEntrada(yyvsp[-2].cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}
									 }
break;
case 131:
#line 536 "lexico.y"
{
									if( existeEntradaLocal(yyvsp[-2].cadena) != conjunto && existeEntrada(yyvsp[-2].cadena) != conjunto){
										printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
									}
								 }
break;
case 132:
#line 544 "lexico.y"
{
									if( existeEntradaLocal(yyvsp[0].cadena) != conjunto && existeEntrada(yyvsp[0].cadena) != conjunto){
										printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
									}else{
										yyval.tipo = conjunto;
									}
								  }
break;
#line 1452 "y_tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: after reduction, shifting from state 0 to\
 state %d\n", YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("yydebug: state %d, reading %d (%s)\n",
                        YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("yydebug: after reduction, shifting from state %d \
to state %d\n", *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
