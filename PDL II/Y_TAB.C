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

#line 34 "y_tab.c"
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
   19,   19,   13,   13,   21,   21,   23,   23,   23,   23,
   23,   23,   23,   23,   23,   24,   24,   24,   24,   31,
   31,   31,   31,   33,   33,   34,   34,   32,   32,   35,
   35,   35,   25,   25,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   26,   26,   28,   28,   40,   40,   27,   29,   29,   41,
   41,   42,    8,   22,   22,   22,   22,   30,   30,   30,
   36,   45,   38,   39,   43,   44,   37,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    2,    2,    1,
    2,    1,    2,    1,    1,    3,    3,    1,    1,    1,
    1,    1,    1,    1,    0,    4,    3,    1,    1,    3,
    1,    4,    6,    5,    4,    2,    1,    1,    1,    1,
    1,    1,    1,    2,    2,    8,    7,    7,    6,    7,
    6,    6,    5,    1,    1,    2,    1,    3,    2,    3,
    1,    2,    5,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    1,    3,    2,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    3,
    5,    5,    7,    5,    3,    1,    7,    5,    4,    3,
    1,    0,    6,    4,    3,    3,    2,    1,    1,    1,
    3,    4,    4,    4,    3,    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
    0,   20,   22,   35,    0,    0,  112,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,   18,    0,   27,    0,    0,    0,    0,
   16,   10,    0,    0,   38,    0,    0,    0,    0,    0,
   26,    0,   36,    0,    0,    0,   44,   46,    0,    0,
    0,    0,   37,    0,   87,   91,   92,   93,   94,   95,
    0,    0,    0,    0,    0,    0,    0,   96,   97,   98,
   99,    0,    0,    0,    0,    0,    0,    0,    0,  117,
    0,   52,    0,   67,   47,   48,   49,   50,   51,   53,
    0,    0,  118,  119,  120,   43,    0,  113,   42,    0,
    0,    0,    0,    0,  127,   89,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  116,    0,   55,    0,    0,
   54,    0,  115,   66,   45,    0,    0,    0,  121,   88,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   79,   80,    0,    0,    0,    0,    0,    0,   71,    0,
    0,    0,    0,  114,  125,  126,  123,  124,  109,    0,
    0,    0,    0,   72,    0,    0,    0,    0,    0,  122,
  108,    0,    0,  102,  101,   70,   73,    0,  104,  106,
    0,    0,    0,   59,    0,    0,    0,    0,    0,   64,
   65,    0,    0,    0,   58,    0,   57,  107,  103,  105,
    0,    0,    0,   56,    0,    0,    0,   63,    0,    0,
    0,   61,   62,    0,   60,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  102,   30,   24,   54,   45,   55,   56,  103,
   59,   67,  104,  105,  106,  107,  108,  109,  110,  111,
  215,  216,  222,  112,  180,   88,   89,   90,   91,  211,
  175,   48,  113,  114,  115,
};
short yysindex[] = {                                   1079,
    0,    0,    0,    0,    0,  489,    0,    0, -253, -248,
    0,   31,    0, -263, -265, -223,   31, -226,    0,    0,
 -250,    0,    0,    0, -202, -221,    0,    0,    0,    0,
    0, -265, -223,    0, -177, -223, -153,    0, -226,    0,
    0,    0,    0,    0, -155,    0,  -28, -187, -223, -136,
    0,    0, -154, -198,    0, -132, -131,  -83, -292, -120,
    0,  -81,    0, -155, 1064,  524,    0,    0, -131,  489,
 -131,  -91,    0, -126,    0,    0,    0,    0,    0,    0,
  -85,  -80,  -74, 1064, 1064, 1064, 1149,    0,    0,    0,
    0, -169,  -36,  -69,  -68, 1064,  -66,  -64,  -54,    0,
  554,    0, 1118,    0,    0,    0,    0,    0,    0,    0,
  -62,  725,    0,    0,    0,    0,  -15,    0,    0, 1064,
  -13,  -10,  -31, 1080,    0,    0, 1064, 1064, 1064, 1064,
 1064, 1064, 1064, 1064, 1064, 1064, 1064, 1064, -157,    8,
 1064, -249,   -4,    9,   16,    0,  755,    0,   22,   27,
    0, -169,    0,    0,    0, 1149,   -8,   -6,    0,    0,
 -111, -111, -111, -111, -111, -111,  457,  457, -207, -207,
    0,    0,  -18, 1149, -225,    4, 1103,  785,    0,   17,
   -1, -172,    5,    0,    0,    0,    0,    0,    0,   20,
 1064,   23,  641,    0,  815,  845,   69,   24,   75,    0,
    0, 1149, -254,    0,    0,    0,    0,   43,    0,    0,
 -165, -220,   39,    0, -246,   41,   45,   55,   87,    0,
    0,   46, 1031, -220,    0,   57,    0,    0,    0,    0,
  899, 1031,   62,    0,   73,  932,  965,    0,   74,   80,
  998,    0,    0,   81,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   90,  147,  204,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  261,  318,    0,    0,  375,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  432,    0,
    0,    0, -228,    0,    0, -163,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -123,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -135,    0,    0,    0,
    0, 1053,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 1135,    0,    0,    0,  584,    0,    0,    0,    0,
  174,  231,  288,  345,  402,  459,   60,  117,  -58,    1,
    0,    0,    0, -139,    0,    0,    0,    0,    0,  695,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -128,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   58,    0,    0,    0,    0,    0,    0,    0,
    0,   93,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  380,    0,  385,   92,  337,  387,    3,  392,  371,
   85,  -16,  146,    0,    2,    0,    0,  354,    0,  -39,
    0,  -55, -109,    0,    0,    0,    0,    0,    0,    0,
    0,  205,  195, -101, -143,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 1469
short yytable[] = {                                     147,
   41,    6,  154,    6,  212,   69,   26,   25,   28,   29,
  152,   75,  224,  116,   70,  118,   35,   10,   76,   40,
   42,   77,   78,   79,   80,   87,   81,   82,   93,   94,
   95,  213,  179,   96,   97,   98,   27,  154,   83,  213,
  220,   52,   99,    6,  124,  125,  126,   84,   58,  205,
  214,    9,  207,  221,  178,   44,  142,   46,  225,  127,
  128,  129,  130,  131,  132,  133,  134,  135,  136,  137,
  138,  117,  190,   85,   86,   47,  195,   41,   41,   41,
  156,  191,   50,  179,   41,  154,  179,  161,  162,  163,
  164,  165,  166,  167,  168,  169,  170,  171,  172,  174,
   38,  177,   74,   75,   53,   33,   36,   63,   64,   60,
   76,  137,  138,   77,   78,   79,   80,   38,   81,   82,
   38,  232,  154,   49,   61,  198,  154,  139,   35,  236,
   83,  154,  218,   38,  199,  241,   90,   90,  120,   84,
  173,  219,   39,   39,   90,   23,   62,   90,   90,   90,
   90,  202,   90,   90,   90,   90,   90,   23,  111,   90,
   90,   90,   23,   43,   90,   85,   86,  111,   90,  110,
   40,   40,   66,   90,   90,   65,   68,   71,  110,   72,
   90,  120,   90,   90,   43,   90,   90,   90,   90,   90,
   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,
   90,   77,   77,  133,  134,  135,  136,  137,  138,   77,
  119,  121,   77,   77,   77,   77,  122,   77,   77,   77,
   77,   77,  123,   26,   77,   77,   77,  140,  141,   77,
  143,    1,  144,   77,    2,    3,    4,    5,   77,   77,
    7,    8,  145,  151,  155,   77,  157,   77,   77,  158,
   77,   77,   77,   77,   77,   77,   77,   77,   77,   77,
   78,   78,   77,   77,   77,   77,  159,  176,   78,   57,
  181,   78,   78,   78,   78,  183,   78,   78,   78,   78,
   78,  185,  182,   78,   78,   78,  186,  189,   78,  187,
    1,  188,   78,    2,    3,    4,    5,   78,   78,    7,
    8,  192,  200,  196,   78,  197,   78,   78,    9,   78,
   78,   78,   78,   78,   78,   78,   78,   78,   78,   75,
   75,   78,   78,   78,   78,  201,  203,   75,  208,  209,
   75,   75,   75,   75,  210,   75,   75,   75,   75,   75,
  217,  223,   75,   75,   75,  227,  230,   75,  231,    7,
  228,   75,    7,    7,    7,    7,   75,   75,    7,    7,
  229,  234,   69,   75,  237,   75,   75,    7,   75,   75,
   75,   75,   75,   75,   75,   75,   76,   76,  238,  242,
   75,   75,   75,   75,   76,  243,  245,   76,   76,   76,
   76,   31,   76,   76,   76,   76,   76,   68,   32,   76,
   76,   76,  101,   39,   76,   34,    8,   51,   76,    8,
    8,    8,    8,   76,   76,    8,    8,   73,  233,  226,
   76,    0,   76,   76,    8,   76,   76,   76,   76,   76,
   76,   76,   76,   81,   81,    0,    0,   76,   76,   76,
   76,   81,    0,    0,   81,   81,   81,   81,    0,   81,
   81,   81,   81,   81,    0,    0,   81,   81,   81,    0,
    0,   81,    0,    9,    0,   81,    9,    9,    9,    9,
   81,   81,    9,    9,    0,    0,    0,   81,    0,   81,
   81,    9,   81,   81,   81,   81,   81,   81,    0,    0,
   82,   82,    0,    0,   81,   81,   81,   81,   82,    0,
    0,   82,   82,   82,   82,    0,   82,   82,   82,   82,
   82,    0,    0,   82,   82,   82,    0,    0,   82,    0,
    6,    0,   82,    6,    6,    6,    6,   82,   82,    6,
    6,    0,    0,    0,   82,    0,   82,   82,    6,   82,
   82,   82,   82,   82,   82,    0,    0,   83,   83,    0,
    0,   82,   82,   82,   82,   83,    0,    0,   83,   83,
   83,   83,    0,   83,   83,   83,   83,   83,    0,    0,
   83,   83,   83,    0,    0,   83,    0,    5,    0,   83,
    5,    5,    5,    5,   83,   83,    5,    5,    0,    0,
    0,   83,    0,   83,   83,    5,   83,   83,   83,   83,
   83,   83,    0,    0,   84,   84,    0,    0,   83,   83,
   83,   83,   84,    0,    0,   84,   84,   84,   84,    0,
   84,   84,   84,   84,   84,    0,    0,   84,   84,   84,
    0,    0,   84,    0,    4,    0,   84,    4,    4,    4,
    4,   84,   84,    4,    4,    0,    0,    0,   84,    0,
   84,   84,    4,   84,   84,   84,   84,   84,   84,    0,
    0,   85,   85,    0,    0,   84,   84,   84,   84,   85,
    0,    0,   85,   85,   85,   85,    0,   85,   85,   85,
   85,   85,    0,    0,   85,   85,   85,    0,    0,   85,
    0,    3,    0,   85,    3,    3,    3,    3,   85,   85,
    3,    3,    0,    0,    0,   85,    0,   85,   85,    3,
   85,   85,   85,   85,   85,   85,    0,    0,   86,   86,
    0,    0,   85,   85,   85,   85,   86,    0,    0,   86,
   86,   86,   86,    0,   86,   86,   86,   86,   86,    0,
    0,   86,   86,   86,    0,    0,   86,    0,    1,    0,
   86,    2,    3,    4,    5,   86,   86,    7,    8,    0,
    0,    0,   86,    0,   86,   86,    0,   86,   86,   86,
   86,   86,   86,  135,  136,  137,  138,    0,    0,   86,
   86,   86,   86,   92,   75,    0,    2,    3,    4,    5,
    0,   76,    7,    8,   77,   78,   79,   80,    0,   81,
   82,   93,   94,   95,    0,    0,   96,   97,   98,    0,
    0,   83,    0,   92,   75,   99,    2,    3,    4,    5,
   84,   76,    7,    8,   77,   78,   79,   80,  100,   81,
   82,   93,   94,   95,    0,    0,   96,   97,   98,    0,
    0,   83,    0,  100,  100,   99,   85,   86,    0,    0,
   84,  100,    0,    0,  100,  100,  100,  100,  146,  100,
  100,  100,  100,  100,    0,    0,  100,  100,  100,    0,
    0,  100,    0,    0,    0,  100,   85,   86,    0,    0,
  100,  100,    0,    0,    0,    0,    0,  100,    0,  100,
  100,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  152,   75,    0,    0,  100,  100,  100,  100,   76,    0,
    0,   77,   78,   79,   80,    0,   81,   82,   93,   94,
   95,    0,    0,   96,   97,   98,    0,    0,   83,    0,
    0,    0,   99,    0,    0,    0,    0,   84,    0,    0,
    0,    0,    0,    0,  178,    0,  204,    0,    0,    0,
    0,    0,    0,    0,   74,   74,   74,    0,    0,    0,
    0,    0,   74,   85,   86,   74,   74,   74,   74,    0,
   74,   74,   74,   74,   74,    0,    0,   74,   74,   74,
    0,    0,   74,    0,  152,   75,   74,    0,    0,    0,
    0,   74,   76,    0,    0,   77,   78,   79,   80,   74,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,  152,   75,   99,   74,   74,    0,
    0,   84,   76,    0,    0,   77,   78,   79,   80,  153,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,  152,   75,   99,   85,   86,    0,
    0,   84,   76,    0,    0,   77,   78,   79,   80,  184,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,  152,   75,   99,   85,   86,    0,
    0,   84,   76,    0,    0,   77,   78,   79,   80,  194,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,  152,   75,   99,   85,   86,    0,
    0,   84,   76,    0,    0,   77,   78,   79,   80,  206,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,    0,    0,   99,   85,   86,    0,
    0,   84,    0,    0,    0,    0,    0,    0,  178,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  152,   75,
  235,    0,    0,    0,    0,    0,   76,   85,   86,   77,
   78,   79,   80,    0,   81,   82,   93,   94,   95,    0,
    0,   96,   97,   98,    0,    0,   83,    0,    0,    0,
   99,  152,   75,  239,    0,   84,    0,    0,    0,   76,
    0,    0,   77,   78,   79,   80,    0,   81,   82,   93,
   94,   95,    0,    0,   96,   97,   98,    0,    0,   83,
    0,   85,   86,   99,  152,   75,  240,    0,   84,    0,
    0,    0,   76,    0,    0,   77,   78,   79,   80,    0,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,   85,   86,   99,  152,   75,  244,
    0,   84,    0,    0,    0,   76,    0,    0,   77,   78,
   79,   80,    0,   81,   82,   93,   94,   95,    0,    0,
   96,   97,   98,    0,    0,   83,    0,   85,   86,   99,
  152,   75,    0,    0,   84,    0,    0,    0,   76,    0,
    0,   77,   78,   79,   80,    0,   81,   82,   93,   94,
   95,    0,   32,   96,   97,   98,    0,    0,   83,    0,
   85,   86,   99,   74,   75,    0,    0,   84,    0,    0,
    0,   76,    0,    0,   77,   78,   79,   80,    1,   81,
   82,    2,    3,    4,    5,    6,    0,    7,    8,    0,
    0,   83,    0,   85,   86,    0,    9,    0,   90,   10,
   84,   90,   90,   90,   90,   90,   90,   90,   90,   90,
   90,   90,   90,   90,   90,    0,    0,  160,    0,    0,
    0,    0,    0,    0,    0,    0,   85,   86,  127,  128,
  129,  130,  131,  132,  133,  134,  135,  136,  137,  138,
  193,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  127,  128,  129,  130,  131,  132,  133,  134,  135,
  136,  137,  138,  148,    0,    0,  127,  128,  129,  130,
  131,  132,  133,  134,  135,  136,  137,  138,  149,  150,
   90,    0,    0,   90,   90,   90,   90,   90,   90,   90,
   90,   90,   90,   90,   90,   90,   90,  127,  128,  129,
  130,  131,  132,  133,  134,  135,  136,  137,  138,
};
short yycheck[] = {                                     101,
   17,  267,  112,  267,  259,  298,  260,    6,  257,  258,
  260,  261,  259,   69,  307,   71,  282,  281,  268,   17,
   18,  271,  272,  273,  274,   65,  276,  277,  278,  279,
  280,  286,  142,  283,  284,  285,  290,  147,  288,  286,
  261,   39,  292,  267,   84,   85,   86,  297,   47,  193,
  305,  278,  196,  274,  304,  306,   96,  260,  305,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  319,
  320,   70,  298,  323,  324,  297,  178,  306,  307,  308,
  120,  307,  260,  193,  101,  195,  196,  127,  128,  129,
  130,  131,  132,  133,  134,  135,  136,  137,  138,  139,
   16,  141,  260,  261,  260,   14,   15,  306,  307,  297,
  268,  319,  320,  271,  272,  273,  274,   33,  276,  277,
   36,  223,  232,   32,  261,  298,  236,  297,  282,  231,
  288,  241,  298,   49,  307,  237,  260,  261,  308,  297,
  298,  307,  306,  307,  268,    0,  301,  271,  272,  273,
  274,  191,  276,  277,  278,  279,  280,   12,  298,  283,
  284,  285,   17,   18,  288,  323,  324,  307,  292,  298,
  306,  307,  304,  297,  298,  308,  260,  298,  307,  261,
  304,  308,  306,  307,   39,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,  321,  322,  323,
  324,  260,  261,  315,  316,  317,  318,  319,  320,  268,
  302,  297,  271,  272,  273,  274,  297,  276,  277,  278,
  279,  280,  297,  260,  283,  284,  285,  297,  297,  288,
  297,  260,  297,  292,  263,  264,  265,  266,  297,  298,
  269,  270,  297,  306,  260,  304,  260,  306,  307,  260,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  260,  261,  321,  322,  323,  324,  298,  260,  268,  298,
  275,  271,  272,  273,  274,  260,  276,  277,  278,  279,
  280,  260,  274,  283,  284,  285,  260,  306,  288,  298,
  260,  298,  292,  263,  264,  265,  266,  297,  298,  269,
  270,  298,  298,  287,  304,  307,  306,  307,  278,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  260,
  261,  321,  322,  323,  324,  306,  304,  268,  260,  306,
  271,  272,  273,  274,  260,  276,  277,  278,  279,  280,
  298,  303,  283,  284,  285,  305,  260,  288,  303,  260,
  306,  292,  263,  264,  265,  266,  297,  298,  269,  270,
  306,  305,  305,  304,  303,  306,  307,  278,  309,  310,
  311,  312,  313,  314,  315,  316,  260,  261,  306,  306,
  321,  322,  323,  324,  268,  306,  306,  271,  272,  273,
  274,   12,  276,  277,  278,  279,  280,  305,   14,  283,
  284,  285,   66,   17,  288,   14,  260,   37,  292,  263,
  264,  265,  266,  297,  298,  269,  270,   64,  224,  215,
  304,   -1,  306,  307,  278,  309,  310,  311,  312,  313,
  314,  315,  316,  260,  261,   -1,   -1,  321,  322,  323,
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
   -1,  304,   -1,  306,  307,  278,  309,  310,  311,  312,
  313,  314,   -1,   -1,  260,  261,   -1,   -1,  321,  322,
  323,  324,  268,   -1,   -1,  271,  272,  273,  274,   -1,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  260,   -1,  292,  263,  264,  265,
  266,  297,  298,  269,  270,   -1,   -1,   -1,  304,   -1,
  306,  307,  278,  309,  310,  311,  312,  313,  314,   -1,
   -1,  260,  261,   -1,   -1,  321,  322,  323,  324,  268,
   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  260,   -1,  292,  263,  264,  265,  266,  297,  298,
  269,  270,   -1,   -1,   -1,  304,   -1,  306,  307,  278,
  309,  310,  311,  312,  313,  314,   -1,   -1,  260,  261,
   -1,   -1,  321,  322,  323,  324,  268,   -1,   -1,  271,
  272,  273,  274,   -1,  276,  277,  278,  279,  280,   -1,
   -1,  283,  284,  285,   -1,   -1,  288,   -1,  260,   -1,
  292,  263,  264,  265,  266,  297,  298,  269,  270,   -1,
   -1,   -1,  304,   -1,  306,  307,   -1,  309,  310,  311,
  312,  313,  314,  317,  318,  319,  320,   -1,   -1,  321,
  322,  323,  324,  260,  261,   -1,  263,  264,  265,  266,
   -1,  268,  269,  270,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,  261,  292,  263,  264,  265,  266,
  297,  268,  269,  270,  271,  272,  273,  274,  305,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,   -1,
  297,  268,   -1,   -1,  271,  272,  273,  274,  305,  276,
  277,  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,
   -1,  288,   -1,   -1,   -1,  292,  323,  324,   -1,   -1,
  297,  298,   -1,   -1,   -1,   -1,   -1,  304,   -1,  306,
  307,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  260,  261,   -1,   -1,  321,  322,  323,  324,  268,   -1,
   -1,  271,  272,  273,  274,   -1,  276,  277,  278,  279,
  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,
   -1,   -1,  292,   -1,   -1,   -1,   -1,  297,   -1,   -1,
   -1,   -1,   -1,   -1,  304,   -1,  306,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  260,  261,  262,   -1,   -1,   -1,
   -1,   -1,  268,  323,  324,  271,  272,  273,  274,   -1,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  260,  261,  292,   -1,   -1,   -1,
   -1,  297,  268,   -1,   -1,  271,  272,  273,  274,  305,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,
   -1,  297,  268,   -1,   -1,  271,  272,  273,  274,  305,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,
   -1,  297,  268,   -1,   -1,  271,  272,  273,  274,  305,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,
   -1,  297,  268,   -1,   -1,  271,  272,  273,  274,  305,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  260,  261,  292,  323,  324,   -1,
   -1,  297,  268,   -1,   -1,  271,  272,  273,  274,  305,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,   -1,   -1,  292,  323,  324,   -1,
   -1,  297,   -1,   -1,   -1,   -1,   -1,   -1,  304,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,
  262,   -1,   -1,   -1,   -1,   -1,  268,  323,  324,  271,
  272,  273,  274,   -1,  276,  277,  278,  279,  280,   -1,
   -1,  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,
  292,  260,  261,  262,   -1,  297,   -1,   -1,   -1,  268,
   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  323,  324,  292,  260,  261,  262,   -1,  297,   -1,
   -1,   -1,  268,   -1,   -1,  271,  272,  273,  274,   -1,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  323,  324,  292,  260,  261,  262,
   -1,  297,   -1,   -1,   -1,  268,   -1,   -1,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  323,  324,  292,
  260,  261,   -1,   -1,  297,   -1,   -1,   -1,  268,   -1,
   -1,  271,  272,  273,  274,   -1,  276,  277,  278,  279,
  280,   -1,  260,  283,  284,  285,   -1,   -1,  288,   -1,
  323,  324,  292,  260,  261,   -1,   -1,  297,   -1,   -1,
   -1,  268,   -1,   -1,  271,  272,  273,  274,  260,  276,
  277,  263,  264,  265,  266,  267,   -1,  269,  270,   -1,
   -1,  288,   -1,  323,  324,   -1,  278,   -1,  306,  281,
  297,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  321,  322,   -1,   -1,  298,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  323,  324,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  318,  319,  320,
  298,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  306,   -1,   -1,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  320,  321,  322,
  306,   -1,   -1,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  320,  321,  322,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  319,  320,
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
"variable : ID CORI NUM CORD",
"proc : VOID ID PIZ params PDE cuerpo",
"proc : VOID ID PIZ PDE cuerpo",
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
"literal : TEXTO_OUT",
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
"$$2 :",
"main : VOID MAIN $$2 PIZ PDE cuerpo",
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
#line 304 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 712 "y_tab.c"
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
#line 63 "lexico.y"
{createTS();}
break;
case 28:
#line 99 "lexico.y"
{yyval.tipo = entero;}
break;
case 29:
#line 100 "lexico.y"
{yyval.tipo = real;}
break;
case 30:
#line 101 "lexico.y"
{yyval.tipo = caracter;}
break;
case 31:
#line 102 "lexico.y"
{yyval.tipo = conjunto;}
break;
case 33:
#line 104 "lexico.y"
{yyval.tipo = booleano;}
break;
case 34:
#line 105 "lexico.y"
{yyval.tipo = cadena;}
break;
case 35:
#line 108 "lexico.y"
{tipoAux = yyvsp[0].tipo;}
break;
case 41:
#line 118 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,tipoAux,var,0)); imprimirTS();}
break;
case 75:
#line 150 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
									  }
									}
break;
case 76:
#line 156 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 77:
#line 162 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 78:
#line 168 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 79:
#line 174 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 80:
#line 180 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
							   }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							   }
							}
break;
case 81:
#line 186 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 82:
#line 192 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 83:
#line 198 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 84:
#line 204 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 85:
#line 210 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 86:
#line 216 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 87:
#line 222 "lexico.y"
{printf("\nENTERO: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 89:
#line 224 "lexico.y"
{ if(yyvsp[0].tipo == booleano){
							yyval.tipo = yyvsp[-1].tipo;
					   }else{
							printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
					   }
					}
break;
case 90:
#line 230 "lexico.y"
{printf("\nID: %s con TIPO: %d\n",yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 91:
#line 231 "lexico.y"
{printf("\nREAL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 92:
#line 232 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 93:
#line 233 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 94:
#line 234 "lexico.y"
{printf("\nCHAR: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 100:
#line 240 "lexico.y"
{printf("\nASIG: %s con TIPO: %d\n",yyvsp[-2].cadena, yyvsp[0].tipo);}
break;
case 112:
#line 259 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); imprimirTS();}
break;
#line 1037 "y_tab.c"
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
