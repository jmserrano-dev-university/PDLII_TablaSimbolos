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
   19,   23,   13,   24,   13,   21,   21,   25,   25,   25,
   25,   25,   25,   25,   25,   25,   26,   26,   26,   26,
   33,   33,   33,   33,   35,   35,   36,   36,   34,   34,
   37,   37,   37,   27,   27,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   28,   28,   30,   30,   42,   42,   29,   31,   31,
   43,   43,   44,    8,   22,   22,   22,   22,   32,   32,
   32,   38,   47,   40,   41,   45,   46,   39,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    2,    2,    1,
    2,    1,    2,    1,    1,    3,    3,    1,    1,    1,
    1,    1,    1,    1,    0,    4,    3,    1,    1,    3,
    1,    0,    7,    0,    6,    4,    2,    1,    1,    1,
    1,    1,    1,    1,    2,    2,    8,    7,    7,    6,
    7,    6,    6,    5,    1,    1,    2,    1,    3,    2,
    3,    1,    2,    5,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    1,    3,    2,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    5,    5,    7,    5,    3,    1,    7,    5,    4,
    3,    1,    0,    6,    4,    3,    3,    2,    1,    1,
    1,    3,    4,    4,    4,    3,    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
    0,   20,   22,   35,    0,    0,  113,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,   18,    0,   27,    0,    0,    0,    0,
   16,   10,   41,    0,   38,    0,   44,    0,    0,    0,
   26,   36,    0,    0,    0,   47,   42,    0,    0,   37,
    0,   88,   92,   93,   94,   95,   96,    0,    0,    0,
    0,    0,    0,    0,   97,   98,   99,  100,    0,   45,
    0,    0,  114,    0,    0,    0,    0,    0,  128,   90,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  118,    0,   53,    0,   68,   48,   49,   50,   51,   52,
   54,    0,    0,  119,  120,  121,   43,   46,    0,    0,
    0,  122,   89,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   80,   81,    0,    0,    0,    0,    0,
    0,    0,  117,    0,   56,    0,    0,   55,    0,  116,
   67,  124,  125,    0,    0,    0,    0,    0,    0,   72,
    0,    0,    0,    0,  115,  126,  127,  110,    0,    0,
    0,    0,   73,    0,    0,    0,    0,    0,  123,  109,
    0,    0,  103,  102,   71,   74,    0,  105,  107,    0,
    0,    0,   60,    0,    0,    0,    0,    0,   65,   66,
    0,    0,    0,   59,    0,   58,  108,  104,  106,    0,
    0,    0,   57,    0,    0,    0,   64,    0,    0,    0,
   62,   63,    0,   61,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  123,   30,   24,   54,   45,   55,   56,  124,
   59,   90,   91,   65,  125,  126,  127,  128,  129,  130,
  131,  132,  214,  215,  221,  133,  181,   85,   86,   87,
   88,  210,  176,   48,  134,  135,  136,
};
short yysindex[] = {                                   1140,
    0,    0,    0,    0,    0,  -60,    0,    0, -258, -147,
    0, -125,    0, -260, -247, -251, -125, -269,    0,    0,
 -282,    0,    0,    0, -231, -234,    0,    0,    0,    0,
    0, -247, -251,    0, -195, -251, -197,    0, -269,    0,
    0,    0,    0,    0, -162,    0, -209, -193, -251, -141,
    0,    0,    0,  -95,    0, -181,    0, -124, -212, -166,
    0,    0, -162, 1125, -158,    0,    0,  -60, -158,    0,
 -160,    0,    0,    0,    0,    0,    0, -117, -112, -105,
 1125, 1125, 1125, 1187,    0,    0,    0,    0,  553,    0,
 -158, -110,    0, 1125,  -61,  -59,  -85, 1114,    0,    0,
 1125, 1125, 1125, 1125, 1125, 1125, 1125, 1125, 1125, 1125,
 1125, 1125, -283,  -45,  -53,  -42, 1125,  -41,  -39,  -37,
    0,  583,    0, 1156,    0,    0,    0,    0,    0,    0,
    0,  -36,  754,    0,    0,    0,    0,    0, 1187,  -27,
  -26,    0,    0, -143, -143, -143, -143, -143, -143,  150,
  150,  -84,  -84,    0,    0, 1093,   14, 1125,  142,   19,
   21,   37,    0,  784,    0,   38,   43,    0, -283,    0,
    0,    0,    0,    3, 1187, -211,   12, 1141,  814,    0,
   27,    8, -210,   31,    0,    0,    0,    0,   11, 1125,
   15,  670,    0,  844,  874,   70,   25,   73,    0,    0,
 1187, -253,    0,    0,    0,    0,   49,    0,    0, -208,
 -246,   45,    0, -236,   50,   48,   54,  106,    0,    0,
   64, 1060, -246,    0,   66,    0,    0,    0,    0,  928,
 1060,   69,    0,   68,  961,  994,    0,   80,   81, 1027,
    0,    0,   82,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   -1,   58,  115,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  172,  233,    0,    0,  290,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  347,    0,
    0,    0,    0,    0,    0,  -68,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -155,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -56,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -238,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  613,    0,
    0,    0,    0,  203,  260,  317,  374,  431,  488,   28,
   85,  -90,  -31,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, 1173,    0,
    0,    0,    0,    0, -207,    0,    0,    0,    0,    0,
  724,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -205,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   71,    0,    0,    0,    0,    0,    0,    0,    0,
   99,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  378,    0,  391,   -4,  322,  395,   -5,  403,  386,
   98,  -14,  179,    0,    2,    0,    0,  361,    0,  -64,
    0,  -65,    0,    0, -128,    0,    0,    0,    0,    0,
    0,    0,    0,  214,  206, -121, -133,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 1507
short yytable[] = {                                      84,
  164,   26,   41,   93,  171,  211,    6,   25,    9,   33,
   36,   40,   42,  156,  219,    6,   98,   99,  100,    6,
   10,   32,  223,   44,   94,  137,  220,   49,   46,  139,
  180,   27,  212,   52,   35,  171,  144,  145,  146,  147,
  148,  149,  150,  151,  152,  153,  154,  155,   58,  212,
    1,  213,  159,    2,    3,    4,    5,  194,  204,    7,
    8,  206,   47,  180,   50,  171,  180,   91,  224,   92,
   91,   91,   91,   91,   91,   91,   91,   91,   91,   91,
   91,   91,   91,   91,   35,   67,  189,  197,   57,  217,
  112,  175,  111,  178,   68,  190,  198,   53,  218,  112,
  231,  111,  171,   60,   91,   91,  171,   41,  235,   28,
   29,  171,   91,   38,  240,   91,   91,   91,   91,   61,
   91,   91,   91,   91,   91,  201,   64,   91,   91,   91,
   38,   69,   91,   38,    1,   66,   91,    2,    3,    4,
    5,   91,   91,    7,    8,   89,   38,   94,   91,  138,
   91,   91,    9,   91,   91,   91,   91,   91,   91,   91,
   91,   91,   91,   91,   91,   91,   91,   91,   91,   78,
   78,  107,  108,  109,  110,  111,  112,   78,   23,   95,
   78,   78,   78,   78,   96,   78,   78,   78,   78,   78,
   23,   97,   78,   78,   78,   23,   43,   78,  140,    1,
  141,   78,    2,    3,    4,    5,   78,   78,    7,    8,
   62,   63,  142,   78,   26,   78,   78,   43,   78,   78,
   78,   78,   78,   78,   78,   78,   78,   78,   79,   79,
   78,   78,   78,   78,  111,  112,   79,   39,   39,   79,
   79,   79,   79,  157,   79,   79,   79,   79,   79,   40,
   40,   79,   79,   79,  158,  160,   79,  161,    7,  162,
   79,    7,    7,    7,    7,   79,   79,    7,    7,  168,
  172,  173,   79,  177,   79,   79,    7,   79,   79,   79,
   79,   79,   79,   79,   79,   79,   79,   76,   76,   79,
   79,   79,   79,  182,  183,   76,  184,  186,   76,   76,
   76,   76,  187,   76,   76,   76,   76,   76,  188,  191,
   76,   76,   76,  195,  196,   76,  200,    8,  202,   76,
    8,    8,    8,    8,   76,   76,    8,    8,  199,  207,
  208,   76,  209,   76,   76,    8,   76,   76,   76,   76,
   76,   76,   76,   76,   77,   77,  216,  222,   76,   76,
   76,   76,   77,  227,  226,   77,   77,   77,   77,  228,
   77,   77,   77,   77,   77,  229,  230,   77,   77,   77,
  233,  236,   77,  237,    9,   70,   77,    9,    9,    9,
    9,   77,   77,    9,    9,  241,  242,  244,   77,   31,
   77,   77,    9,   77,   77,   77,   77,   77,   77,   77,
   77,  169,   72,   69,   32,   77,   77,   77,   77,   73,
  122,   39,   74,   75,   76,   77,   34,   78,   79,  114,
  115,  116,   51,   70,  117,  118,  119,  225,  232,   80,
    0,    6,    0,  120,    6,    6,    6,    6,   81,    0,
    6,    6,    0,    0,    0,  179,    0,    0,    0,    6,
  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
  111,  112,   82,   82,   82,   83,  109,  110,  111,  112,
   82,    0,    0,   82,   82,   82,   82,    0,   82,   82,
   82,   82,   82,    0,    0,   82,   82,   82,    0,    0,
   82,    0,    5,    0,   82,    5,    5,    5,    5,   82,
   82,    5,    5,    0,    0,    0,   82,    0,   82,   82,
    5,   82,   82,   82,   82,   82,   82,    0,    0,   83,
   83,    0,    0,   82,   82,   82,   82,   83,    0,    0,
   83,   83,   83,   83,    0,   83,   83,   83,   83,   83,
    0,    0,   83,   83,   83,    0,    0,   83,    0,    4,
    0,   83,    4,    4,    4,    4,   83,   83,    4,    4,
    0,    0,    0,   83,    0,   83,   83,    4,   83,   83,
   83,   83,   83,   83,    0,    0,   84,   84,    0,    0,
   83,   83,   83,   83,   84,    0,    0,   84,   84,   84,
   84,    0,   84,   84,   84,   84,   84,    0,    0,   84,
   84,   84,    0,    0,   84,    0,    3,    0,   84,    3,
    3,    3,    3,   84,   84,    3,    3,    0,    0,    0,
   84,    0,   84,   84,    3,   84,   84,   84,   84,   84,
   84,    0,    0,   85,   85,    0,    0,   84,   84,   84,
   84,   85,    0,    0,   85,   85,   85,   85,    0,   85,
   85,   85,   85,   85,    0,    0,   85,   85,   85,    0,
    0,   85,    0,    0,    0,   85,    0,    0,    0,    0,
   85,   85,    0,    0,    0,    0,    0,   85,    0,   85,
   85,    0,   85,   85,   85,   85,   85,   85,    0,    0,
   86,   86,    0,    0,   85,   85,   85,   85,   86,    0,
    0,   86,   86,   86,   86,    0,   86,   86,   86,   86,
   86,    0,    0,   86,   86,   86,    0,    0,   86,    0,
    0,    0,   86,    0,    0,    0,    0,   86,   86,    0,
    0,    0,    0,    0,   86,    0,   86,   86,    0,   86,
   86,   86,   86,   86,   86,    0,    0,   87,   87,    0,
    0,   86,   86,   86,   86,   87,    0,    0,   87,   87,
   87,   87,    0,   87,   87,   87,   87,   87,    0,    0,
   87,   87,   87,    0,    0,   87,    0,    0,    0,   87,
    0,    0,    0,    0,   87,   87,    0,    0,    0,    0,
    0,   87,    0,   87,   87,    0,   87,   87,   87,   87,
   87,   87,    0,    0,    0,    0,    0,    0,   87,   87,
   87,   87,  113,   72,    0,    2,    3,    4,    5,    0,
   73,    7,    8,   74,   75,   76,   77,    0,   78,   79,
  114,  115,  116,    0,    0,  117,  118,  119,    0,    0,
   80,    0,  113,   72,  120,    2,    3,    4,    5,   81,
   73,    7,    8,   74,   75,   76,   77,  121,   78,   79,
  114,  115,  116,    0,    0,  117,  118,  119,    0,    0,
   80,    0,  101,  101,  120,   82,   83,    0,    0,   81,
  101,    0,    0,  101,  101,  101,  101,  163,  101,  101,
  101,  101,  101,    0,    0,  101,  101,  101,    0,    0,
  101,    0,    0,    0,  101,   82,   83,    0,    0,  101,
  101,    0,    0,    0,    0,    0,  101,    0,  101,  101,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  169,
   72,    0,    0,  101,  101,  101,  101,   73,    0,    0,
   74,   75,   76,   77,    0,   78,   79,  114,  115,  116,
    0,    0,  117,  118,  119,    0,    0,   80,    0,    0,
    0,  120,    0,    0,    0,    0,   81,    0,    0,    0,
    0,    0,    0,  179,    0,  203,    0,    0,    0,    0,
    0,    0,    0,   75,   75,   75,    0,    0,    0,    0,
    0,   75,   82,   83,   75,   75,   75,   75,    0,   75,
   75,   75,   75,   75,    0,    0,   75,   75,   75,    0,
    0,   75,    0,  169,   72,   75,    0,    0,    0,    0,
   75,   73,    0,    0,   74,   75,   76,   77,   75,   78,
   79,  114,  115,  116,    0,    0,  117,  118,  119,    0,
    0,   80,    0,  169,   72,  120,   75,   75,    0,    0,
   81,   73,    0,    0,   74,   75,   76,   77,  170,   78,
   79,  114,  115,  116,    0,    0,  117,  118,  119,    0,
    0,   80,    0,  169,   72,  120,   82,   83,    0,    0,
   81,   73,    0,    0,   74,   75,   76,   77,  185,   78,
   79,  114,  115,  116,    0,    0,  117,  118,  119,    0,
    0,   80,    0,  169,   72,  120,   82,   83,    0,    0,
   81,   73,    0,    0,   74,   75,   76,   77,  193,   78,
   79,  114,  115,  116,    0,    0,  117,  118,  119,    0,
    0,   80,    0,  169,   72,  120,   82,   83,    0,    0,
   81,   73,    0,    0,   74,   75,   76,   77,  205,   78,
   79,  114,  115,  116,    0,    0,  117,  118,  119,    0,
    0,   80,    0,    0,    0,  120,   82,   83,    0,    0,
   81,    0,    0,    0,    0,    0,    0,  179,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  169,   72,  234,
    0,    0,    0,    0,    0,   73,   82,   83,   74,   75,
   76,   77,    0,   78,   79,  114,  115,  116,    0,    0,
  117,  118,  119,    0,    0,   80,    0,    0,    0,  120,
  169,   72,  238,    0,   81,    0,    0,    0,   73,    0,
    0,   74,   75,   76,   77,    0,   78,   79,  114,  115,
  116,    0,    0,  117,  118,  119,    0,    0,   80,    0,
   82,   83,  120,  169,   72,  239,    0,   81,    0,    0,
    0,   73,    0,    0,   74,   75,   76,   77,    0,   78,
   79,  114,  115,  116,    0,    0,  117,  118,  119,    0,
    0,   80,    0,   82,   83,  120,  169,   72,  243,    0,
   81,    0,    0,    0,   73,    0,    0,   74,   75,   76,
   77,    0,   78,   79,  114,  115,  116,    0,    0,  117,
  118,  119,    0,    0,   80,    0,   82,   83,  120,  169,
   72,    0,    0,   81,    0,    0,    0,   73,    0,    0,
   74,   75,   76,   77,    0,   78,   79,  114,  115,  116,
    0,    0,  117,  118,  119,    0,    0,   80,    0,   82,
   83,  120,   71,   72,    0,    0,   81,    0,    0,    0,
   73,    0,    0,   74,   75,   76,   77,    0,   78,   79,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   80,    0,   82,   83,   71,   72,    0,    0,    0,   81,
  174,    0,   73,    0,    0,   74,   75,   76,   77,    1,
   78,   79,    2,    3,    4,    5,    6,    0,    7,    8,
    0,  143,   80,    0,    0,   82,   83,    9,    0,    0,
   10,   81,  101,  102,  103,  104,  105,  106,  107,  108,
  109,  110,  111,  112,    0,    0,    0,    0,  192,    0,
    0,    0,    0,    0,    0,    0,    0,   82,   83,  101,
  102,  103,  104,  105,  106,  107,  108,  109,  110,  111,
  112,  165,    0,    0,  101,  102,  103,  104,  105,  106,
  107,  108,  109,  110,  111,  112,  166,  167,   91,    0,
    0,   91,   91,   91,   91,   91,   91,   91,   91,   91,
   91,   91,   91,   91,   91,  101,  102,  103,  104,  105,
  106,  107,  108,  109,  110,  111,  112,
};
short yycheck[] = {                                      64,
  122,  260,   17,   69,  133,  259,  267,    6,  278,   14,
   15,   17,   18,  297,  261,  267,   81,   82,   83,  267,
  281,  260,  259,  306,  308,   91,  273,   32,  260,   94,
  159,  290,  286,   39,  282,  164,  101,  102,  103,  104,
  105,  106,  107,  108,  109,  110,  111,  112,   47,  286,
  260,  305,  117,  263,  264,  265,  266,  179,  192,  269,
  270,  195,  297,  192,  260,  194,  195,  306,  305,   68,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  320,  321,  322,  282,  298,  298,  298,  298,  298,
  298,  156,  298,  158,  307,  307,  307,  260,  307,  307,
  222,  307,  231,  297,  260,  261,  235,  122,  230,  257,
  258,  240,  268,   16,  236,  271,  272,  273,  274,  261,
  276,  277,  278,  279,  280,  190,  308,  283,  284,  285,
   33,  298,  288,   36,  260,  260,  292,  263,  264,  265,
  266,  297,  298,  269,  270,  304,   49,  308,  304,  260,
  306,  307,  278,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  320,  321,  322,  323,  324,  260,
  261,  315,  316,  317,  318,  319,  320,  268,    0,  297,
  271,  272,  273,  274,  297,  276,  277,  278,  279,  280,
   12,  297,  283,  284,  285,   17,   18,  288,  260,  260,
  260,  292,  263,  264,  265,  266,  297,  298,  269,  270,
  306,  307,  298,  304,  260,  306,  307,   39,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  318,  260,  261,
  321,  322,  323,  324,  319,  320,  268,  306,  307,  271,
  272,  273,  274,  297,  276,  277,  278,  279,  280,  306,
  307,  283,  284,  285,  297,  297,  288,  297,  260,  297,
  292,  263,  264,  265,  266,  297,  298,  269,  270,  306,
  298,  298,  304,  260,  306,  307,  278,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  260,  261,  321,
  322,  323,  324,  275,  274,  268,  260,  260,  271,  272,
  273,  274,  260,  276,  277,  278,  279,  280,  306,  298,
  283,  284,  285,  287,  307,  288,  306,  260,  304,  292,
  263,  264,  265,  266,  297,  298,  269,  270,  298,  260,
  306,  304,  260,  306,  307,  278,  309,  310,  311,  312,
  313,  314,  315,  316,  260,  261,  298,  303,  321,  322,
  323,  324,  268,  306,  305,  271,  272,  273,  274,  306,
  276,  277,  278,  279,  280,  260,  303,  283,  284,  285,
  305,  303,  288,  306,  260,  305,  292,  263,  264,  265,
  266,  297,  298,  269,  270,  306,  306,  306,  304,   12,
  306,  307,  278,  309,  310,  311,  312,  313,  314,  315,
  316,  260,  261,  305,   14,  321,  322,  323,  324,  268,
   89,   17,  271,  272,  273,  274,   14,  276,  277,  278,
  279,  280,   37,   63,  283,  284,  285,  214,  223,  288,
   -1,  260,   -1,  292,  263,  264,  265,  266,  297,   -1,
  269,  270,   -1,   -1,   -1,  304,   -1,   -1,   -1,  278,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  320,  260,  261,  323,  324,  317,  318,  319,  320,
  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,
  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,
  288,   -1,  260,   -1,  292,  263,  264,  265,  266,  297,
  298,  269,  270,   -1,   -1,   -1,  304,   -1,  306,  307,
  278,  309,  310,  311,  312,  313,  314,   -1,   -1,  260,
  261,   -1,   -1,  321,  322,  323,  324,  268,   -1,   -1,
  271,  272,  273,  274,   -1,  276,  277,  278,  279,  280,
   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,  260,
   -1,  292,  263,  264,  265,  266,  297,  298,  269,  270,
   -1,   -1,   -1,  304,   -1,  306,  307,  278,  309,  310,
  311,  312,  313,  314,   -1,   -1,  260,  261,   -1,   -1,
  321,  322,  323,  324,  268,   -1,   -1,  271,  272,  273,
  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,  283,
  284,  285,   -1,   -1,  288,   -1,  260,   -1,  292,  263,
  264,  265,  266,  297,  298,  269,  270,   -1,   -1,   -1,
  304,   -1,  306,  307,  278,  309,  310,  311,  312,  313,
  314,   -1,   -1,  260,  261,   -1,   -1,  321,  322,  323,
  324,  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,  292,   -1,   -1,   -1,   -1,
  297,  298,   -1,   -1,   -1,   -1,   -1,  304,   -1,  306,
  307,   -1,  309,  310,  311,  312,  313,  314,   -1,   -1,
  260,  261,   -1,   -1,  321,  322,  323,  324,  268,   -1,
   -1,  271,  272,  273,  274,   -1,  276,  277,  278,  279,
  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,
   -1,   -1,  292,   -1,   -1,   -1,   -1,  297,  298,   -1,
   -1,   -1,   -1,   -1,  304,   -1,  306,  307,   -1,  309,
  310,  311,  312,  313,  314,   -1,   -1,  260,  261,   -1,
   -1,  321,  322,  323,  324,  268,   -1,   -1,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,  292,
   -1,   -1,   -1,   -1,  297,  298,   -1,   -1,   -1,   -1,
   -1,  304,   -1,  306,  307,   -1,  309,  310,  311,  312,
  313,  314,   -1,   -1,   -1,   -1,   -1,   -1,  321,  322,
  323,  324,  260,  261,   -1,  263,  264,  265,  266,   -1,
  268,  269,  270,  271,  272,  273,  274,   -1,  276,  277,
  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,
  288,   -1,  260,  261,  292,  263,  264,  265,  266,  297,
  268,  269,  270,  271,  272,  273,  274,  305,  276,  277,
  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,
  288,   -1,  260,  261,  292,  323,  324,   -1,   -1,  297,
  268,   -1,   -1,  271,  272,  273,  274,  305,  276,  277,
  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,
  288,   -1,   -1,   -1,  292,  323,  324,   -1,   -1,  297,
  298,   -1,   -1,   -1,   -1,   -1,  304,   -1,  306,  307,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,
  261,   -1,   -1,  321,  322,  323,  324,  268,   -1,   -1,
  271,  272,  273,  274,   -1,  276,  277,  278,  279,  280,
   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,   -1,
   -1,  292,   -1,   -1,   -1,   -1,  297,   -1,   -1,   -1,
   -1,   -1,   -1,  304,   -1,  306,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  260,  261,  262,   -1,   -1,   -1,   -1,
   -1,  268,  323,  324,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,  261,  292,   -1,   -1,   -1,   -1,
  297,  268,   -1,   -1,  271,  272,  273,  274,  305,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,   -1,
  297,  268,   -1,   -1,  271,  272,  273,  274,  305,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,   -1,
  297,  268,   -1,   -1,  271,  272,  273,  274,  305,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,   -1,
  297,  268,   -1,   -1,  271,  272,  273,  274,  305,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,   -1,
  297,  268,   -1,   -1,  271,  272,  273,  274,  305,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,  292,  323,  324,   -1,   -1,
  297,   -1,   -1,   -1,   -1,   -1,   -1,  304,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,  262,
   -1,   -1,   -1,   -1,   -1,  268,  323,  324,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,  292,
  260,  261,  262,   -1,  297,   -1,   -1,   -1,  268,   -1,
   -1,  271,  272,  273,  274,   -1,  276,  277,  278,  279,
  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,
  323,  324,  292,  260,  261,  262,   -1,  297,   -1,   -1,
   -1,  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  323,  324,  292,  260,  261,  262,   -1,
  297,   -1,   -1,   -1,  268,   -1,   -1,  271,  272,  273,
  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,  283,
  284,  285,   -1,   -1,  288,   -1,  323,  324,  292,  260,
  261,   -1,   -1,  297,   -1,   -1,   -1,  268,   -1,   -1,
  271,  272,  273,  274,   -1,  276,  277,  278,  279,  280,
   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,  323,
  324,  292,  260,  261,   -1,   -1,  297,   -1,   -1,   -1,
  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  288,   -1,  323,  324,  260,  261,   -1,   -1,   -1,  297,
  298,   -1,  268,   -1,   -1,  271,  272,  273,  274,  260,
  276,  277,  263,  264,  265,  266,  267,   -1,  269,  270,
   -1,  298,  288,   -1,   -1,  323,  324,  278,   -1,   -1,
  281,  297,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  319,  320,   -1,   -1,   -1,   -1,  298,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  323,  324,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  319,
  320,  306,   -1,   -1,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,  320,  321,  322,  306,   -1,
   -1,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  321,  322,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,
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
"proc : VOID ID PIZ params PDE $$2 cuerpo",
"$$3 :",
"proc : VOID ID PIZ PDE $$3 cuerpo",
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
"$$4 :",
"main : VOID MAIN $$4 PIZ PDE cuerpo",
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
#line 439 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 720 "y_tab.c"
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
					printf("\nError linea: %d: Identificado declarado anteriormente\n",linea_actual);
				}
			  }
break;
case 42:
#line 134 "lexico.y"
{printf("\nProcedimineto con nombre: %s\n",yyvsp[-3].cadena);}
break;
case 44:
#line 135 "lexico.y"
{printf("\nProcedimineto con nombre: %s\n",yyvsp[-2].cadena);}
break;
case 46:
#line 138 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,yyvsp[-1].tipo,paramForm,0)); imprimirTS();}
break;
case 47:
#line 139 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,yyvsp[-1].tipo,paramForm,0)); imprimirTS();}
break;
case 53:
#line 147 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); imprimirTS();}
break;
case 57:
#line 152 "lexico.y"
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
case 58:
#line 169 "lexico.y"
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
case 59:
#line 183 "lexico.y"
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
case 60:
#line 200 "lexico.y"
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
case 61:
#line 217 "lexico.y"
{if(yyvsp[-6].tipo != yyvsp[-4].tipo) 
																printf("Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
															else
																yyval.tipo = yyvsp[-4].tipo;
															}
break;
case 62:
#line 222 "lexico.y"
{yyval.tipo = yyvsp[-4].tipo;}
break;
case 63:
#line 223 "lexico.y"
{if(yyvsp[-5].tipo != yyvsp[-3].tipo)
											printf("Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
										else
											yyval.tipo = yyvsp[-3].tipo;
										}
break;
case 64:
#line 228 "lexico.y"
{yyval.tipo = yyvsp[-3].tipo;}
break;
case 65:
#line 231 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 66:
#line 232 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 74:
#line 245 "lexico.y"
{ if(yyvsp[-3].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 75:
#line 246 "lexico.y"
{ if(yyvsp[-1].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 76:
#line 250 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
									  }
									}
break;
case 77:
#line 256 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
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
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 81:
#line 280 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
							   }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							   }
							}
break;
case 82:
#line 286 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 83:
#line 292 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
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
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 87:
#line 316 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 88:
#line 322 "lexico.y"
{printf("\nENTERO: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 89:
#line 323 "lexico.y"
{yyval.tipo = yyvsp[-1].tipo;}
break;
case 90:
#line 324 "lexico.y"
{ if(yyvsp[0].tipo == booleano){
							yyval.tipo = booleano;
					   }else{
							printf("\nError linea: %d. Expresión con tipos distintos\n",linea_actual);
					   }
					}
break;
case 91:
#line 330 "lexico.y"
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
case 92:
#line 342 "lexico.y"
{printf("\nREAL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 93:
#line 343 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 94:
#line 344 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 95:
#line 345 "lexico.y"
{printf("\nCHAR: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 101:
#line 351 "lexico.y"
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
case 102:
#line 371 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 103:
#line 372 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 113:
#line 393 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); imprimirTS();}
break;
#line 1238 "y_tab.c"
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
