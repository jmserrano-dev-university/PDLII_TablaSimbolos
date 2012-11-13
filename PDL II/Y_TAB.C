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
   31,   31,   31,   33,   34,   34,   32,   32,   35,   35,
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
    1,    4,    6,    5,    4,    2,    1,    1,    1,    1,
    1,    1,    1,    2,    2,    8,    7,    7,    6,    7,
    6,    6,    5,    1,    2,    1,    3,    2,    3,    1,
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
   16,   10,    0,    0,   38,    0,    0,    0,    0,    0,
   26,    0,   36,    0,    0,    0,   44,   46,    0,    0,
    0,    0,   37,    0,   86,   90,   91,   92,   93,   94,
    0,    0,    0,    0,    0,    0,    0,   95,   96,   97,
   98,    0,    0,    0,    0,    0,    0,    0,    0,  116,
    0,   52,    0,   66,   47,   48,   49,   50,   51,   53,
    0,    0,  117,  118,  119,   43,    0,  112,   42,    0,
    0,    0,    0,    0,  126,   88,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  115,    0,   55,    0,    0,
   54,    0,  114,   65,   45,    0,    0,    0,  120,   87,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   78,   79,    0,    0,    0,    0,    0,    0,   70,    0,
    0,    0,    0,  113,  124,  125,  122,  123,  108,    0,
    0,    0,    0,   71,    0,    0,    0,    0,    0,  121,
  107,    0,    0,  101,  100,   69,   72,    0,  103,  105,
    0,    0,    0,   59,    0,    0,    0,    0,    0,   64,
    0,    0,    0,   58,    0,   57,  106,  102,  104,    0,
    0,    0,   56,    0,    0,    0,   63,    0,    0,    0,
   61,   62,    0,   60,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  102,   30,   24,   54,   45,   55,   56,  103,
   59,   67,  104,  105,  106,  107,  108,  109,  110,  111,
  215,  216,  221,  112,  180,   88,   89,   90,   91,  211,
  175,   48,  113,  114,  115,
};
short yysindex[] = {                                   1111,
    0,    0,    0,    0,    0,  432,    0,    0, -253, -248,
    0,  -28,    0, -263, -265, -223,  -28, -224,    0,    0,
 -250,    0,    0,    0, -184, -214,    0,    0,    0,    0,
    0, -265, -223,    0, -159, -223, -142,    0, -224,    0,
    0,    0,    0,    0, -157,    0,  -93, -133, -223, -103,
    0,    0, -135, -179,    0, -130, -125,  -80, -292, -116,
    0,  -76,    0, -157, 1096,  524,    0,    0, -125,  432,
 -125,  -98,    0, -102,    0,    0,    0,    0,    0,    0,
  -88,  -85,  -74, 1096, 1096, 1096, 1158,    0,    0,    0,
    0, -256,  -53,  -73,  -68, 1096,  -64,  -54,  -52,    0,
  554,    0, 1127,    0,    0,    0,    0,    0,    0,    0,
  -59,  725,    0,    0,    0,    0,    7,    0,    0, 1096,
    8,   10,  -27, 1085,    0,    0, 1096, 1096, 1096, 1096,
 1096, 1096, 1096, 1096, 1096, 1096, 1096, 1096, 1064,   16,
 1096, -249,   12,    9,   22,    0,  755,    0,   28,   30,
    0, -256,    0,    0,    0, 1158,   -6,    4,    0,    0,
  577,  577,  577,  577,  577,  577,  435,  435, -187, -187,
    0,    0,   -3, 1158, -225,    6, 1112,  785,    0,   19,
   20, -173,   32,    0,    0,    0,    0,    0,    0,   23,
 1096,   37,  641,    0,  815,  845,   66,   29,   82,    0,
    0, 1158, -254,    0,    0,    0,    0,   48,    0,    0,
 -168,   86,   46,    0, -246,   56,   45,   57,  102,    0,
   62, 1031,   86,    0,   74,    0,    0,    0,    0,  899,
 1031,   77,    0,   80,  932,  965,    0,   81,   92,  998,
    0,    0,   93,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   31,   90,  147,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  204,  261,    0,    0,  318,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  375,    0,
    0,    0, -228,    0,    0, -163,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -123,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -160,    0,    0,    0,
    0, -202,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 1144,    0,    0,    0,  584,    0,    0,    0,    0,
  174,  231,  288,  345,  402,  459,   60,  117,  -58,    1,
    0,    0,    0, -139,    0,    0,    0,    0,    0,  695,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -90,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   87,    0,    0,    0,    0,    0,    0,    0,    0,
   98,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  392,    0,  394,   91,  340,  401,    3,  405,  383,
  195,  -16,  124,    0,    2,    0,    0,  358,    0,  -39,
    0,  -55, -109,    0,    0,    0,    0,    0,    0,    0,
    0,  221,  214, -101, -143,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 1478
short yytable[] = {                                     147,
   41,    6,  154,    6,  212,   69,   26,   25,   28,   29,
  152,   75,  223,  116,   70,  118,   35,   10,   76,   40,
   42,   77,   78,   79,   80,   87,   81,   82,   93,   94,
   95,  213,  179,   96,   97,   98,   27,  154,   83,  213,
  139,   52,   99,    6,  124,  125,  126,   84,   58,  205,
  214,  120,  207,    9,  178,   44,  142,   32,  224,  127,
  128,  129,  130,  131,  132,  133,  134,  135,  136,  137,
  138,  117,  190,   85,   86,   46,  195,   41,   41,   41,
  156,  191,   47,  179,   41,  154,  179,  161,  162,  163,
  164,  165,  166,  167,  168,  169,  170,  171,  172,  174,
   50,  177,   53,   89,   33,   36,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
  231,  154,   49,   23,  198,  154,   63,   64,  235,  218,
  154,  137,  138,  199,  240,   23,   89,   89,  219,   35,
   23,   43,   39,   39,   89,   40,   40,   89,   89,   89,
   89,  202,   89,   89,   89,   89,   89,   61,  110,   89,
   89,   89,   43,   60,   89,   62,    1,  110,   89,    2,
    3,    4,    5,   89,   89,    7,    8,   65,   66,   68,
   89,   71,   89,   89,   72,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   76,   76,  119,   57,  120,   26,  109,  121,   76,
   38,  122,   76,   76,   76,   76,  109,   76,   76,   76,
   76,   76,  123,  140,   76,   76,   76,   38,  141,   76,
   38,    1,  143,   76,    2,    3,    4,    5,   76,   76,
    7,    8,  144,   38,  145,   76,  151,   76,   76,    9,
   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
   77,   77,   76,   76,   76,   76,  155,  157,   77,  158,
  159,   77,   77,   77,   77,  176,   77,   77,   77,   77,
   77,  183,  182,   77,   77,   77,  181,  185,   77,  186,
    7,  187,   77,    7,    7,    7,    7,   77,   77,    7,
    7,  188,  189,  192,   77,  196,   77,   77,    7,   77,
   77,   77,   77,   77,   77,   77,   77,   77,   77,   74,
   74,   77,   77,   77,   77,  208,  197,   74,  201,  200,
   74,   74,   74,   74,  209,   74,   74,   74,   74,   74,
  203,  210,   74,   74,   74,  217,  220,   74,  222,    8,
  227,   74,    8,    8,    8,    8,   74,   74,    8,    8,
  226,  229,  228,   74,  230,   74,   74,    8,   74,   74,
   74,   74,   74,   74,   74,   74,   75,   75,  233,  236,
   74,   74,   74,   74,   75,  237,  241,   75,   75,   75,
   75,   68,   75,   75,   75,   75,   75,  242,  244,   75,
   75,   75,   67,   31,   75,  101,    9,   32,   75,    9,
    9,    9,    9,   75,   75,    9,    9,   39,   34,   51,
   75,   73,   75,   75,    9,   75,   75,   75,   75,   75,
   75,   75,   75,   80,   80,  225,  232,   75,   75,   75,
   75,   80,    0,    0,   80,   80,   80,   80,    0,   80,
   80,   80,   80,   80,    0,    0,   80,   80,   80,    0,
    0,   80,    0,    6,    0,   80,    6,    6,    6,    6,
   80,   80,    6,    6,    0,    0,    0,   80,    0,   80,
   80,    6,   80,   80,   80,   80,   80,   80,    0,    0,
   81,   81,    0,    0,   80,   80,   80,   80,   81,    0,
    0,   81,   81,   81,   81,    0,   81,   81,   81,   81,
   81,    0,    0,   81,   81,   81,    0,    0,   81,    0,
    5,    0,   81,    5,    5,    5,    5,   81,   81,    5,
    5,    0,    0,    0,   81,    0,   81,   81,    5,   81,
   81,   81,   81,   81,   81,    0,    0,   82,   82,    0,
    0,   81,   81,   81,   81,   82,    0,    0,   82,   82,
   82,   82,    0,   82,   82,   82,   82,   82,    0,    0,
   82,   82,   82,    0,    0,   82,    0,    4,    0,   82,
    4,    4,    4,    4,   82,   82,    4,    4,    0,    0,
    0,   82,    0,   82,   82,    4,   82,   82,   82,   82,
   82,   82,    0,    0,   83,   83,    0,    0,   82,   82,
   82,   82,   83,    0,    0,   83,   83,   83,   83,    0,
   83,   83,   83,   83,   83,    0,    0,   83,   83,   83,
    0,    0,   83,    0,    3,    0,   83,    3,    3,    3,
    3,   83,   83,    3,    3,    0,    0,    0,   83,    0,
   83,   83,    3,   83,   83,   83,   83,   83,   83,    0,
    0,   84,   84,    0,    0,   83,   83,   83,   83,   84,
    0,    0,   84,   84,   84,   84,    0,   84,   84,   84,
   84,   84,    0,    0,   84,   84,   84,    0,    0,   84,
    0,    1,    0,   84,    2,    3,    4,    5,   84,   84,
    7,    8,    0,    0,    0,   84,    0,   84,   84,    0,
   84,   84,   84,   84,   84,   84,    0,    0,   85,   85,
    0,    0,   84,   84,   84,   84,   85,    0,    0,   85,
   85,   85,   85,    0,   85,   85,   85,   85,   85,    0,
    0,   85,   85,   85,    0,    0,   85,    0,    0,    0,
   85,  135,  136,  137,  138,   85,   85,    0,    0,    0,
    0,    0,   85,    0,   85,   85,    0,   85,   85,   85,
   85,   85,   85,    0,    0,    0,    0,    0,    0,   85,
   85,   85,   85,   92,   75,    0,    2,    3,    4,    5,
    0,   76,    7,    8,   77,   78,   79,   80,    0,   81,
   82,   93,   94,   95,    0,    0,   96,   97,   98,    0,
    0,   83,    0,   92,   75,   99,    2,    3,    4,    5,
   84,   76,    7,    8,   77,   78,   79,   80,  100,   81,
   82,   93,   94,   95,    0,    0,   96,   97,   98,    0,
    0,   83,    0,   99,   99,   99,   85,   86,    0,    0,
   84,   99,    0,    0,   99,   99,   99,   99,  146,   99,
   99,   99,   99,   99,    0,    0,   99,   99,   99,    0,
    0,   99,    0,    0,    0,   99,   85,   86,    0,    0,
   99,   99,    0,    0,    0,    0,    0,   99,    0,   99,
   99,  133,  134,  135,  136,  137,  138,    0,    0,    0,
  152,   75,    0,    0,   99,   99,   99,   99,   76,    0,
    0,   77,   78,   79,   80,    0,   81,   82,   93,   94,
   95,    0,    0,   96,   97,   98,    0,    0,   83,    0,
    0,    0,   99,    0,    0,    0,    0,   84,    0,    0,
    0,    0,    0,    0,  178,    0,  204,    0,    0,    0,
    0,    0,    0,    0,   73,   73,   73,    0,    0,    0,
    0,    0,   73,   85,   86,   73,   73,   73,   73,    0,
   73,   73,   73,   73,   73,    0,    0,   73,   73,   73,
    0,    0,   73,    0,  152,   75,   73,    0,    0,    0,
    0,   73,   76,    0,    0,   77,   78,   79,   80,   73,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,  152,   75,   99,   73,   73,    0,
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
  234,    0,    0,    0,    0,    0,   76,   85,   86,   77,
   78,   79,   80,    0,   81,   82,   93,   94,   95,    0,
    0,   96,   97,   98,    0,    0,   83,    0,    0,    0,
   99,  152,   75,  238,    0,   84,    0,    0,    0,   76,
    0,    0,   77,   78,   79,   80,    0,   81,   82,   93,
   94,   95,    0,    0,   96,   97,   98,    0,    0,   83,
    0,   85,   86,   99,  152,   75,  239,    0,   84,    0,
    0,    0,   76,    0,    0,   77,   78,   79,   80,    0,
   81,   82,   93,   94,   95,    0,    0,   96,   97,   98,
    0,    0,   83,    0,   85,   86,   99,  152,   75,  243,
    0,   84,    0,    0,    0,   76,    0,    0,   77,   78,
   79,   80,    0,   81,   82,   93,   94,   95,    0,    0,
   96,   97,   98,    0,    0,   83,    0,   85,   86,   99,
  152,   75,    0,    0,   84,    0,    0,    0,   76,    0,
    0,   77,   78,   79,   80,    0,   81,   82,   93,   94,
   95,    0,    0,   96,   97,   98,    0,    0,   83,    0,
   85,   86,   99,   74,   75,    0,    0,   84,    0,    0,
    0,   76,    0,    0,   77,   78,   79,   80,    0,   81,
   82,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   83,    0,   85,   86,   74,   75,    0,    0,    0,
   84,  173,    0,   76,    0,    0,   77,   78,   79,   80,
    1,   81,   82,    2,    3,    4,    5,    6,    0,    7,
    8,    0,  160,   83,    0,    0,   85,   86,    9,    0,
    0,   10,   84,  127,  128,  129,  130,  131,  132,  133,
  134,  135,  136,  137,  138,    0,    0,    0,    0,  193,
    0,    0,    0,    0,    0,    0,    0,    0,   85,   86,
  127,  128,  129,  130,  131,  132,  133,  134,  135,  136,
  137,  138,  148,    0,    0,  127,  128,  129,  130,  131,
  132,  133,  134,  135,  136,  137,  138,  149,  150,   89,
    0,    0,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,  127,  128,  129,  130,
  131,  132,  133,  134,  135,  136,  137,  138,
};
short yycheck[] = {                                     101,
   17,  267,  112,  267,  259,  298,  260,    6,  257,  258,
  260,  261,  259,   69,  307,   71,  282,  281,  268,   17,
   18,  271,  272,  273,  274,   65,  276,  277,  278,  279,
  280,  286,  142,  283,  284,  285,  290,  147,  288,  286,
  297,   39,  292,  267,   84,   85,   86,  297,   47,  193,
  305,  308,  196,  278,  304,  306,   96,  260,  305,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  319,
  320,   70,  298,  323,  324,  260,  178,  306,  307,  308,
  120,  307,  297,  193,  101,  195,  196,  127,  128,  129,
  130,  131,  132,  133,  134,  135,  136,  137,  138,  139,
  260,  141,  260,  306,   14,   15,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  320,  321,  322,
  222,  231,   32,    0,  298,  235,  306,  307,  230,  298,
  240,  319,  320,  307,  236,   12,  260,  261,  307,  282,
   17,   18,  306,  307,  268,  306,  307,  271,  272,  273,
  274,  191,  276,  277,  278,  279,  280,  261,  298,  283,
  284,  285,   39,  297,  288,  301,  260,  307,  292,  263,
  264,  265,  266,  297,  298,  269,  270,  308,  304,  260,
  304,  298,  306,  307,  261,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,  321,  322,  323,
  324,  260,  261,  302,  298,  308,  260,  298,  297,  268,
   16,  297,  271,  272,  273,  274,  307,  276,  277,  278,
  279,  280,  297,  297,  283,  284,  285,   33,  297,  288,
   36,  260,  297,  292,  263,  264,  265,  266,  297,  298,
  269,  270,  297,   49,  297,  304,  306,  306,  307,  278,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  260,  261,  321,  322,  323,  324,  260,  260,  268,  260,
  298,  271,  272,  273,  274,  260,  276,  277,  278,  279,
  280,  260,  274,  283,  284,  285,  275,  260,  288,  260,
  260,  298,  292,  263,  264,  265,  266,  297,  298,  269,
  270,  298,  306,  298,  304,  287,  306,  307,  278,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  260,
  261,  321,  322,  323,  324,  260,  307,  268,  306,  298,
  271,  272,  273,  274,  306,  276,  277,  278,  279,  280,
  304,  260,  283,  284,  285,  298,  261,  288,  303,  260,
  306,  292,  263,  264,  265,  266,  297,  298,  269,  270,
  305,  260,  306,  304,  303,  306,  307,  278,  309,  310,
  311,  312,  313,  314,  315,  316,  260,  261,  305,  303,
  321,  322,  323,  324,  268,  306,  306,  271,  272,  273,
  274,  305,  276,  277,  278,  279,  280,  306,  306,  283,
  284,  285,  305,   12,  288,   66,  260,   14,  292,  263,
  264,  265,  266,  297,  298,  269,  270,   17,   14,   37,
  304,   64,  306,  307,  278,  309,  310,  311,  312,  313,
  314,  315,  316,  260,  261,  215,  223,  321,  322,  323,
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
  269,  270,   -1,   -1,   -1,  304,   -1,  306,  307,   -1,
  309,  310,  311,  312,  313,  314,   -1,   -1,  260,  261,
   -1,   -1,  321,  322,  323,  324,  268,   -1,   -1,  271,
  272,  273,  274,   -1,  276,  277,  278,  279,  280,   -1,
   -1,  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,
  292,  317,  318,  319,  320,  297,  298,   -1,   -1,   -1,
   -1,   -1,  304,   -1,  306,  307,   -1,  309,  310,  311,
  312,  313,  314,   -1,   -1,   -1,   -1,   -1,   -1,  321,
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
  307,  315,  316,  317,  318,  319,  320,   -1,   -1,   -1,
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
  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,   -1,
  323,  324,  292,  260,  261,   -1,   -1,  297,   -1,   -1,
   -1,  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,
  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  288,   -1,  323,  324,  260,  261,   -1,   -1,   -1,
  297,  298,   -1,  268,   -1,   -1,  271,  272,  273,  274,
  260,  276,  277,  263,  264,  265,  266,  267,   -1,  269,
  270,   -1,  298,  288,   -1,   -1,  323,  324,  278,   -1,
   -1,  281,  297,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  320,   -1,   -1,   -1,   -1,  298,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  323,  324,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  320,  306,   -1,   -1,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,  321,  322,  306,
   -1,   -1,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  319,  320,  321,  322,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  320,
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
#line 328 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 713 "y_tab.c"
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
case 56:
#line 131 "lexico.y"
{if(yyvsp[-5].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 57:
#line 132 "lexico.y"
{if(yyvsp[-4].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 58:
#line 133 "lexico.y"
{if(yyvsp[-4].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 59:
#line 134 "lexico.y"
{if(yyvsp[-3].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 60:
#line 137 "lexico.y"
{if(yyvsp[-4].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 61:
#line 138 "lexico.y"
{if(yyvsp[-4].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 62:
#line 139 "lexico.y"
{if(yyvsp[-4].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 63:
#line 140 "lexico.y"
{if(yyvsp[-3].tipo != entero) printf("Error linea %d: Expresion en switch no es booleana",linea_actual);}
break;
case 64:
#line 143 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 72:
#line 157 "lexico.y"
{ if(yyvsp[-3].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 73:
#line 158 "lexico.y"
{ if(yyvsp[-1].tipo != booleano) printf("Error linea %d: Expresion en if no es booleana",linea_actual);}
break;
case 74:
#line 162 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
									  }
									}
break;
case 75:
#line 168 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 76:
#line 174 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 77:
#line 180 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 78:
#line 186 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 79:
#line 192 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
							   }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							   }
							}
break;
case 80:
#line 198 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 81:
#line 204 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 82:
#line 210 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 83:
#line 216 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
								  }
								}
break;
case 84:
#line 222 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 85:
#line 228 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\nError en la línea: %d. Expresión con tipos distintos\n",linea_actual);
							  }
							}
break;
case 86:
#line 234 "lexico.y"
{printf("\nENTERO: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 87:
#line 235 "lexico.y"
{yyval.tipo = yyvsp[-1].tipo;}
break;
case 88:
#line 236 "lexico.y"
{ if(yyvsp[0].tipo == booleano){
							yyval.tipo = booleano;
					   }else{
							printf("\nError linea: %d. Expresión con tipos distintos\n",linea_actual);
					   }
					}
break;
case 89:
#line 242 "lexico.y"
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
#line 254 "lexico.y"
{printf("\nREAL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 91:
#line 255 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 92:
#line 256 "lexico.y"
{printf("\nBOOL: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 93:
#line 257 "lexico.y"
{printf("\nCHAR: %s con TIPO: %d\n", yyvsp[0].cadena, yyvsp[0].tipo);}
break;
case 99:
#line 263 "lexico.y"
{printf("\nASIG: %s con TIPO: %d\n",yyvsp[-2].cadena, yyvsp[0].tipo);}
break;
case 100:
#line 266 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 101:
#line 267 "lexico.y"
{ if(yyvsp[-2].tipo != booleano) printf("Error linea %d: Expresion en while no es booleana",linea_actual);}
break;
case 111:
#line 283 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); imprimirTS();}
break;
#line 1105 "y_tab.c"
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
