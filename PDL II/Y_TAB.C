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
   19,   13,   13,   21,   21,   23,   23,   23,   23,   23,
   23,   23,   23,   23,   24,   24,   24,   24,   31,   31,
   31,   31,   33,   33,   34,   34,   32,   32,   35,   35,
   35,   25,   25,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   26,
   26,   28,   28,   40,   40,   27,   29,   29,   41,   41,
   42,    8,   22,   22,   22,   22,   30,   30,   30,   36,
   45,   38,   39,   43,   44,   37,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    2,    2,    1,
    2,    1,    2,    1,    1,    3,    3,    1,    1,    1,
    1,    1,    1,    1,    0,    4,    3,    1,    1,    3,
    1,    6,    5,    4,    2,    1,    1,    1,    1,    1,
    1,    1,    2,    2,    8,    7,    7,    6,    7,    6,
    6,    5,    1,    1,    2,    1,    3,    2,    3,    1,
    2,    5,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    3,    2,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    5,
    5,    7,    5,    3,    1,    7,    5,    4,    3,    1,
    0,    6,    4,    3,    3,    2,    1,    1,    1,    3,
    4,    4,    4,    3,    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
    0,   20,   22,   35,    0,    0,  111,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,   18,    0,   27,    0,    0,    0,    0,
   16,   10,   41,    0,   38,    0,    0,    0,    0,    0,
   26,   36,    0,    0,    0,   43,   45,    0,    0,    0,
   37,    0,   86,   90,   91,   92,   93,   94,    0,    0,
    0,    0,    0,    0,    0,   95,   96,   97,   98,    0,
    0,    0,    0,    0,    0,    0,    0,  116,    0,   51,
    0,   66,   46,   47,   48,   49,   50,   52,    0,    0,
  117,  118,  119,   42,    0,  112,    0,    0,    0,    0,
    0,  126,   88,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  115,    0,   54,    0,    0,   53,    0,  114,
   65,   44,    0,    0,    0,  120,   87,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   78,   79,    0,
    0,    0,    0,    0,    0,   70,    0,    0,    0,    0,
  113,  124,  125,  122,  123,  108,    0,    0,    0,    0,
   71,    0,    0,    0,    0,    0,  121,  107,    0,    0,
  101,  100,   69,   72,    0,  103,  105,    0,    0,    0,
   58,    0,    0,    0,    0,    0,   63,   64,    0,    0,
    0,   57,    0,   56,  106,  102,  104,    0,    0,    0,
   55,    0,    0,    0,   62,    0,    0,    0,   60,   61,
    0,   59,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  100,   30,   24,   54,   45,   55,   56,  101,
   59,   66,  102,  103,  104,  105,  106,  107,  108,  109,
  212,  213,  219,  110,  177,   86,   87,   88,   89,  208,
  172,   48,  111,  112,  113,
};
short yysindex[] = {                                   1130,
    0,    0,    0,    0,    0, -172,    0,    0, -248, -200,
    0,   48,    0, -238, -241, -263,   48, -232,    0,    0,
 -276,    0,    0,    0, -216, -249,    0,    0,    0,    0,
    0, -241, -263,    0, -210, -263, -223,    0, -232,    0,
    0,    0,    0,    0, -183,    0,  -70, -187, -263, -137,
    0,    0,    0, -207,    0, -180, -174, -126, -258, -162,
    0,    0, -183, 1115,  543,    0,    0, -174, -172, -174,
    0, -171,    0,    0,    0,    0,    0,    0, -159, -157,
 -154, 1115, 1115, 1115, 1200,    0,    0,    0,    0, -280,
  -91, -127, -122, 1115, -116, -115, -110,    0,  573,    0,
 1169,    0,    0,    0,    0,    0,    0,    0, -120,  744,
    0,    0,    0,    0,  -71,    0, 1115,  -69,  -59,  -96,
 1131,    0,    0, 1115, 1115, 1115, 1115, 1115, 1115, 1115,
 1115, 1115, 1115, 1115, 1115, 1083,  -57, 1115,  132,  -67,
  -49,  -55,    0,  774,    0,  -34,  -31,    0, -280,    0,
    0,    0, 1200,  -64,  -58,    0,    0, -153, -153, -153,
 -153, -153, -153,  -65,  -65, -215, -215,    0,    0,  -61,
 1200, -251,  -52, 1154,  804,    0,  -46,  -48, -247,  -50,
    0,    0,    0,    0,    0,    0,  -56, 1115,  -44,  660,
    0,  834,  864,   -2,  -45,    2,    0,    0, 1200, -252,
    0,    0,    0,    0,  -14,    0,    0, -220, -234,  -54,
    0, -250,  -38,  -42,  -21,   27,    0,    0,  -10, 1050,
 -234,    0,  -17,    0,    0,    0,    0,  918, 1050,   -3,
    0,   -7,  951,  984,    0,   -1,    3, 1017,    0,    0,
   13,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  105,  162,  223,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  280,  337,    0,    0,  394,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  451,    0,
    0,    0,    0,    0,    0, -205,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -165,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -190,    0,    0,    0,    0, 1104,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, 1186,    0,
    0,    0,  603,    0,    0,    0,    0,  193,  250,  307,
  364,  421,  478,   18,   75, -100,  -41,    0,    0,    0,
 -218,    0,    0,    0,    0,    0,  714,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -217,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   15,
    0,    0,    0,    0,    0,    0,    0,    0,   16,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
short yygindex[] = {                                      0,
    0,  292,    0,  293,    1,  258,  320,   -4,  324,  308,
  -11,  -15,    6,    0,    5,    0,    0,  281,    0,  -63,
    0,  -60, -107,    0,    0,    0,    0,    0,    0,    0,
    0,  138,  135,  -99, -111,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 1520
short yytable[] = {                                     144,
   85,   41,  151,    6,   38,   23,  209,  114,  221,  116,
   25,   26,   40,   42,   33,   36,  136,   23,  121,  122,
  123,   38,   23,   43,   38,    6,  217,  117,    6,   44,
  139,  176,   49,  210,   52,  210,  151,   38,  218,   68,
   35,   27,   10,   46,   43,    9,  187,   47,   69,   50,
  195,   58,  211,  153,  222,  188,   28,   29,   35,  196,
  158,  159,  160,  161,  162,  163,  164,  165,  166,  167,
  168,  169,  171,  115,  174,  192,   53,  215,  202,  110,
  109,  204,  176,   41,  151,  176,  216,    1,  110,  109,
    2,    3,    4,    5,   89,   89,    7,    8,   62,   63,
   39,   39,   89,  134,  135,   89,   89,   89,   89,   60,
   89,   89,   89,   89,   89,   40,   40,   89,   89,   89,
  229,  151,   89,   61,  199,  151,   89,   64,  233,   65,
  151,   89,   89,   67,  238,   70,  117,  118,   89,  119,
   89,   89,  120,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,   89,   89,   89,   76,
   76,  130,  131,  132,  133,  134,  135,   76,   26,  137,
   76,   76,   76,   76,  138,   76,   76,   76,   76,   76,
  140,  141,   76,   76,   76,  148,  142,   76,  152,    1,
  154,   76,    2,    3,    4,    5,   76,   76,    7,    8,
  155,  156,  173,   76,  180,   76,   76,  178,   76,   76,
   76,   76,   76,   76,   76,   76,   76,   76,   77,   77,
   76,   76,   76,   76,  179,  182,   77,   57,  183,   77,
   77,   77,   77,  184,   77,   77,   77,   77,   77,  185,
  193,   77,   77,   77,  186,  189,   77,  197,  220,  198,
   77,  132,  133,  134,  135,   77,   77,  205,  194,  200,
  206,  207,   77,  225,   77,   77,  224,   77,   77,   77,
   77,   77,   77,   77,   77,   77,   77,   74,   74,   77,
   77,   77,   77,  214,  226,   74,  227,  231,   74,   74,
   74,   74,  228,   74,   74,   74,   74,   74,  235,  234,
   74,   74,   74,   31,  239,   74,   32,    1,  240,   74,
    2,    3,    4,    5,   74,   74,    7,    8,  242,   68,
   67,   74,   99,   74,   74,    9,   74,   74,   74,   74,
   74,   74,   74,   74,   75,   75,   39,   34,   74,   74,
   74,   74,   75,   71,   51,   75,   75,   75,   75,  223,
   75,   75,   75,   75,   75,  230,    0,   75,   75,   75,
    0,    0,   75,    0,    7,    0,   75,    7,    7,    7,
    7,   75,   75,    7,    7,    0,    0,    0,   75,    0,
   75,   75,    7,   75,   75,   75,   75,   75,   75,   75,
   75,  149,   73,    0,    0,   75,   75,   75,   75,   74,
    0,    0,   75,   76,   77,   78,    0,   79,   80,   91,
   92,   93,    0,    0,   94,   95,   96,    0,    0,   81,
    0,    8,    0,   97,    8,    8,    8,    8,   82,    0,
    8,    8,    0,    0,    0,  175,    0,    0,    0,    8,
  124,  125,  126,  127,  128,  129,  130,  131,  132,  133,
  134,  135,   80,   80,   83,   84,    0,    0,    0,    0,
   80,    0,    0,   80,   80,   80,   80,    0,   80,   80,
   80,   80,   80,    0,    0,   80,   80,   80,    0,    0,
   80,    0,    9,    0,   80,    9,    9,    9,    9,   80,
   80,    9,    9,    0,    0,    0,   80,    0,   80,   80,
    9,   80,   80,   80,   80,   80,   80,    0,    0,   81,
   81,    0,    0,   80,   80,   80,   80,   81,    0,    0,
   81,   81,   81,   81,    0,   81,   81,   81,   81,   81,
    0,    0,   81,   81,   81,    0,    0,   81,    0,    6,
    0,   81,    6,    6,    6,    6,   81,   81,    6,    6,
    0,    0,    0,   81,    0,   81,   81,    6,   81,   81,
   81,   81,   81,   81,    0,    0,   82,   82,    0,    0,
   81,   81,   81,   81,   82,    0,    0,   82,   82,   82,
   82,    0,   82,   82,   82,   82,   82,    0,    0,   82,
   82,   82,    0,    0,   82,    0,    5,    0,   82,    5,
    5,    5,    5,   82,   82,    5,    5,    0,    0,    0,
   82,    0,   82,   82,    5,   82,   82,   82,   82,   82,
   82,    0,    0,   83,   83,    0,    0,   82,   82,   82,
   82,   83,    0,    0,   83,   83,   83,   83,    0,   83,
   83,   83,   83,   83,    0,    0,   83,   83,   83,    0,
    0,   83,    0,    4,    0,   83,    4,    4,    4,    4,
   83,   83,    4,    4,    0,    0,    0,   83,    0,   83,
   83,    4,   83,   83,   83,   83,   83,   83,    0,    0,
   84,   84,    0,    0,   83,   83,   83,   83,   84,    0,
    0,   84,   84,   84,   84,    0,   84,   84,   84,   84,
   84,    0,    0,   84,   84,   84,    0,    0,   84,    0,
    3,    0,   84,    3,    3,    3,    3,   84,   84,    3,
    3,    0,    0,    0,   84,    0,   84,   84,    3,   84,
   84,   84,   84,   84,   84,    0,    0,   85,   85,    0,
    0,   84,   84,   84,   84,   85,    0,    0,   85,   85,
   85,   85,    0,   85,   85,   85,   85,   85,    0,    0,
   85,   85,   85,    0,    0,   85,    0,    0,    0,   85,
    0,    0,    0,    0,   85,   85,    0,    0,    0,    0,
    0,   85,    0,   85,   85,    0,   85,   85,   85,   85,
   85,   85,    0,    0,    0,    0,    0,    0,   85,   85,
   85,   85,   90,   73,    0,    2,    3,    4,    5,    0,
   74,    7,    8,   75,   76,   77,   78,    0,   79,   80,
   91,   92,   93,    0,    0,   94,   95,   96,    0,    0,
   81,    0,   90,   73,   97,    2,    3,    4,    5,   82,
   74,    7,    8,   75,   76,   77,   78,   98,   79,   80,
   91,   92,   93,    0,    0,   94,   95,   96,    0,    0,
   81,    0,   99,   99,   97,   83,   84,    0,    0,   82,
   99,    0,    0,   99,   99,   99,   99,  143,   99,   99,
   99,   99,   99,    0,    0,   99,   99,   99,    0,    0,
   99,    0,    0,    0,   99,   83,   84,    0,    0,   99,
   99,    0,    0,    0,    0,    0,   99,    0,   99,   99,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  149,
   73,    0,    0,   99,   99,   99,   99,   74,    0,    0,
   75,   76,   77,   78,    0,   79,   80,   91,   92,   93,
    0,    0,   94,   95,   96,    0,    0,   81,    0,    0,
    0,   97,    0,    0,    0,    0,   82,    0,    0,    0,
    0,    0,    0,  175,    0,  201,    0,    0,    0,    0,
    0,    0,    0,   73,   73,   73,    0,    0,    0,    0,
    0,   73,   83,   84,   73,   73,   73,   73,    0,   73,
   73,   73,   73,   73,    0,    0,   73,   73,   73,    0,
    0,   73,    0,  149,   73,   73,    0,    0,    0,    0,
   73,   74,    0,    0,   75,   76,   77,   78,   73,   79,
   80,   91,   92,   93,    0,    0,   94,   95,   96,    0,
    0,   81,    0,  149,   73,   97,   73,   73,    0,    0,
   82,   74,    0,    0,   75,   76,   77,   78,  150,   79,
   80,   91,   92,   93,    0,    0,   94,   95,   96,    0,
    0,   81,    0,  149,   73,   97,   83,   84,    0,    0,
   82,   74,    0,    0,   75,   76,   77,   78,  181,   79,
   80,   91,   92,   93,    0,    0,   94,   95,   96,    0,
    0,   81,    0,  149,   73,   97,   83,   84,    0,    0,
   82,   74,    0,    0,   75,   76,   77,   78,  191,   79,
   80,   91,   92,   93,    0,    0,   94,   95,   96,    0,
    0,   81,    0,  149,   73,   97,   83,   84,    0,    0,
   82,   74,    0,    0,   75,   76,   77,   78,  203,   79,
   80,   91,   92,   93,    0,    0,   94,   95,   96,    0,
    0,   81,    0,    0,    0,   97,   83,   84,    0,    0,
   82,    0,    0,    0,    0,    0,    0,  175,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  149,   73,  232,
    0,    0,    0,    0,    0,   74,   83,   84,   75,   76,
   77,   78,    0,   79,   80,   91,   92,   93,    0,    0,
   94,   95,   96,    0,    0,   81,    0,    0,    0,   97,
  149,   73,  236,    0,   82,    0,    0,    0,   74,    0,
    0,   75,   76,   77,   78,    0,   79,   80,   91,   92,
   93,    0,    0,   94,   95,   96,    0,    0,   81,    0,
   83,   84,   97,  149,   73,  237,    0,   82,    0,    0,
    0,   74,    0,    0,   75,   76,   77,   78,    0,   79,
   80,   91,   92,   93,    0,    0,   94,   95,   96,    0,
    0,   81,    0,   83,   84,   97,  149,   73,  241,    0,
   82,    0,    0,    0,   74,    0,    0,   75,   76,   77,
   78,    0,   79,   80,   91,   92,   93,    0,    0,   94,
   95,   96,    0,    0,   81,    0,   83,   84,   97,  149,
   73,    0,    0,   82,    0,    0,    0,   74,    0,    0,
   75,   76,   77,   78,    0,   79,   80,   91,   92,   93,
    0,    0,   94,   95,   96,    0,    0,   81,    0,   83,
   84,   97,   72,   73,    0,    0,   82,    0,    0,    0,
   74,    0,    0,   75,   76,   77,   78,    0,   79,   80,
    0,    0,    0,   32,    0,    0,    0,    0,    0,    0,
   81,    0,   83,   84,   72,   73,    0,    0,    0,   82,
  170,    0,   74,    0,    0,   75,   76,   77,   78,    1,
   79,   80,    2,    3,    4,    5,    6,    0,    7,    8,
    0,    0,   81,    0,    0,   83,   84,    9,    0,   89,
   10,   82,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,    0,    0,  157,    0,
    0,    0,    0,    0,    0,    0,    0,   83,   84,  124,
  125,  126,  127,  128,  129,  130,  131,  132,  133,  134,
  135,  190,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  124,  125,  126,  127,  128,  129,  130,  131,
  132,  133,  134,  135,  145,    0,    0,  124,  125,  126,
  127,  128,  129,  130,  131,  132,  133,  134,  135,  146,
  147,   89,    0,    0,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,   89,   89,  124,  125,
  126,  127,  128,  129,  130,  131,  132,  133,  134,  135,
};
short yycheck[] = {                                      99,
   64,   17,  110,  267,   16,    0,  259,   68,  259,   70,
    6,  260,   17,   18,   14,   15,  297,   12,   82,   83,
   84,   33,   17,   18,   36,  267,  261,  308,  267,  306,
   94,  139,   32,  286,   39,  286,  144,   49,  273,  298,
  282,  290,  281,  260,   39,  278,  298,  297,  307,  260,
  298,   47,  305,  117,  305,  307,  257,  258,  282,  307,
  124,  125,  126,  127,  128,  129,  130,  131,  132,  133,
  134,  135,  136,   69,  138,  175,  260,  298,  190,  298,
  298,  193,  190,   99,  192,  193,  307,  260,  307,  307,
  263,  264,  265,  266,  260,  261,  269,  270,  306,  307,
  306,  307,  268,  319,  320,  271,  272,  273,  274,  297,
  276,  277,  278,  279,  280,  306,  307,  283,  284,  285,
  220,  229,  288,  261,  188,  233,  292,  308,  228,  304,
  238,  297,  298,  260,  234,  298,  308,  297,  304,  297,
  306,  307,  297,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  320,  321,  322,  323,  324,  260,
  261,  315,  316,  317,  318,  319,  320,  268,  260,  297,
  271,  272,  273,  274,  297,  276,  277,  278,  279,  280,
  297,  297,  283,  284,  285,  306,  297,  288,  260,  260,
  260,  292,  263,  264,  265,  266,  297,  298,  269,  270,
  260,  298,  260,  304,  260,  306,  307,  275,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  318,  260,  261,
  321,  322,  323,  324,  274,  260,  268,  298,  260,  271,
  272,  273,  274,  298,  276,  277,  278,  279,  280,  298,
  287,  283,  284,  285,  306,  298,  288,  298,  303,  306,
  292,  317,  318,  319,  320,  297,  298,  260,  307,  304,
  306,  260,  304,  306,  306,  307,  305,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  260,  261,  321,
  322,  323,  324,  298,  306,  268,  260,  305,  271,  272,
  273,  274,  303,  276,  277,  278,  279,  280,  306,  303,
  283,  284,  285,   12,  306,  288,   14,  260,  306,  292,
  263,  264,  265,  266,  297,  298,  269,  270,  306,  305,
  305,  304,   65,  306,  307,  278,  309,  310,  311,  312,
  313,  314,  315,  316,  260,  261,   17,   14,  321,  322,
  323,  324,  268,   63,   37,  271,  272,  273,  274,  212,
  276,  277,  278,  279,  280,  221,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  260,   -1,  292,  263,  264,  265,
  266,  297,  298,  269,  270,   -1,   -1,   -1,  304,   -1,
  306,  307,  278,  309,  310,  311,  312,  313,  314,  315,
  316,  260,  261,   -1,   -1,  321,  322,  323,  324,  268,
   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  260,   -1,  292,  263,  264,  265,  266,  297,   -1,
  269,  270,   -1,   -1,   -1,  304,   -1,   -1,   -1,  278,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  320,  260,  261,  323,  324,   -1,   -1,   -1,   -1,
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
   -1,   -1,   -1,  260,   -1,   -1,   -1,   -1,   -1,   -1,
  288,   -1,  323,  324,  260,  261,   -1,   -1,   -1,  297,
  298,   -1,  268,   -1,   -1,  271,  272,  273,  274,  260,
  276,  277,  263,  264,  265,  266,  267,   -1,  269,  270,
   -1,   -1,  288,   -1,   -1,  323,  324,  278,   -1,  306,
  281,  297,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  319,  320,  321,  322,   -1,   -1,  298,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  323,  324,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  319,
  320,  298,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  319,  320,  306,   -1,   -1,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  319,  320,  321,
  322,  306,   -1,   -1,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,  320,  321,  322,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  318,  319,  320,
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
#line 411 "lexico.y"
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
case 33:
#line 103 "lexico.y"
{yyval.tipo = booleano;}
break;
case 34:
#line 104 "lexico.y"
{yyval.tipo = cadena;}
break;
case 35:
#line 107 "lexico.y"
{tipoAux = yyvsp[0].tipo;}
break;
case 41:
#line 117 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,tipoAux,var,0)); imprimirTS();}
break;
case 55:
#line 130 "lexico.y"
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
case 56:
#line 147 "lexico.y"
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
case 57:
#line 161 "lexico.y"
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
case 58:
#line 178 "lexico.y"
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
case 59:
#line 195 "lexico.y"
{if(yyvsp[-6].tipo != yyvsp[-4].tipo) 
																printf("Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
															else
																yyval.tipo = yyvsp[-4].tipo;
															}
break;
case 60:
#line 200 "lexico.y"
{yyval.tipo = yyvsp[-4].tipo;}
break;
case 61:
#line 201 "lexico.y"
{if(yyvsp[-5].tipo != yyvsp[-3].tipo)
											printf("Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
										else
											yyval.tipo = yyvsp[-3].tipo;
										}
break;
case 62:
#line 206 "lexico.y"
{yyval.tipo = yyvsp[-3].tipo;}
break;
case 63:
#line 209 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 64:
#line 210 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 72:
#line 223 "lexico.y"
{ if(yyvsp[-3].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 73:
#line 224 "lexico.y"
{ if(yyvsp[-1].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 74:
#line 228 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
									  }
									}
break;
case 75:
#line 234 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 76:
#line 240 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 77:
#line 246 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 78:
#line 252 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 79:
#line 258 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
							   }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							   }
							}
break;
case 80:
#line 264 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 81:
#line 270 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 82:
#line 276 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 83:
#line 282 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 84:
#line 288 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 85:
#line 294 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 86:
#line 300 "lexico.y"
{printf("\nENTERO: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 87:
#line 301 "lexico.y"
{yyval.tipo = yyvsp[-1].tipo;}
break;
case 88:
#line 302 "lexico.y"
{ if(yyvsp[0].tipo == booleano){
							yyval.tipo = booleano;
					   }else{
							printf("\nError linea: %d. Expresión con tipos distintos\n",linea_actual);
					   }
					}
break;
case 89:
#line 308 "lexico.y"
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
case 90:
#line 320 "lexico.y"
{printf("\nREAL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 91:
#line 321 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 92:
#line 322 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 93:
#line 323 "lexico.y"
{printf("\nCHAR: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 99:
#line 329 "lexico.y"
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
case 100:
#line 349 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 101:
#line 350 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 111:
#line 366 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); imprimirTS();}
break;
#line 1198 "y_tab.c"
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
