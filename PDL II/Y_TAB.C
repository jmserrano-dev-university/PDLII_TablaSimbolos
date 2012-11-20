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
#line 33 "y_tab.c"
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
#define TEXTO_OUT 274
#define OP_INOUT 275
#define EMPTY 276
#define LENGTH 277
#define VOID 278
#define SWITCH 279
#define WHILE 280
#define INCLUDE 281
#define DEFINE 282
#define IF 283
#define IN 284
#define OUT 285
#define DEFAULT 286
#define ELSE 287
#define CREATE 288
#define INSERT 289
#define MAIN 290
#define EXTRACT 291
#define DELETE 292
#define MINUS 293
#define UNION 294
#define INTERSECTION 295
#define NEG 296
#define PIZ 297
#define PDE 298
#define COMEN 299
#define ERR 300
#define CORI 301
#define CORD 302
#define PUNTOS 303
#define LLIZ 304
#define LLDE 305
#define PYC 306
#define COMA 307
#define ASI 308
#define MAYORIQ 309
#define MENORIQ 310
#define MAYORQ 311
#define MENORQ 312
#define DIST 313
#define II 314
#define SUM 315
#define RES 316
#define MUL 317
#define DIV 318
#define AND 319
#define OR 320
#define ADDC 321
#define MINC 322
#define COMPC 323
#define NEGEXP 324
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
   33,   33,   45,   45,   46,    8,   23,   23,   23,   23,
   34,   34,   34,   40,   49,   42,   43,   47,   48,   41,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    2,    2,    1,
    2,    1,    2,    1,    1,    3,    3,    1,    1,    1,
    1,    1,    1,    1,    0,    4,    3,    1,    1,    3,
    1,    0,    0,    8,    0,    0,    7,    4,    2,    1,
    1,    1,    1,    1,    1,    1,    2,    2,    8,    7,
    7,    6,    7,    6,    6,    5,    1,    1,    2,    1,
    3,    2,    3,    1,    2,    5,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    1,
    3,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    3,    5,    5,    7,    5,    3,    1,    7,
    5,    4,    3,    1,    0,    6,    4,    3,    3,    2,
    1,    1,    1,    3,    4,    4,    4,    3,    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
    0,   20,   22,   35,    0,    0,  115,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,   18,    0,   27,    0,    0,    0,    0,
   16,   10,   41,    0,   38,    0,    0,    0,    0,   26,
   36,    0,    0,    0,    0,   46,    0,   37,    0,   90,
   94,   95,   96,   97,   98,    0,    0,    0,    0,    0,
    0,    0,   99,  100,  101,  102,   49,   43,    0,    0,
    0,  116,    0,    0,    0,    0,    0,  130,   92,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   47,    0,    0,    0,    0,    0,    0,
    0,    0,  120,    0,   55,    0,   70,   50,   51,   52,
   53,   54,   56,    0,    0,  121,  122,  123,    0,    0,
    0,  124,   91,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   82,   83,   44,   48,    0,    0,    0,
    0,    0,    0,    0,  119,    0,   58,    0,    0,   57,
    0,  118,   69,  126,  127,    0,    0,    0,    0,    0,
    0,   74,    0,    0,    0,    0,  117,  128,  129,  112,
    0,    0,    0,    0,   75,    0,    0,    0,    0,    0,
  125,  111,    0,    0,  105,  104,   73,   76,    0,  107,
  109,    0,    0,    0,   62,    0,    0,    0,    0,    0,
   67,   68,    0,    0,    0,   61,    0,   60,  110,  106,
  108,    0,    0,    0,   59,    0,    0,    0,   66,    0,
    0,    0,   64,   65,    0,   63,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  125,   30,   24,   54,   45,   55,   56,  126,
   65,   57,   92,  112,   58,   90,  127,  128,  129,  130,
  131,  132,  133,  134,  216,  217,  223,  135,  183,   83,
   84,   85,   86,  212,  178,   48,  136,  137,  138,
};
short yysindex[] = {                                   1122,
    0,    0,    0,    0,    0,  418,    0,    0, -256, -238,
    0,  -46,    0, -255, -258, -254,  -46, -263,    0,    0,
 -285,    0,    0,    0, -205, -265,    0,    0,    0,    0,
    0, -258, -254,    0, -197, -254, -217,    0, -263,    0,
    0,    0,    0,    0, -184,    0,    0, -209, -254, -175,
    0,    0,    0, -185,    0, -214,  418, -192, -187,    0,
    0, -184, 1107, -144, -248,    0, -186,    0, -182,    0,
    0,    0,    0,    0,    0, -174, -169, -163, 1107, 1107,
 1107, 1192,    0,    0,    0,    0,    0,    0,  418, -186,
  567,    0, 1107, -112, -110, -136, 1123,    0,    0, 1107,
 1107, 1107, 1107, 1107, 1107, 1107, 1107, 1107, 1107, 1107,
 1107, -186,  -96,    0, -283,  -93, -109, -108, 1107, -107,
 -106, -104,    0,  597,    0, 1161,    0,    0,    0,    0,
    0,    0,    0, -120,  768,    0,    0,    0, 1192,  -99,
  -92,    0,    0,  620,  620,  620,  620,  620,  620, -227,
 -227, -179, -179,    0,    0,    0,    0, -199,  -66, 1107,
  156,  -70,  -64,  -49,    0,  798,    0,  -47,  -45,    0,
 -283,    0,    0,    0,    0,  -81, 1192, -228,  -72, 1146,
  828,    0,  -60,  -78, -211,  -48,    0,    0,    0,    0,
  -57, 1107,  -52,  684,    0,  858,  888,   -7,  -42,   -2,
    0,    0, 1192, -253,    0,    0,    0,    0,  -33,    0,
    0, -194, -250,  -34,    0, -251,  -35,  -32,  -22,   12,
    0,    0,  -18, 1074, -250,    0,  -19,    0,    0,    0,
    0,  942, 1074,  -15,    0,    2,  975, 1008,    0,    3,
    5, 1041,    0,    0,    6,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   13,   72,  129,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  186,  247,    0,    0,  304,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -111,    0,  361,    0,
    0,    0,    0,    0,    0, -161,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -141,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -146,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, 1096,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  627,    0,
    0,    0,    0,  217,  274,  331,  388,  445,  502,   42,
   99,  -76,  -17,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 1178,    0,    0,    0,    0,    0, -193,    0,    0,    0,
    0,    0,  738,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -190,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   18,    0,    0,    0,    0,    0,    0,
    0,    0,   19,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  305,    0,  314,   68,  238,  316,   63,  317,  306,
   35,  -14,   10,    0,   -4,    0,    0,  282,    0,  -63,
    0,    0,  -83,    0,    0,    0, -130,    0,    0,    0,
    0,    0,    0,    0,    0,  131,  120, -123, -137,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 1512
short yytable[] = {                                      82,
  166,   25,   41,   26,  173,  213,  114,  225,    6,   23,
  221,    6,    6,  158,    9,   97,   98,   99,   28,   29,
   44,   23,  222,   35,   93,   10,   23,   43,  156,  139,
  182,   47,  214,   27,  214,  173,  144,  145,  146,  147,
  148,  149,  150,  151,  152,  153,  154,  155,   43,   88,
   38,  215,   64,  226,   46,  161,  206,  196,   89,  208,
   69,   70,   50,  182,   35,  173,  182,   38,   71,  191,
   38,   72,   73,   74,   75,   53,   76,   77,  192,   40,
   42,   33,   36,   38,  113,   60,  199,   59,   78,  108,
  109,  110,  111,   63,  177,  200,  180,   79,  176,   49,
  233,   52,  173,  219,  114,   66,  173,  113,  237,   41,
   67,  173,  220,  114,  242,   87,  113,   91,   93,   93,
   61,   62,   94,   80,   81,   93,   93,   95,  203,   93,
   93,   93,   93,   96,   93,   93,   93,   93,   93,  110,
  111,   93,   93,   93,   39,   39,   93,  140,   42,  141,
   93,   42,   42,   42,   42,   93,   93,   42,   42,   40,
   40,  142,   93,  157,   93,   93,   26,   93,   93,   93,
   93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   80,   80,  170,   45,  159,  160,  162,
  163,   80,  164,  179,   80,   80,   80,   80,  174,   80,
   80,   80,   80,   80,  184,  175,   80,   80,   80,  185,
  186,   80,  188,    1,  189,   80,    2,    3,    4,    5,
   80,   80,    7,    8,  190,  193,  197,   80,  198,   80,
   80,    9,   80,   80,   80,   80,   80,   80,   80,   80,
   80,   80,   81,   81,   80,   80,   80,   80,  202,  201,
   81,  204,  209,   81,   81,   81,   81,  211,   81,   81,
   81,   81,   81,  210,  218,   81,   81,   81,  224,  228,
   81,  231,    7,  229,   81,    7,    7,    7,    7,   81,
   81,    7,    7,  230,  232,  235,   81,  238,   81,   81,
    7,   81,   81,   81,   81,   81,   81,   81,   81,   81,
   81,   78,   78,   81,   81,   81,   81,  239,  243,   78,
  244,  246,   78,   78,   78,   78,   31,   78,   78,   78,
   78,   78,   72,   71,   78,   78,   78,   32,  124,   78,
   34,    8,   39,   78,    8,    8,    8,    8,   78,   78,
    8,    8,   51,   68,  234,   78,  227,   78,   78,    8,
   78,   78,   78,   78,   78,   78,   78,   78,   79,   79,
    0,    0,   78,   78,   78,   78,   79,    0,    0,   79,
   79,   79,   79,    0,   79,   79,   79,   79,   79,    0,
    0,   79,   79,   79,    0,    0,   79,    0,    9,    0,
   79,    9,    9,    9,    9,   79,   79,    9,    9,    0,
    0,    0,   79,    0,   79,   79,    9,   79,   79,   79,
   79,   79,   79,   79,   79,  171,   70,    0,    0,   79,
   79,   79,   79,   71,    0,    0,   72,   73,   74,   75,
    0,   76,   77,  116,  117,  118,    0,    0,  119,  120,
  121,    0,    0,   78,    0,    6,    0,  122,    6,    6,
    6,    6,   79,    0,    6,    6,    0,    0,    0,  181,
    0,    0,    0,    6,  100,  101,  102,  103,  104,  105,
  106,  107,  108,  109,  110,  111,   84,   84,   80,   81,
    0,    0,    0,    0,   84,    0,    0,   84,   84,   84,
   84,    0,   84,   84,   84,   84,   84,    0,    0,   84,
   84,   84,    0,    0,   84,    0,    5,    0,   84,    5,
    5,    5,    5,   84,   84,    5,    5,    0,    0,    0,
   84,    0,   84,   84,    5,   84,   84,   84,   84,   84,
   84,    0,    0,   85,   85,    0,    0,   84,   84,   84,
   84,   85,    0,    0,   85,   85,   85,   85,    0,   85,
   85,   85,   85,   85,    0,    0,   85,   85,   85,    0,
    0,   85,    0,    4,    0,   85,    4,    4,    4,    4,
   85,   85,    4,    4,    0,    0,    0,   85,    0,   85,
   85,    4,   85,   85,   85,   85,   85,   85,    0,    0,
   86,   86,    0,    0,   85,   85,   85,   85,   86,    0,
    0,   86,   86,   86,   86,    0,   86,   86,   86,   86,
   86,    0,    0,   86,   86,   86,    0,    0,   86,    0,
    3,    0,   86,    3,    3,    3,    3,   86,   86,    3,
    3,    0,    0,    0,   86,    0,   86,   86,    3,   86,
   86,   86,   86,   86,   86,    0,    0,   87,   87,    0,
    0,   86,   86,   86,   86,   87,    0,    0,   87,   87,
   87,   87,    0,   87,   87,   87,   87,   87,    0,    0,
   87,   87,   87,    0,    0,   87,    0,    1,    0,   87,
    2,    3,    4,    5,   87,   87,    7,    8,    0,    0,
    0,   87,    0,   87,   87,    0,   87,   87,   87,   87,
   87,   87,    0,    0,   88,   88,    0,    0,   87,   87,
   87,   87,   88,    0,    0,   88,   88,   88,   88,    0,
   88,   88,   88,   88,   88,    0,    0,   88,   88,   88,
    0,    0,   88,    0,    0,    0,   88,    0,    0,    0,
    0,   88,   88,    0,    0,    0,    0,    0,   88,    0,
   88,   88,    0,   88,   88,   88,   88,   88,   88,    0,
    0,   89,   89,    0,    0,   88,   88,   88,   88,   89,
    0,    0,   89,   89,   89,   89,    0,   89,   89,   89,
   89,   89,    0,    0,   89,   89,   89,    0,    0,   89,
    0,    0,    0,   89,    0,    0,    0,    0,   89,   89,
    0,    0,    0,    0,    0,   89,    0,   89,   89,    0,
   89,   89,   89,   89,   89,   89,    0,    0,    0,    0,
    0,    0,   89,   89,   89,   89,  115,   70,    0,    2,
    3,    4,    5,    0,   71,    7,    8,   72,   73,   74,
   75,    0,   76,   77,  116,  117,  118,    0,    0,  119,
  120,  121,    0,    0,   78,    0,  115,   70,  122,    2,
    3,    4,    5,   79,   71,    7,    8,   72,   73,   74,
   75,  123,   76,   77,  116,  117,  118,    0,    0,  119,
  120,  121,    0,    0,   78,    0,  103,  103,  122,   80,
   81,    0,    0,   79,  103,    0,    0,  103,  103,  103,
  103,  165,  103,  103,  103,  103,  103,    0,    0,  103,
  103,  103,    0,    0,  103,    0,    0,    0,  103,   80,
   81,    0,    0,  103,  103,    0,    0,    0,    0,    0,
  103,    0,  103,  103,  106,  107,  108,  109,  110,  111,
    0,    0,    0,  171,   70,    0,    0,  103,  103,  103,
  103,   71,    0,    0,   72,   73,   74,   75,    0,   76,
   77,  116,  117,  118,    0,    0,  119,  120,  121,    0,
    0,   78,    0,    0,    0,  122,    0,    0,    0,    0,
   79,    0,    0,    0,    0,    0,    0,  181,    0,  205,
    0,    0,    0,    0,    0,    0,    0,   77,   77,   77,
    0,    0,    0,    0,    0,   77,   80,   81,   77,   77,
   77,   77,    0,   77,   77,   77,   77,   77,    0,    0,
   77,   77,   77,    0,    0,   77,    0,  171,   70,   77,
    0,    0,    0,    0,   77,   71,    0,    0,   72,   73,
   74,   75,   77,   76,   77,  116,  117,  118,    0,    0,
  119,  120,  121,    0,    0,   78,    0,  171,   70,  122,
   77,   77,    0,    0,   79,   71,    0,    0,   72,   73,
   74,   75,  172,   76,   77,  116,  117,  118,    0,    0,
  119,  120,  121,    0,    0,   78,    0,  171,   70,  122,
   80,   81,    0,    0,   79,   71,    0,    0,   72,   73,
   74,   75,  187,   76,   77,  116,  117,  118,    0,    0,
  119,  120,  121,    0,    0,   78,    0,  171,   70,  122,
   80,   81,    0,    0,   79,   71,    0,    0,   72,   73,
   74,   75,  195,   76,   77,  116,  117,  118,    0,    0,
  119,  120,  121,    0,    0,   78,    0,  171,   70,  122,
   80,   81,    0,    0,   79,   71,    0,    0,   72,   73,
   74,   75,  207,   76,   77,  116,  117,  118,    0,    0,
  119,  120,  121,    0,    0,   78,    0,    0,    0,  122,
   80,   81,    0,    0,   79,    0,    0,    0,    0,    0,
    0,  181,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  171,   70,  236,    0,    0,    0,    0,    0,   71,
   80,   81,   72,   73,   74,   75,    0,   76,   77,  116,
  117,  118,    0,    0,  119,  120,  121,    0,    0,   78,
    0,    0,    0,  122,  171,   70,  240,    0,   79,    0,
    0,    0,   71,    0,    0,   72,   73,   74,   75,    0,
   76,   77,  116,  117,  118,    0,    0,  119,  120,  121,
    0,    0,   78,    0,   80,   81,  122,  171,   70,  241,
    0,   79,    0,    0,    0,   71,    0,    0,   72,   73,
   74,   75,    0,   76,   77,  116,  117,  118,    0,    0,
  119,  120,  121,    0,    0,   78,    0,   80,   81,  122,
  171,   70,  245,    0,   79,    0,    0,    0,   71,    0,
    0,   72,   73,   74,   75,    0,   76,   77,  116,  117,
  118,    0,    0,  119,  120,  121,    0,    0,   78,    0,
   80,   81,  122,  171,   70,    0,    0,   79,    0,    0,
    0,   71,    0,    0,   72,   73,   74,   75,    0,   76,
   77,  116,  117,  118,    0,   32,  119,  120,  121,    0,
    0,   78,    0,   80,   81,  122,   69,   70,    0,    0,
   79,    0,    0,    0,   71,    0,    0,   72,   73,   74,
   75,    1,   76,   77,    2,    3,    4,    5,    6,    0,
    7,    8,    0,    0,   78,    0,   80,   81,    0,    9,
    0,   93,   10,   79,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,   93,   93,   93,   93,    0,    0,
  143,    0,    0,    0,    0,    0,    0,    0,    0,   80,
   81,  100,  101,  102,  103,  104,  105,  106,  107,  108,
  109,  110,  111,  194,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  100,  101,  102,  103,  104,  105,
  106,  107,  108,  109,  110,  111,  167,    0,    0,  100,
  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
  111,  168,  169,   93,    0,    0,   93,   93,   93,   93,
   93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
  100,  101,  102,  103,  104,  105,  106,  107,  108,  109,
  110,  111,
};
short yycheck[] = {                                      63,
  124,    6,   17,  260,  135,  259,   90,  259,  267,    0,
  261,  267,  267,  297,  278,   79,   80,   81,  257,  258,
  306,   12,  273,  282,  308,  281,   17,   18,  112,   93,
  161,  297,  286,  290,  286,  166,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,   39,  298,
   16,  305,   57,  305,  260,  119,  194,  181,  307,  197,
  260,  261,  260,  194,  282,  196,  197,   33,  268,  298,
   36,  271,  272,  273,  274,  260,  276,  277,  307,   17,
   18,   14,   15,   49,   89,  261,  298,  297,  288,  317,
  318,  319,  320,  308,  158,  307,  160,  297,  298,   32,
  224,   39,  233,  298,  298,  298,  237,  298,  232,  124,
  298,  242,  307,  307,  238,  260,  307,  304,  260,  261,
  306,  307,  297,  323,  324,  308,  268,  297,  192,  271,
  272,  273,  274,  297,  276,  277,  278,  279,  280,  319,
  320,  283,  284,  285,  306,  307,  288,  260,  260,  260,
  292,  263,  264,  265,  266,  297,  298,  269,  270,  306,
  307,  298,  304,  260,  306,  307,  260,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  319,  320,  321,
  322,  323,  324,  260,  261,  306,  298,  297,  297,  297,
  297,  268,  297,  260,  271,  272,  273,  274,  298,  276,
  277,  278,  279,  280,  275,  298,  283,  284,  285,  274,
  260,  288,  260,  260,  260,  292,  263,  264,  265,  266,
  297,  298,  269,  270,  306,  298,  287,  304,  307,  306,
  307,  278,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  260,  261,  321,  322,  323,  324,  306,  298,
  268,  304,  260,  271,  272,  273,  274,  260,  276,  277,
  278,  279,  280,  306,  298,  283,  284,  285,  303,  305,
  288,  260,  260,  306,  292,  263,  264,  265,  266,  297,
  298,  269,  270,  306,  303,  305,  304,  303,  306,  307,
  278,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  260,  261,  321,  322,  323,  324,  306,  306,  268,
  306,  306,  271,  272,  273,  274,   12,  276,  277,  278,
  279,  280,  305,  305,  283,  284,  285,   14,   91,  288,
   14,  260,   17,  292,  263,  264,  265,  266,  297,  298,
  269,  270,   37,   62,  225,  304,  216,  306,  307,  278,
  309,  310,  311,  312,  313,  314,  315,  316,  260,  261,
   -1,   -1,  321,  322,  323,  324,  268,   -1,   -1,  271,
  272,  273,  274,   -1,  276,  277,  278,  279,  280,   -1,
   -1,  283,  284,  285,   -1,   -1,  288,   -1,  260,   -1,
  292,  263,  264,  265,  266,  297,  298,  269,  270,   -1,
   -1,   -1,  304,   -1,  306,  307,  278,  309,  310,  311,
  312,  313,  314,  315,  316,  260,  261,   -1,   -1,  321,
  322,  323,  324,  268,   -1,   -1,  271,  272,  273,  274,
   -1,  276,  277,  278,  279,  280,   -1,   -1,  283,  284,
  285,   -1,   -1,  288,   -1,  260,   -1,  292,  263,  264,
  265,  266,  297,   -1,  269,  270,   -1,   -1,   -1,  304,
   -1,   -1,   -1,  278,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,  320,  260,  261,  323,  324,
   -1,   -1,   -1,   -1,  268,   -1,   -1,  271,  272,  273,
  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,  283,
  284,  285,   -1,   -1,  288,   -1,  260,   -1,  292,  263,
  264,  265,  266,  297,  298,  269,  270,   -1,   -1,   -1,
  304,   -1,  306,  307,  278,  309,  310,  311,  312,  313,
  314,   -1,   -1,  260,  261,   -1,   -1,  321,  322,  323,
  324,  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,   -1,  292,  263,  264,  265,  266,
  297,  298,  269,  270,   -1,   -1,   -1,  304,   -1,  306,
  307,  278,  309,  310,  311,  312,  313,  314,   -1,   -1,
  260,  261,   -1,   -1,  321,  322,  323,  324,  268,   -1,
   -1,  271,  272,  273,  274,   -1,  276,  277,  278,  279,
  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,
  260,   -1,  292,  263,  264,  265,  266,  297,  298,  269,
  270,   -1,   -1,   -1,  304,   -1,  306,  307,  278,  309,
  310,  311,  312,  313,  314,   -1,   -1,  260,  261,   -1,
   -1,  321,  322,  323,  324,  268,   -1,   -1,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,   -1,  292,
  263,  264,  265,  266,  297,  298,  269,  270,   -1,   -1,
   -1,  304,   -1,  306,  307,   -1,  309,  310,  311,  312,
  313,  314,   -1,   -1,  260,  261,   -1,   -1,  321,  322,
  323,  324,  268,   -1,   -1,  271,  272,  273,  274,   -1,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,   -1,   -1,  292,   -1,   -1,   -1,
   -1,  297,  298,   -1,   -1,   -1,   -1,   -1,  304,   -1,
  306,  307,   -1,  309,  310,  311,  312,  313,  314,   -1,
   -1,  260,  261,   -1,   -1,  321,  322,  323,  324,  268,
   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,  292,   -1,   -1,   -1,   -1,  297,  298,
   -1,   -1,   -1,   -1,   -1,  304,   -1,  306,  307,   -1,
  309,  310,  311,  312,  313,  314,   -1,   -1,   -1,   -1,
   -1,   -1,  321,  322,  323,  324,  260,  261,   -1,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  273,
  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,  283,
  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,  263,
  264,  265,  266,  297,  268,  269,  270,  271,  272,  273,
  274,  305,  276,  277,  278,  279,  280,   -1,   -1,  283,
  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,  323,
  324,   -1,   -1,  297,  268,   -1,   -1,  271,  272,  273,
  274,  305,  276,  277,  278,  279,  280,   -1,   -1,  283,
  284,  285,   -1,   -1,  288,   -1,   -1,   -1,  292,  323,
  324,   -1,   -1,  297,  298,   -1,   -1,   -1,   -1,   -1,
  304,   -1,  306,  307,  315,  316,  317,  318,  319,  320,
   -1,   -1,   -1,  260,  261,   -1,   -1,  321,  322,  323,
  324,  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,  292,   -1,   -1,   -1,   -1,
  297,   -1,   -1,   -1,   -1,   -1,   -1,  304,   -1,  306,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,  262,
   -1,   -1,   -1,   -1,   -1,  268,  323,  324,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,
   -1,   -1,   -1,   -1,  297,  268,   -1,   -1,  271,  272,
  273,  274,  305,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,
  323,  324,   -1,   -1,  297,  268,   -1,   -1,  271,  272,
  273,  274,  305,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,
  323,  324,   -1,   -1,  297,  268,   -1,   -1,  271,  272,
  273,  274,  305,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,
  323,  324,   -1,   -1,  297,  268,   -1,   -1,  271,  272,
  273,  274,  305,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,
  323,  324,   -1,   -1,  297,  268,   -1,   -1,  271,  272,
  273,  274,  305,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,  292,
  323,  324,   -1,   -1,  297,   -1,   -1,   -1,   -1,   -1,
   -1,  304,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  260,  261,  262,   -1,   -1,   -1,   -1,   -1,  268,
  323,  324,  271,  272,  273,  274,   -1,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,  292,  260,  261,  262,   -1,  297,   -1,
   -1,   -1,  268,   -1,   -1,  271,  272,  273,  274,   -1,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  323,  324,  292,  260,  261,  262,
   -1,  297,   -1,   -1,   -1,  268,   -1,   -1,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  323,  324,  292,
  260,  261,  262,   -1,  297,   -1,   -1,   -1,  268,   -1,
   -1,  271,  272,  273,  274,   -1,  276,  277,  278,  279,
  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,
  323,  324,  292,  260,  261,   -1,   -1,  297,   -1,   -1,
   -1,  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  280,   -1,  260,  283,  284,  285,   -1,
   -1,  288,   -1,  323,  324,  292,  260,  261,   -1,   -1,
  297,   -1,   -1,   -1,  268,   -1,   -1,  271,  272,  273,
  274,  260,  276,  277,  263,  264,  265,  266,  267,   -1,
  269,  270,   -1,   -1,  288,   -1,  323,  324,   -1,  278,
   -1,  306,  281,  297,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,  320,  321,  322,   -1,   -1,
  298,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  323,
  324,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  298,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,  320,  306,   -1,   -1,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  319,
  320,  321,  322,  306,   -1,   -1,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  320,  321,  322,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  320,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 324
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
"FALSE","CARACTER","TEXTO_OUT","OP_INOUT","EMPTY","LENGTH","VOID","SWITCH",
"WHILE","INCLUDE","DEFINE","IF","IN","OUT","DEFAULT","ELSE","CREATE","INSERT",
"MAIN","EXTRACT","DELETE","MINUS","UNION","INTERSECTION","NEG","PIZ","PDE",
"COMEN","ERR","CORI","CORD","PUNTOS","LLIZ","LLDE","PYC","COMA","ASI","MAYORIQ",
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
"tipos_s : tipos PYC",
"vars_s : vars_s vars",
"vars_s : vars",
"procs_s : procs_s proc",
"procs_s : proc",
"incs : INCLUDE cabeceras",
"cabeceras : CAB1",
"cabeceras : CAB2",
"defs : DEFINE ID NUM",
"tipos : TYPEDEF tipo ID",
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
"expresion : TEXTO_OUT",
"expresion : crea_conjunto",
"expresion : llamada_complementario",
"expresion : llamada_sivacio",
"expresion : llamada_length",
"expresion : ID ASI expresion",
"while : WHILE PIZ expresion PDE bloque",
"while : WHILE PIZ expresion PDE PYC",
"out : OUT PIZ TEXTO_OUT COMA ids PDE PYC",
"out : OUT PIZ TEXTO_OUT PDE PYC",
"ids : ids COMA ID",
"ids : ID",
"in : IN PIZ OP_INOUT COMA ID PDE PYC",
"llamada_proc : ID PIZ params_llamada PDE PYC",
"llamada_proc : ID PIZ PDE PYC",
"params_llamada : params_llamada COMA expresion",
"params_llamada : expresion",
"$$6 :",
"main : VOID MAIN $$6 PIZ PDE cuerpo",
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
"inserta_conjunto : expresion ADDC ID",
"saca_conjunto : expresion MINC ID",
"llamada_complementario : COMPC expresion",
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
#line 451 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 724 "y_tab.c"
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
#line 62 "lexico.y"
{createTS();}
break;
case 27:
#line 93 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,yyvsp[-1].tipo,defTipo,0)); imprimirTS();}
break;
case 28:
#line 98 "lexico.y"
{yyval.tipo = entero;}
break;
case 29:
#line 99 "lexico.y"
{yyval.tipo = real;}
break;
case 30:
#line 100 "lexico.y"
{yyval.tipo = caracter;}
break;
case 31:
#line 101 "lexico.y"
{yyval.tipo = conjunto;}
break;
case 32:
#line 102 "lexico.y"
{
		if((tipoAux = existeEntradaDefTipo(yyvsp[0].cadena)) != 0){
		 yyval.tipo = tipoAux;
		}else{
			printf("\nError linea %d: Tipo propio no definido",linea_actual);
		}
	 }
break;
case 33:
#line 109 "lexico.y"
{yyval.tipo = booleano;}
break;
case 34:
#line 110 "lexico.y"
{yyval.tipo = cadena;}
break;
case 35:
#line 113 "lexico.y"
{tipoAux = yyvsp[0].tipo;}
break;
case 41:
#line 123 "lexico.y"
{ if(existeEntradaLocal(yyvsp[0].cadena) == 0){
					pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,tipoAux,var,0)); 
					imprimirTS();
			    }else{
					printf("\nError linea: %d: Identificador declarado anteriormente\n",linea_actual);
				}
			  }
break;
case 42:
#line 134 "lexico.y"
{if(existeEntrada(yyvsp[-1].cadena) != 0){
						printf("\nError linea: %d: Funcion ya declarada");
					  }else{
						pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,sinTipo,proc,0));
						imprimirTS();
					  }
				   }
break;
case 43:
#line 140 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); imprimirTS();}
break;
case 45:
#line 141 "lexico.y"
{if(existeEntrada(yyvsp[-1].cadena) != 0){
					printf("\nError linea: %d: Funcion ya declarada");
				  }else{
					pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,sinTipo,proc,0));
					imprimirTS();
				  }
			   }
break;
case 46:
#line 147 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); imprimirTS();}
break;
case 48:
#line 150 "lexico.y"
{if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)) printf("\nError linea: %d: Parametro formal existente\n",linea_actual); else imprimirTS();}
break;
case 49:
#line 151 "lexico.y"
{if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)) printf("\nError linea: %d: Parametro formal existente\n",linea_actual); else imprimirTS();}
break;
case 59:
#line 164 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-5].cadena)) != 0 && tipoAux == yyvsp[-2].tipo){
																yyval.tipo = tipoAux;
																	if(tipoAux != entero && tipoAux != caracter) 
																		printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
															   }else{
																if((tipoAux = existeEntrada(yyvsp[-5].cadena)) != 0 && tipoAux == yyvsp[-2].tipo){
																 yyval.tipo = tipoAux;
																	 if(tipoAux != entero && tipoAux != caracter) 
																		printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
																}else{
																	if(tipoAux == yyvsp[-2].tipo)
																		printf("\nError linea: %d. Variable no declarada\n",linea_actual);
																	else
																		printf("\nError linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
																}
															   }
															  }
break;
case 60:
#line 181 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-4].cadena)) != 0){
												yyval.tipo = tipoAux;
													if(tipoAux != entero && tipoAux != caracter) 
														printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
											   }else{
												if((tipoAux = existeEntrada(yyvsp[-4].cadena)) != 0){
												 yyval.tipo = tipoAux;
													 if(tipoAux != entero && tipoAux != caracter) 
														printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
												}else{
												 printf("\nError linea: %d. Variable no declarada\n",linea_actual);
												}
											   }
											  }
break;
case 61:
#line 195 "lexico.y"
{ 	if((tipoAux = existeEntradaLocal(yyvsp[-4].cadena)) != 0 && tipoAux == yyvsp[-1].tipo){
											yyval.tipo = tipoAux;
												if(tipoAux != entero && tipoAux != caracter) 
													printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
										   }else{
											if((tipoAux = existeEntrada(yyvsp[-4].cadena)) != 0 && tipoAux == yyvsp[-1].tipo){
											 yyval.tipo = tipoAux;
												 if(tipoAux != entero && tipoAux != caracter) 
													printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
											}else{
												if(tipoAux == yyvsp[-1].tipo)
													printf("\nError linea: %d. Variable no declarada\n",linea_actual);
												else
													printf("\nError linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
											}
										   }
										  }
break;
case 62:
#line 212 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-3].cadena)) != 0){
									yyval.tipo = tipoAux;
									if(tipoAux != entero && tipoAux != caracter) 
										printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
										
								   }else{
									if((tipoAux = existeEntrada(yyvsp[-3].cadena)) != 0){
									 yyval.tipo = tipoAux;
									 if(tipoAux != entero && tipoAux != caracter) 
										printf("Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
									}else{
									 printf("\nError linea: %d. Variable no declarada\n",linea_actual);
									}
								   }
								  }
break;
case 63:
#line 229 "lexico.y"
{if(yyvsp[-6].tipo != yyvsp[-4].tipo) 
																printf("Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
															else
																yyval.tipo = yyvsp[-4].tipo;
															}
break;
case 64:
#line 234 "lexico.y"
{yyval.tipo = yyvsp[-4].tipo;}
break;
case 65:
#line 235 "lexico.y"
{if(yyvsp[-5].tipo != yyvsp[-3].tipo)
											printf("Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
										else
											yyval.tipo = yyvsp[-3].tipo;
										}
break;
case 66:
#line 240 "lexico.y"
{yyval.tipo = yyvsp[-3].tipo;}
break;
case 67:
#line 243 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 68:
#line 244 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 76:
#line 257 "lexico.y"
{ if(yyvsp[-3].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 77:
#line 258 "lexico.y"
{ if(yyvsp[-1].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 78:
#line 262 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
									  }
									}
break;
case 79:
#line 268 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 80:
#line 274 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 81:
#line 280 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 82:
#line 286 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 83:
#line 292 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
							   }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							   }
							}
break;
case 84:
#line 298 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 85:
#line 304 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 86:
#line 310 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 87:
#line 316 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 88:
#line 322 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 89:
#line 328 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 90:
#line 334 "lexico.y"
{printf("\nENTERO: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 91:
#line 335 "lexico.y"
{yyval.tipo = yyvsp[-1].tipo;}
break;
case 92:
#line 336 "lexico.y"
{ if(yyvsp[0].tipo == booleano){
							yyval.tipo = booleano;
					   }else{
							printf("\nError linea: %d. Expresión con tipos distintos\n",linea_actual);
					   }
					}
break;
case 93:
#line 342 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[0].cadena)) != 0){
		yyval.tipo = tipoAux;
		printf("\nID: %s con TIPO: %d\n",yyvsp[0].cadena, yyval.tipo);
	   }else{
		if((tipoAux = existeEntrada(yyvsp[0].cadena)) != 0){
		 yyval.tipo = tipoAux;
		 printf("\nID: %s con TIPO: %d\n",yyvsp[0].cadena, yyval.tipo);
		}else{
		 printf("\nError linea: %d. Variable no declarada\n",linea_actual);
		}
	   }
     }
break;
case 94:
#line 354 "lexico.y"
{printf("\nREAL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 95:
#line 355 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 96:
#line 356 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 97:
#line 357 "lexico.y"
{printf("\nCHAR: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 103:
#line 363 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-2].cadena)) != 0){
						yyval.tipo = tipoAux;
						printf("\nID: %s con TIPO: %d\n",yyvsp[-2].cadena, yyval.tipo);
					   }else{
						if((tipoAux = existeEntrada(yyvsp[-2].cadena)) != 0){
						 yyval.tipo = tipoAux;
						 printf("\nID: %s con TIPO: %d\n",yyvsp[-2].cadena, yyval.tipo);
						}else{
						 printf("\nError linea: %d. Variable no declarada\n",linea_actual);
						}
					   }
					   
					   if(tipoAux != yyvsp[0].tipo){
						printf("\nError linea: %d. Asignacion de tipo incorrecta",linea_actual);
					   }
					 }
break;
case 104:
#line 383 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 105:
#line 384 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 115:
#line 405 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); imprimirTS();}
break;
#line 1258 "y_tab.c"
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
