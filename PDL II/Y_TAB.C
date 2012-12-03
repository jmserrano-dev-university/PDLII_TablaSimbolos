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
    0,    0,    0,    0,    0,  121,    0,   58,    0,    0,
   57,    0,  120,   69,  128,  129,    0,    0,    0,    0,
    0,   74,    0,    0,    0,    0,  119,  130,  131,  114,
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
  132,  133,  134,  135,  218,  219,  226,  136,  183,   83,
   84,   85,   86,  212,  192,  178,  203,   47,  137,  138,
  139,
};
short yysindex[] = {                                   1198,
    0,    0,    0,    0,    0,  -54,    0,    0, -240, -247,
    0,  669,    0, -181, -246, -261,  669, -224,    0,    0,
    0,    0,    0,    0, -160, -217,    0,    0,    0,    0,
    0, -246, -261,    0, -137, -261, -173,    0, -224,    0,
    0,    0,    0, -133, -164,    0, -117, -261,  -81,    0,
    0,    0, -203,    0, -126,    0,  -54, -115, -114,    0,
    0, -133, -180,  -73, -159,    0, -119,    0, -116,    0,
    0,    0,    0,    0,    0,  -99,  -98,  -94, -180, -180,
 -180, 1278,    0,    0,    0,    0,    0,    0,  -54, -119,
  549,    0, -180,  -57,  -55,  -90, 1115,    0,    0, -180,
 -180, -180, -180, -180, -180, -180, -180, -180, -180, -180,
 -180, -119,  -43,    0, -190,    0,  -42,  -77,  -75, -180,
  -72,  -51,  -47,    0,  586,    0, 1247,    0,    0,    0,
    0,    0,    0,    0,  -64,  766,    0,    0,    0, 1278,
  -41,  -37,    0,    0, 1062, 1062, 1062, 1062, 1062, 1062,
 -234, -234, -199, -199,    0,    0,    0,    0,  -36,  -18,
 -180,  145,  -19,   -4,    3,    0,  800,    0,    4,    7,
    0, -190,    0,    0,    0,    0,  -35, -180,  -29, 1138,
  834,    0,  -17,  -33, -152,  -23,    0,    0,    0,    0,
 1278,  -31,  -27,  676,    0,  868,  902,   17,  -26,   22,
    0, -180,    2, -254,    0,    0,    0,    0,    6,    0,
    0, -151, 1278,    8, -183,    5,    0, -252,   10,   13,
   14,   40,    0,    0,    0,   19, 1067, -183,    0,   18,
    0,    0,    0,    0,  935, 1067,   21,    0,   20,  968,
 1001,    0,   23,   26, 1034,    0,    0,   27,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  705,  720, 1216,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 1231, 1246,    0,    0, 1261,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -241,    0, 1276,    0,    0,
    0,    0,    0,    0, -172,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -147,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -153,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -245, 1088,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  620,
    0,    0,    0,    0,  205,  261,  317,  373,  429,  485,
   33,   89,  -83,  -25,    0,    0,    0,    0, 1099,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 1264,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  732,    0,    0,    0,    0,    0,    0,    0,
 -149,   29,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -146,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   30,    0,    0,    0,
    0,    0,    0,    0,    0,   31,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  315,    0,  319,   -6,  246,  323,   -5,  337,  322,
   61,  -14,  433,    0,   -2,    0,    0,  290,    0,  -63,
    0,    0,  -76,    0,    0,    0, -135,    0,    0,    0,
    0,    0,    0,    0,    0,  151,  135, -123, -143,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
#define YYTABLESIZE 1597
short yytable[] = {                                      82,
  174,  167,   41,   25,  215,    6,  228,   33,   36,   28,
   29,   40,   42,  114,   32,   97,   98,   99,   42,   26,
    6,   42,   42,   42,   42,   48,  182,   42,   42,  140,
  216,  174,  216,   51,   35,  157,  145,  146,  147,  148,
  149,  150,  151,  152,  153,  154,  155,  156,   27,  217,
  206,  229,    9,  208,   64,   45,  162,  196,  182,   93,
  174,  182,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,   93,   93,   38,  224,   46,   69,
   70,  108,  109,  110,  111,    6,  113,   71,   72,  225,
   73,   74,   75,   38,   76,   77,   38,  180,   10,   45,
  174,   61,   62,  236,  174,  159,   78,   35,   38,  174,
   41,  240,   93,   93,  191,   79,   93,  245,  110,  111,
   93,   93,   49,   93,   93,   93,   52,   93,   93,   93,
   93,   93,   39,   39,   93,   93,   93,   88,  213,   93,
   56,   80,   81,   93,  199,  221,   89,  116,   93,   93,
  115,   40,   40,  200,  222,   93,  116,   93,   93,  115,
   93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,   93,   93,   80,   80,   59,   60,
   63,   66,   67,   91,   80,   80,   87,   80,   80,   80,
   93,   80,   80,   80,   80,   80,   94,   95,   80,   80,
   80,   96,  141,   80,  142,    1,  143,   80,    2,    3,
    4,    5,   80,   80,    7,    8,  158,   26,  160,   80,
  161,   80,   80,  163,   80,   80,   80,   80,   80,   80,
   80,   80,   80,   80,   81,   81,   80,   80,   80,   80,
  171,  179,   81,   81,  164,   81,   81,   81,  165,   81,
   81,   81,   81,   81,  184,  175,   81,   81,   81,  176,
  177,   81,  186,  188,  185,   81,  189,  193,  197,  190,
   81,   81,  198,  201,  202,  204,  209,   81,  210,   81,
   81,  211,   81,   81,   81,   81,   81,   81,   81,   81,
   81,   81,   78,   78,   81,   81,   81,   81,  214,  234,
   78,   78,  220,   78,   78,   78,  227,   78,   78,   78,
   78,   78,  223,  231,   78,   78,   78,  232,  233,   78,
  235,  238,  241,   78,  242,  112,   31,  246,   78,   78,
  247,  249,   32,   72,   71,   78,  125,   78,   78,   39,
   78,   78,   78,   78,   78,   78,   78,   78,   79,   79,
   34,   68,   78,   78,   78,   78,   79,   79,   50,   79,
   79,   79,  237,   79,   79,   79,   79,   79,  230,    0,
   79,   79,   79,    0,    0,   79,    0,    0,    0,   79,
    0,    0,    0,    0,   79,   79,    0,    0,    0,    0,
    0,   79,    0,   79,   79,    0,   79,   79,   79,   79,
   79,   79,   79,   79,  172,   70,    0,    0,   79,   79,
   79,   79,   71,   72,    0,   73,   74,   75,    0,   76,
   77,  117,  118,  119,    0,    0,  120,  121,  122,    0,
    0,   78,   23,    0,    0,  123,    0,    0,    0,    0,
   79,    0,    0,    0,   23,    0,    0,  181,    0,   23,
   43,    0,  100,  101,  102,  103,  104,  105,  106,  107,
  108,  109,  110,  111,   84,   84,   80,   81,    0,    0,
    0,   43,   84,   84,    0,   84,   84,   84,    0,   84,
   84,   84,   84,   84,    0,    0,   84,   84,   84,    0,
    0,   84,    0,    0,    0,   84,    0,    0,    0,    0,
   84,   84,    0,    0,    0,    0,    0,   84,    0,   84,
   84,    0,   84,   84,   84,   84,   84,   84,    0,    0,
   85,   85,    0,    0,   84,   84,   84,   84,   85,   85,
    0,   85,   85,   85,    0,   85,   85,   85,   85,   85,
    0,    0,   85,   85,   85,    0,    0,   85,    0,    0,
    0,   85,    0,    0,    0,    0,   85,   85,    0,    0,
    0,    0,    0,   85,    0,   85,   85,    0,   85,   85,
   85,   85,   85,   85,    0,    0,   86,   86,    0,    0,
   85,   85,   85,   85,   86,   86,    0,   86,   86,   86,
    0,   86,   86,   86,   86,   86,    0,    0,   86,   86,
   86,    0,    0,   86,    0,    0,    0,   86,    0,    0,
    0,    0,   86,   86,    0,    0,    0,    0,    0,   86,
    0,   86,   86,    0,   86,   86,   86,   86,   86,   86,
    0,    0,   87,   87,    0,    0,   86,   86,   86,   86,
   87,   87,    0,   87,   87,   87,    0,   87,   87,   87,
   87,   87,    0,    0,   87,   87,   87,    0,    0,   87,
    0,    0,    0,   87,    0,    0,    0,    0,   87,   87,
    0,    0,    0,    0,    0,   87,    0,   87,   87,    0,
   87,   87,   87,   87,   87,   87,    0,    0,   88,   88,
    0,    0,   87,   87,   87,   87,   88,   88,    0,   88,
   88,   88,    0,   88,   88,   88,   88,   88,    0,    0,
   88,   88,   88,    0,    0,   88,    0,    0,    0,   88,
    0,    0,    0,    0,   88,   88,    0,    0,    0,    0,
    0,   88,    0,   88,   88,    0,   88,   88,   88,   88,
   88,   88,    0,    0,   89,   89,    0,    0,   88,   88,
   88,   88,   89,   89,    0,   89,   89,   89,    0,   89,
   89,   89,   89,   89,    0,    0,   89,   89,   89,    0,
    0,   89,    0,    0,    0,   89,    0,    0,    0,    0,
   89,   89,    0,    0,    0,    0,    0,   89,    0,   89,
   89,    0,   89,   89,   89,   89,   89,   89,    0,    0,
    0,    0,    0,    0,   89,   89,   89,   89,  115,   70,
    0,    2,    3,    4,    5,    0,   71,  116,    8,   73,
   74,   75,    0,   76,   77,  117,  118,  119,    0,    0,
  120,  121,  122,    0,    0,   78,    0,    0,    0,  123,
    0,    0,    0,    0,   79,  115,   70,    0,    2,    3,
    4,    5,  124,   71,  116,    8,   73,   74,   75,    0,
   76,   77,  117,  118,  119,    0,    0,  120,  121,  122,
   80,   81,   78,    0,    0,    0,  123,    0,    0,  103,
  103,   79,    0,    0,    0,    0,    0,  103,  103,  166,
  103,  103,  103,    0,  103,  103,  103,  103,  103,    0,
    0,  103,  103,  103,    0,    0,  103,   80,   81,    0,
  103,    0,    0,    0,    0,  103,  103,    0,    0,    0,
    0,    0,  103,    0,  103,  103,    0,    0,    1,    0,
    0,    2,    3,    4,    5,  172,   70,    7,    8,  103,
  103,  103,  103,   71,   72,    9,   73,   74,   75,    0,
   76,   77,  117,  118,  119,    0,    0,  120,  121,  122,
    0,    0,   78,    0,    7,    0,  123,    7,    7,    7,
    7,   79,    0,    7,    7,    0,    0,    0,  181,    8,
  205,    7,    8,    8,    8,    8,    0,    0,    8,    8,
    0,   77,   77,   77,    0,    0,    8,   80,   81,   77,
   77,    0,   77,   77,   77,    0,   77,   77,   77,   77,
   77,    0,    0,   77,   77,   77,    0,    0,   77,    0,
    0,    0,   77,    0,    0,  172,   70,   77,    0,    0,
    0,    0,    0,   71,   72,   77,   73,   74,   75,    0,
   76,   77,  117,  118,  119,    0,    0,  120,  121,  122,
    0,    0,   78,   77,   77,    0,  123,    0,    0,  172,
   70,   79,    0,    0,    0,    0,    0,   71,   72,  173,
   73,   74,   75,    0,   76,   77,  117,  118,  119,    0,
    0,  120,  121,  122,    0,    0,   78,   80,   81,    0,
  123,    0,    0,  172,   70,   79,    0,    0,    0,    0,
    0,   71,   72,  187,   73,   74,   75,    0,   76,   77,
  117,  118,  119,    0,    0,  120,  121,  122,    0,    0,
   78,   80,   81,    0,  123,    0,    0,  172,   70,   79,
    0,    0,    0,    0,    0,   71,   72,  195,   73,   74,
   75,    0,   76,   77,  117,  118,  119,    0,    0,  120,
  121,  122,    0,    0,   78,   80,   81,    0,  123,    0,
    0,  172,   70,   79,    0,    0,    0,    0,    0,   71,
   72,  207,   73,   74,   75,    0,   76,   77,  117,  118,
  119,    0,    0,  120,  121,  122,    0,    0,   78,   80,
   81,    0,  123,    0,  172,   70,  239,   79,    0,    0,
    0,    0,   71,   72,  181,   73,   74,   75,    0,   76,
   77,  117,  118,  119,    0,    0,  120,  121,  122,    0,
    0,   78,    0,   80,   81,  123,    0,  172,   70,  243,
   79,    0,    0,    0,    0,   71,   72,    0,   73,   74,
   75,    0,   76,   77,  117,  118,  119,    0,    0,  120,
  121,  122,    0,    0,   78,    0,   80,   81,  123,    0,
  172,   70,  244,   79,    0,    0,    0,    0,   71,   72,
    0,   73,   74,   75,    0,   76,   77,  117,  118,  119,
    0,    0,  120,  121,  122,    0,    0,   78,    0,   80,
   81,  123,    0,  172,   70,  248,   79,    0,    0,    0,
    0,   71,   72,    0,   73,   74,   75,    0,   76,   77,
  117,  118,  119,    0,    0,  120,  121,  122,    0,    0,
   78,    0,   80,   81,  123,    0,  172,   70,    0,   79,
    0,    0,    0,    0,   71,   72,    0,   73,   74,   75,
    0,   76,   77,  117,  118,  119,    0,   34,  120,  121,
  122,    0,    0,   78,    0,   80,   81,  123,  111,  111,
    0,    0,   79,    0,    0,    0,  111,  111,    0,  111,
  111,  111,    0,  111,  111,  106,  107,  108,  109,  110,
  111,    0,    0,    0,    0,  111,    0,    0,   80,   81,
    0,    0,   98,    0,  111,   98,   98,   98,   98,   98,
   98,   98,   98,   98,   98,   98,   98,   98,   98,    0,
    0,  144,    0,    0,    0,    0,    0,    0,    0,    0,
  111,  111,  100,  101,  102,  103,  104,  105,  106,  107,
  108,  109,  110,  111,  194,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  100,  101,  102,  103,  104,
  105,  106,  107,  108,  109,  110,  111,    1,    0,    0,
    2,    3,    4,    5,    6,    0,    7,    8,    0,    0,
    0,    0,    0,    0,    9,    9,    0,   10,    9,    9,
    9,    9,    0,    0,    9,    9,    0,    0,    0,    0,
    6,    0,    9,    6,    6,    6,    6,    0,    0,    6,
    6,    0,    0,    0,    0,    5,    0,    6,    5,    5,
    5,    5,    0,    0,    5,    5,    0,    0,    0,    0,
    4,    0,    5,    4,    4,    4,    4,    0,    0,    4,
    4,    0,    0,    0,    0,    3,    0,    4,    3,    3,
    3,    3,    0,    0,    3,    3,    0,    0,    0,    0,
    0,  168,    3,    0,  100,  101,  102,  103,  104,  105,
  106,  107,  108,  109,  110,  111,  169,  170,   93,    0,
    0,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,   93,  100,  101,  102,  103,  104,
  105,  106,  107,  108,  109,  110,  111,
};
short yycheck[] = {                                      63,
  136,  125,   17,    6,  259,  267,  259,   14,   15,  257,
  258,   17,   18,   90,  260,   79,   80,   81,  260,  260,
  267,  263,  264,  265,  266,   32,  162,  269,  270,   93,
  285,  167,  285,   39,  281,  112,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,  289,  304,
  194,  304,  277,  197,   57,  297,  120,  181,  194,  305,
  196,  197,  308,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  320,  321,   16,  261,  296,  260,
  261,  316,  317,  318,  319,  267,   89,  268,  269,  273,
  271,  272,  273,   33,  275,  276,   36,  161,  280,  260,
  236,  305,  306,  227,  240,  296,  287,  281,   48,  245,
  125,  235,  260,  261,  178,  296,  307,  241,  318,  319,
  268,  269,  260,  271,  272,  273,  260,  275,  276,  277,
  278,  279,  305,  306,  282,  283,  284,  297,  202,  287,
  305,  322,  323,  291,  297,  297,  306,  297,  296,  297,
  297,  305,  306,  306,  306,  303,  306,  305,  306,  306,
  308,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  321,  322,  323,  260,  261,  296,  261,
  307,  297,  297,  303,  268,  269,  260,  271,  272,  273,
  307,  275,  276,  277,  278,  279,  296,  296,  282,  283,
  284,  296,  260,  287,  260,  260,  297,  291,  263,  264,
  265,  266,  296,  297,  269,  270,  260,  260,  296,  303,
  296,  305,  306,  296,  308,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  260,  261,  320,  321,  322,  323,
  305,  260,  268,  269,  296,  271,  272,  273,  296,  275,
  276,  277,  278,  279,  274,  297,  282,  283,  284,  297,
  297,  287,  260,  260,  269,  291,  260,  297,  286,  305,
  296,  297,  306,  297,  306,  303,  260,  303,  305,  305,
  306,  260,  308,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  260,  261,  320,  321,  322,  323,  297,  260,
  268,  269,  297,  271,  272,  273,  302,  275,  276,  277,
  278,  279,  305,  304,  282,  283,  284,  305,  305,  287,
  302,  304,  302,  291,  305,  297,   12,  305,  296,  297,
  305,  305,   14,  304,  304,  303,   91,  305,  306,   17,
  308,  309,  310,  311,  312,  313,  314,  315,  260,  261,
   14,   62,  320,  321,  322,  323,  268,  269,   37,  271,
  272,  273,  228,  275,  276,  277,  278,  279,  218,   -1,
  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,
   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,   -1,   -1,
   -1,  303,   -1,  305,  306,   -1,  308,  309,  310,  311,
  312,  313,  314,  315,  260,  261,   -1,   -1,  320,  321,
  322,  323,  268,  269,   -1,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,
   -1,  287,    0,   -1,   -1,  291,   -1,   -1,   -1,   -1,
  296,   -1,   -1,   -1,   12,   -1,   -1,  303,   -1,   17,
   18,   -1,  308,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  260,  261,  322,  323,   -1,   -1,
   -1,   39,  268,  269,   -1,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,
   -1,  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,
  296,  297,   -1,   -1,   -1,   -1,   -1,  303,   -1,  305,
  306,   -1,  308,  309,  310,  311,  312,  313,   -1,   -1,
  260,  261,   -1,   -1,  320,  321,  322,  323,  268,  269,
   -1,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,   -1,
   -1,  291,   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,
   -1,   -1,   -1,  303,   -1,  305,  306,   -1,  308,  309,
  310,  311,  312,  313,   -1,   -1,  260,  261,   -1,   -1,
  320,  321,  322,  323,  268,  269,   -1,  271,  272,  273,
   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,  283,
  284,   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,   -1,
   -1,   -1,  296,  297,   -1,   -1,   -1,   -1,   -1,  303,
   -1,  305,  306,   -1,  308,  309,  310,  311,  312,  313,
   -1,   -1,  260,  261,   -1,   -1,  320,  321,  322,  323,
  268,  269,   -1,  271,  272,  273,   -1,  275,  276,  277,
  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,
   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,  297,
   -1,   -1,   -1,   -1,   -1,  303,   -1,  305,  306,   -1,
  308,  309,  310,  311,  312,  313,   -1,   -1,  260,  261,
   -1,   -1,  320,  321,  322,  323,  268,  269,   -1,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,
  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,
   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,   -1,   -1,
   -1,  303,   -1,  305,  306,   -1,  308,  309,  310,  311,
  312,  313,   -1,   -1,  260,  261,   -1,   -1,  320,  321,
  322,  323,  268,  269,   -1,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,
   -1,  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,
  296,  297,   -1,   -1,   -1,   -1,   -1,  303,   -1,  305,
  306,   -1,  308,  309,  310,  311,  312,  313,   -1,   -1,
   -1,   -1,   -1,   -1,  320,  321,  322,  323,  260,  261,
   -1,  263,  264,  265,  266,   -1,  268,  269,  270,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,
  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,
   -1,   -1,   -1,   -1,  296,  260,  261,   -1,  263,  264,
  265,  266,  304,  268,  269,  270,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
  322,  323,  287,   -1,   -1,   -1,  291,   -1,   -1,  260,
  261,  296,   -1,   -1,   -1,   -1,   -1,  268,  269,  304,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,   -1,   -1,  287,  322,  323,   -1,
  291,   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,   -1,
   -1,   -1,  303,   -1,  305,  306,   -1,   -1,  260,   -1,
   -1,  263,  264,  265,  266,  260,  261,  269,  270,  320,
  321,  322,  323,  268,  269,  277,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
   -1,   -1,  287,   -1,  260,   -1,  291,  263,  264,  265,
  266,  296,   -1,  269,  270,   -1,   -1,   -1,  303,  260,
  305,  277,  263,  264,  265,  266,   -1,   -1,  269,  270,
   -1,  260,  261,  262,   -1,   -1,  277,  322,  323,  268,
  269,   -1,  271,  272,  273,   -1,  275,  276,  277,  278,
  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,
   -1,   -1,  291,   -1,   -1,  260,  261,  296,   -1,   -1,
   -1,   -1,   -1,  268,  269,  304,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
   -1,   -1,  287,  322,  323,   -1,  291,   -1,   -1,  260,
  261,  296,   -1,   -1,   -1,   -1,   -1,  268,  269,  304,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,   -1,   -1,  287,  322,  323,   -1,
  291,   -1,   -1,  260,  261,  296,   -1,   -1,   -1,   -1,
   -1,  268,  269,  304,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,
  287,  322,  323,   -1,  291,   -1,   -1,  260,  261,  296,
   -1,   -1,   -1,   -1,   -1,  268,  269,  304,  271,  272,
  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,
  283,  284,   -1,   -1,  287,  322,  323,   -1,  291,   -1,
   -1,  260,  261,  296,   -1,   -1,   -1,   -1,   -1,  268,
  269,  304,  271,  272,  273,   -1,  275,  276,  277,  278,
  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,  322,
  323,   -1,  291,   -1,  260,  261,  262,  296,   -1,   -1,
   -1,   -1,  268,  269,  303,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,
   -1,  287,   -1,  322,  323,  291,   -1,  260,  261,  262,
  296,   -1,   -1,   -1,   -1,  268,  269,   -1,  271,  272,
  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,
  283,  284,   -1,   -1,  287,   -1,  322,  323,  291,   -1,
  260,  261,  262,  296,   -1,   -1,   -1,   -1,  268,  269,
   -1,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,  322,
  323,  291,   -1,  260,  261,  262,  296,   -1,   -1,   -1,
   -1,  268,  269,   -1,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,
  287,   -1,  322,  323,  291,   -1,  260,  261,   -1,  296,
   -1,   -1,   -1,   -1,  268,  269,   -1,  271,  272,  273,
   -1,  275,  276,  277,  278,  279,   -1,  260,  282,  283,
  284,   -1,   -1,  287,   -1,  322,  323,  291,  260,  261,
   -1,   -1,  296,   -1,   -1,   -1,  268,  269,   -1,  271,
  272,  273,   -1,  275,  276,  314,  315,  316,  317,  318,
  319,   -1,   -1,   -1,   -1,  287,   -1,   -1,  322,  323,
   -1,   -1,  305,   -1,  296,  308,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  320,  321,   -1,
   -1,  297,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  322,  323,  308,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  297,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  308,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  260,   -1,   -1,
  263,  264,  265,  266,  267,   -1,  269,  270,   -1,   -1,
   -1,   -1,   -1,   -1,  277,  260,   -1,  280,  263,  264,
  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,   -1,
  260,   -1,  277,  263,  264,  265,  266,   -1,   -1,  269,
  270,   -1,   -1,   -1,   -1,  260,   -1,  277,  263,  264,
  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,   -1,
  260,   -1,  277,  263,  264,  265,  266,   -1,   -1,  269,
  270,   -1,   -1,   -1,   -1,  260,   -1,  277,  263,  264,
  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,   -1,
   -1,  305,  277,   -1,  308,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,  321,  305,   -1,
   -1,  308,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  319,  320,  321,  308,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,
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
#line 541 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 748 "y_tab.c"
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
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == cadena)){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									  }
									}
break;
case 79:
#line 316 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
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
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
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
		/*printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);*/
	   }else{
		if((tipoAux = existeEntrada(yyvsp[0].cadena)) != 0){
			yyval.tipo = tipoAux;
			/*printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);*/
		}else{
			printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
			
		}
	   }
     }
break;
case 103:
#line 423 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-2].cadena)) != 0){
						yyval.tipo = tipoAux;
						/*printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);*/
					   }else{
						if((tipoAux = existeEntrada(yyvsp[-2].cadena)) != 0){
						 yyval.tipo = tipoAux;
						 /*printf("\nID: %s con TIPO: %d\n",$1.cadena, $$.tipo);*/
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
#line 445 "lexico.y"
{ if(yyvsp[-2].tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
break;
case 105:
#line 446 "lexico.y"
{ if(yyvsp[-2].tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
break;
case 111:
#line 459 "lexico.y"
{  if(existeEntrada(yyvsp[-1].cadena) != sinTipo){
							printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
							
						 }
						 
					  }
break;
case 112:
#line 464 "lexico.y"
{	if(compruebaNumeroParametros(yyvsp[-3].cadena, numParametros) == 0){ /*Error en tipo*/
												printf("\n\n* Error linea %d: El numero de parametros no coindicen en la llamada al procedimiento", linea_actual);
												
											}		
									   }
break;
case 114:
#line 470 "lexico.y"
{ if(existeEntrada(yyvsp[-3].cadena) != sinTipo){
					  printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
					  
				   }
				 }
break;
case 115:
#line 477 "lexico.y"
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
#line 488 "lexico.y"
{numParametros = 1; if(compruebaParametroProcedimiento(yyvsp[-2].cadena, yyvsp[0].tipo, numParametros) == 0){
									printf("\n\n* Error linea: %d: Parametro del procedimiento no coinciden en tipo", linea_actual);
									
								}
			}
break;
case 117:
#line 495 "lexico.y"
{pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); /*imprimirTS();*/}
break;
case 118:
#line 495 "lexico.y"
{borrarHastaMarcaTS(); /*imprimirTS();*/}
break;
#line 1380 "y_tab.c"
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
