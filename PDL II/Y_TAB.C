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
	int linea_actual = 1;	 /*Almacena la línea por la que vamos*/
	tDato tipoAux; 			 /*Almacenamos el tipo para las declaraciones de VARIABLES*/
	int numParametros;		 /*Número de parámetros para los procedimientos*/
	int linea_if;			 /*Línea que nos indica la linea de la cabecera del id*/
	int linea_aux;			 /*Línea actual auxiliar para el if*/
	int contadorErrores = 0; /*Contador de errores*/

	/* Se debe modificar la implementación la función yyerror. En este caso simplemente se escribe el mensaje en pantalla, por lo que habrá que añadir previamente la declaración de la variable global asociada al número de línea (declarada en la práctica anterior en el fichero fuente del flex) y modificar yyerror para que se muestre dicho número de línea */
	void yyerror (char *msg){
		char buffer[50];
		sprintf(buffer,"%s %d",msg,linea_actual);
		fprintf(stderr, "\n");
		fprintf(stderr,buffer);
	}

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
   36,   36,   40,   39,   41,   39,   42,   39,   43,   29,
   29,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   30,   30,   32,
   32,   48,   48,   31,   50,   51,   33,   33,   49,   49,
   52,    8,   23,   23,   23,   23,   34,   34,   34,   44,
   55,   46,   47,   53,   54,   45,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    1,    2,    1,
    2,    1,    2,    1,    1,    3,    4,    1,    1,    1,
    1,    1,    1,    1,    0,    4,    3,    1,    1,    3,
    1,    0,    0,    8,    0,    0,    7,    4,    2,    1,
    1,    1,    1,    1,    1,    1,    2,    2,    8,    7,
    7,    6,    7,    6,    6,    5,    1,    1,    2,    1,
    3,    2,    0,    4,    0,    2,    0,    3,    0,    6,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    1,    3,    2,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    3,    5,    5,    7,
    5,    3,    1,    7,    0,    0,    7,    4,    3,    1,
    0,    6,    4,    3,    3,    2,    1,    1,    1,    3,
    4,    4,    4,    3,    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
   18,   20,   22,   35,    0,    0,  121,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,    0,    0,    0,    0,    0,    0,   16,
   10,   41,    0,   38,    0,   27,    0,    0,    0,   26,
   36,    0,    0,    0,    0,   46,    0,   37,    0,   94,
   98,  102,   99,  100,  101,    0,    0,    0,    0,    0,
    0,    0,  103,  104,  105,  106,   49,   43,    0,    0,
    0,  122,    0,    0,    0,    0,    0,  136,   96,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   47,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  126,    0,   55,    0,   70,   50,   51,
   52,   53,   54,   56,    0,    0,  127,  128,  129,    0,
    0,    0,  130,   95,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   86,   87,   44,   48,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  125,    0,   58,
   57,    0,  124,   69,  132,  133,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  123,  118,
    0,    0,    0,    0,    0,    0,   79,   76,    0,    0,
    0,  131,    0,    0,    0,  109,  108,    0,   78,    0,
    0,  111,  113,    0,    0,    0,    0,    0,   62,    0,
    0,   74,   80,    0,    0,    0,  117,   67,   68,    0,
    0,    0,   61,    0,   60,  114,  110,  112,    0,    0,
    0,   59,    0,    0,    0,   66,    0,    0,    0,   64,
   65,    0,   63,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  126,   30,   24,   53,   44,   54,   55,  127,
   65,   57,   92,  112,   58,   90,  128,  129,  130,  131,
  132,  133,  134,  135,  220,  221,  230,  136,  184,  195,
  185,  196,  210,   83,   84,   85,   86,  214,  192,  178,
  204,   47,  137,  138,  139,
};
short yysindex[] = {                                   1089,
    0,    0,    0,    0,    0,   -1,    0,    0, -236, -238,
    0,  599,    0, -255, -179, -259,  599, -262,    0,    0,
    0,    0,    0,    0, -237, -260,    0,    0,    0,    0,
    0, -179, -259,    0, -206, -259, -223,    0, -262,    0,
    0,    0,    0, -161, -211,    0, -200, -259, -107,    0,
    0,    0, -168,    0, -175,    0,   -1, -141, -138,    0,
    0, -161,  981,  -74, -205,    0, -124,    0, -115,    0,
    0,    0,    0,    0,    0,  -96,  -95,  -94,  981,  -56,
  981, 1210,    0,    0,    0,    0,    0,    0,   -1, -124,
  484,    0,  981,  -55,  -46,  -78, 1002,    0,    0,  981,
  981,  981,  981,  981,  981,  981,  981,  981,  981,  981,
  981, -124,  -44,    0, -114,    0,  -28,  -60,  -59,  981,
  -52,  -45,  -41,    0,  521,    0, 1183,    0,    0,    0,
    0,    0,    0,    0,  -72,  645,    0,    0,    0, 1210,
  -57,  -47,    0,    0,  421,  421,  421,  421,  421,  421,
 -106, -106, -166, -166,    0,    0,    0,    0,  -39,  981,
  981,   11,  981, 1168,  -18,   -9,   12,    0,  679,    0,
    0, -114,    0,    0,    0,    0,  -35,  981, 1210, 1210,
  -23, 1029,    0,    4,  916,  -29, -202,   -6,    0,    0,
 1210,  -12,   -8, -212,  916,    5,    0,    0,   38,   -3,
   48,    0,  981,   16, -253,    0,    0,  713,    0,   13,
   17,    0,    0, -187, 1210,   15, -244,   19,    0, -252,
   14,    0,    0,   18,   21,   57,    0,    0,    0,   20,
  916, -244,    0,   23,    0,    0,    0,    0,  750,  916,
   26,    0,   24,  783,  816,    0,   25,   27,  849,    0,
    0,   30,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, 1107, 1122, 1137,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, 1152, 1167,    0,    0, 1182,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -119,    0, 1197,    0,    0,
    0,    0,    0,    0, -129,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -148,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -108,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -249, -234,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  555,
    0,    0,    0,    0,  140,  196,  252,  308,  364,  420,
   28,   84,  -88,  -30,    0,    0,    0,    0, 1013,    0,
    0,    0,    0,  949,    0,    0,    0,    0,    0,    0,
    0, 1198,    0,    0,    0,    0,    0,    0,   41,   42,
    0,    0,  882,  611,    0,    0,    0,    0,    0,    0,
 -180,   51,    0,  949,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  949,
    0,    0,    0,    0, -164,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   45,    0,    0,    0,    0,    0,    0,    0,    0,   50,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  346,    0,  350,   75,  274,  352,   -4,  356,  335,
   70,  -14,   10,    0,   -2,    0,    0,  311,    0,  -63,
    0,    0,  -81,    0,    0,    0, -135,    0,    0,    0,
    0,    0,    0,    0,    0,  154,  144, -123, -189,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 1529
short yytable[] = {                                      82,
  174,  169,   41,   25,  207,  217,  232,    6,  114,   23,
   32,    6,   40,   42,    9,   97,  228,   99,   28,   29,
  223,   23,   45,   26,   10,   34,   23,   43,  229,  140,
  157,  218,  218,  174,   51,   46,  145,  146,  147,  148,
  149,  150,  151,  152,  153,  154,  155,  156,   43,  198,
  219,  233,   27,   49,   64,   97,  164,   35,   97,   97,
   97,   97,   97,   97,   97,   97,   97,   97,   97,   97,
  102,  208,  174,  102,  102,  102,  102,  102,  102,  102,
  102,  102,  102,  102,  102,   38,  113,    6,   33,   36,
  183,   88,  206,   56,  200,   59,  179,  180,   52,  182,
   89,   35,   38,  201,  174,   38,   48,  240,  174,  225,
   41,   97,   97,  174,  191,  244,  120,   38,  226,   97,
   97,  249,   97,   97,   97,  120,   97,   97,   97,   97,
   97,   63,  119,   97,   97,   97,   61,   62,   97,  215,
   42,  119,   97,   42,   42,   42,   42,   97,   97,   42,
   42,  110,  111,   60,   97,   66,   97,   97,   67,   97,
   97,   97,   97,   97,   97,   97,   97,   97,   97,   97,
   97,   84,   84,   97,   97,   39,   39,   45,   91,   84,
   84,  159,   84,   84,   84,   87,   84,   84,   84,   84,
   84,   93,   93,   84,   84,   84,   40,   40,   84,   94,
   95,   96,   84,   98,  141,  160,  161,   84,   84,  108,
  109,  110,  111,  142,   84,  158,   84,   84,  143,   84,
   84,   84,   84,   84,   84,   84,   84,   84,   84,   85,
   85,   26,  171,   84,   84,  162,  163,   85,   85,  175,
   85,   85,   85,  165,   85,   85,   85,   85,   85,  176,
  166,   85,   85,   85,  167,  186,   85,  177,    1,  187,
   85,    2,    3,    4,    5,   85,   85,    7,    8,  190,
  181,  188,   85,  193,   85,   85,  199,   85,   85,   85,
   85,   85,   85,   85,   85,   85,   85,   82,   82,  197,
  202,   85,   85,  203,  205,   82,   82,  211,   82,   82,
   82,  212,   82,   82,   82,   82,   82,  213,  209,   82,
   82,   82,  216,  224,   82,  183,  238,  235,   82,  227,
  231,  239,  236,   82,   82,  237,  242,  245,  246,  250,
   82,  251,   82,   82,  253,   82,   82,   82,   82,   82,
   82,   82,   82,   83,   83,  134,  135,  116,   72,   82,
   82,   83,   83,   71,   83,   83,   83,   31,   83,   83,
   83,   83,   83,   32,  125,   83,   83,   83,   39,   34,
   83,   50,   68,  234,   83,  241,    0,    0,    0,   83,
   83,    0,    0,    0,    0,    0,   83,    0,   83,   83,
    0,   83,   83,   83,   83,   83,   83,   83,   83,   88,
   88,    0,    0,    0,    0,   83,   83,   88,   88,    0,
   88,   88,   88,    0,   88,   88,   88,   88,   88,    0,
    0,   88,   88,   88,    0,    0,   88,    0,    0,    0,
   88,    0,    0,    0,    0,   88,   88,    0,    0,    0,
    0,    0,   88,    0,   88,   88,    0,   88,   88,   88,
   88,   88,   88,    0,    0,   89,   89,    0,    0,    0,
    0,   88,   88,   89,   89,    0,   89,   89,   89,    0,
   89,   89,   89,   89,   89,    0,    0,   89,   89,   89,
    0,    0,   89,    0,    0,    0,   89,    0,    0,    0,
    0,   89,   89,    0,    0,    0,    0,    0,   89,    0,
   89,   89,    0,   89,   89,   89,   89,   89,   89,    0,
    0,   90,   90,    0,    0,    0,    0,   89,   89,   90,
   90,    0,   90,   90,   90,    0,   90,   90,   90,   90,
   90,    0,    0,   90,   90,   90,    0,    0,   90,    0,
    0,    0,   90,    0,    0,    0,    0,   90,   90,    0,
    0,    0,    0,    0,   90,    0,   90,   90,    0,   90,
   90,   90,   90,   90,   90,    0,    0,   91,   91,    0,
    0,    0,    0,   90,   90,   91,   91,    0,   91,   91,
   91,    0,   91,   91,   91,   91,   91,    0,    0,   91,
   91,   91,    0,    0,   91,    0,    0,    0,   91,    0,
    0,    0,    0,   91,   91,    0,    0,    0,    0,    0,
   91,    0,   91,   91,    0,   91,   91,   91,   91,   91,
   91,    0,    0,   92,   92,    0,    0,    0,    0,   91,
   91,   92,   92,    0,   92,   92,   92,    0,   92,   92,
   92,   92,   92,    0,    0,   92,   92,   92,    0,    0,
   92,    0,    0,    0,   92,    0,    0,    0,    0,   92,
   92,    0,    0,    0,    0,    0,   92,    0,   92,   92,
    0,   92,   92,   92,   92,   92,   92,    0,    0,   93,
   93,    0,    0,    0,    0,   92,   92,   93,   93,    0,
   93,   93,   93,    0,   93,   93,   93,   93,   93,    0,
    0,   93,   93,   93,    0,    0,   93,    0,    0,    0,
   93,    0,    0,    0,    0,   93,   93,    0,    0,    0,
    0,    0,   93,    0,   93,   93,    0,   93,   93,   93,
   93,   93,   93,    0,  106,  107,  108,  109,  110,  111,
    0,   93,   93,  115,   70,    0,    2,    3,    4,    5,
    0,   71,  116,    8,   73,   74,   75,    0,   76,   77,
  117,  118,  119,    0,    0,  120,  121,  122,    0,    0,
   78,    0,    0,    0,  123,    0,    0,    0,    0,   79,
  115,   70,    0,    2,    3,    4,    5,  124,   71,  116,
    8,   73,   74,   75,    0,   76,   77,  117,  118,  119,
    0,    0,  120,  121,  122,   80,   81,   78,    0,    0,
    0,  123,    0,    0,  107,  107,   79,    0,    0,    0,
    0,    0,  107,  107,  168,  107,  107,  107,    0,  107,
  107,  107,  107,  107,    0,    0,  107,  107,  107,    0,
    0,  107,   80,   81,    0,  107,    0,    0,    0,    0,
  107,  107,    0,    0,    0,    0,    0,  107,    1,  107,
  107,    2,    3,    4,    5,    0,    0,    7,    8,    0,
   81,   81,   81,    0,    0,    9,  107,  107,   81,   81,
    0,   81,   81,   81,    0,   81,   81,   81,   81,   81,
    0,    0,   81,   81,   81,    0,    0,   81,    0,    0,
    0,   81,    0,    0,  172,   70,   81,    0,    0,    0,
    0,    0,   71,   72,   81,   73,   74,   75,    0,   76,
   77,  117,  118,  119,    0,    0,  120,  121,  122,    0,
    0,   78,   81,   81,    0,  123,    0,    0,  172,   70,
   79,    0,    0,    0,    0,    0,   71,   72,  173,   73,
   74,   75,    0,   76,   77,  117,  118,  119,    0,    0,
  120,  121,  122,    0,    0,   78,   80,   81,    0,  123,
    0,    0,  172,   70,   79,    0,    0,    0,    0,    0,
   71,   72,  189,   73,   74,   75,    0,   76,   77,  117,
  118,  119,    0,    0,  120,  121,  122,    0,    0,   78,
   80,   81,    0,  123,    0,    0,    0,    0,   79,  172,
   70,  243,    0,    0,    0,    0,  222,   71,   72,    0,
   73,   74,   75,    0,   76,   77,  117,  118,  119,    0,
    0,  120,  121,  122,   80,   81,   78,    0,    0,    0,
  123,    0,  172,   70,  247,   79,    0,    0,    0,    0,
   71,   72,    0,   73,   74,   75,    0,   76,   77,  117,
  118,  119,    0,    0,  120,  121,  122,    0,    0,   78,
    0,   80,   81,  123,    0,  172,   70,  248,   79,    0,
    0,    0,    0,   71,   72,    0,   73,   74,   75,    0,
   76,   77,  117,  118,  119,    0,    0,  120,  121,  122,
    0,    0,   78,    0,   80,   81,  123,    0,  172,   70,
  252,   79,    0,    0,    0,    0,   71,   72,    0,   73,
   74,   75,    0,   76,   77,  117,  118,  119,    0,    0,
  120,  121,  122,    0,    0,   78,    0,   80,   81,  123,
    0,   73,   73,    0,   79,    0,    0,    0,    0,   73,
   73,    0,   73,   73,   73,    0,   73,   73,   73,   73,
   73,    0,    0,   73,   73,   73,    0,    0,   73,    0,
   80,   81,   73,    0,    0,  172,   70,   73,    0,    0,
    0,    0,    0,   71,   72,   77,   73,   74,   75,    0,
   76,   77,  117,  118,  119,    0,    0,  120,  121,  122,
    0,    0,   78,   73,   73,    0,  123,    0,   75,   75,
    0,   79,    0,    0,    0,    0,   75,   75,    0,   75,
   75,   75,    0,   75,   75,   75,   75,   75,    0,    0,
   75,   75,   75,    0,    0,   75,    0,   80,   81,   75,
   69,   70,    0,    0,   75,    0,    0,    0,   71,   72,
    0,   73,   74,   75,    0,   76,   77,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   78,    0,    0,
   75,   75,  115,  115,    0,    0,   79,    0,    0,    0,
  115,  115,    0,  115,  115,  115,    0,  115,  115,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  144,  115,
    0,    0,   80,   81,    0,    0,    0,    0,  115,  100,
  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
  111,    0,    0,    0,    0,  194,    0,    0,    0,    0,
    0,    0,    0,    0,  115,  115,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,    1,    0,
    0,    2,    3,    4,    5,    6,    0,    7,    8,    0,
    0,    0,    0,    0,    0,    9,    7,    0,   10,    7,
    7,    7,    7,    0,    0,    7,    7,    0,    0,    0,
    0,    8,    0,    7,    8,    8,    8,    8,    0,    0,
    8,    8,    0,    0,    0,    0,    9,    0,    8,    9,
    9,    9,    9,    0,    0,    9,    9,    0,    0,    0,
    0,    6,    0,    9,    6,    6,    6,    6,    0,    0,
    6,    6,    0,    0,    0,    0,    5,    0,    6,    5,
    5,    5,    5,    0,    0,    5,    5,    0,    0,    0,
    0,    4,    0,    5,    4,    4,    4,    4,    0,    0,
    4,    4,    0,    0,    0,    0,    3,    0,    4,    3,
    3,    3,    3,    0,    0,    3,    3,    0,    0,    0,
  183,    0,    0,    3,    0,  100,  101,  102,  103,  104,
  105,  106,  107,  108,  109,  110,  111,  170,    0,    0,
  100,  101,  102,  103,  104,  105,  106,  107,  108,  109,
  110,  111,   97,    0,    0,   97,   97,   97,   97,   97,
   97,   97,   97,   97,   97,   97,   97,  100,  101,  102,
  103,  104,  105,  106,  107,  108,  109,  110,  111,
};
short yycheck[] = {                                      63,
  136,  125,   17,    6,  194,  259,  259,  267,   90,    0,
  260,  267,   17,   18,  277,   79,  261,   81,  257,  258,
  210,   12,  260,  260,  280,  260,   17,   18,  273,   93,
  112,  285,  285,  169,   39,  296,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,   39,  185,
  304,  304,  289,  260,   57,  305,  120,  281,  308,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  319,
  305,  195,  208,  308,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,   16,   89,  267,   14,   15,
  303,  297,  305,  305,  297,  296,  160,  161,  260,  163,
  306,  281,   33,  306,  240,   36,   32,  231,  244,  297,
  125,  260,  261,  249,  178,  239,  297,   48,  306,  268,
  269,  245,  271,  272,  273,  306,  275,  276,  277,  278,
  279,  307,  297,  282,  283,  284,  305,  306,  287,  203,
  260,  306,  291,  263,  264,  265,  266,  296,  297,  269,
  270,  318,  319,  261,  303,  297,  305,  306,  297,  308,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  260,  261,  322,  323,  305,  306,  297,  303,  268,
  269,  296,  271,  272,  273,  260,  275,  276,  277,  278,
  279,  307,  307,  282,  283,  284,  305,  306,  287,  296,
  296,  296,  291,  260,  260,  320,  321,  296,  297,  316,
  317,  318,  319,  260,  303,  260,  305,  306,  297,  308,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  260,
  261,  260,  305,  322,  323,  296,  296,  268,  269,  297,
  271,  272,  273,  296,  275,  276,  277,  278,  279,  297,
  296,  282,  283,  284,  296,  274,  287,  297,  260,  269,
  291,  263,  264,  265,  266,  296,  297,  269,  270,  305,
  260,  260,  303,  297,  305,  306,  306,  308,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  260,  261,  286,
  297,  322,  323,  306,  303,  268,  269,  260,  271,  272,
  273,  305,  275,  276,  277,  278,  279,  260,  304,  282,
  283,  284,  297,  297,  287,  303,  260,  304,  291,  305,
  302,  302,  305,  296,  297,  305,  304,  302,  305,  305,
  303,  305,  305,  306,  305,  308,  309,  310,  311,  312,
  313,  314,  315,  260,  261,  305,  305,  297,  304,  322,
  323,  268,  269,  304,  271,  272,  273,   12,  275,  276,
  277,  278,  279,   14,   91,  282,  283,  284,   17,   14,
  287,   37,   62,  220,  291,  232,   -1,   -1,   -1,  296,
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
  260,  261,  262,   -1,   -1,  277,  322,  323,  268,  269,
   -1,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,   -1,
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
  322,  323,   -1,  291,   -1,   -1,   -1,   -1,  296,  260,
  261,  262,   -1,   -1,   -1,   -1,  304,  268,  269,   -1,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,  322,  323,  287,   -1,   -1,   -1,
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
  322,  323,  291,   -1,   -1,  260,  261,  296,   -1,   -1,
   -1,   -1,   -1,  268,  269,  304,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
   -1,   -1,  287,  322,  323,   -1,  291,   -1,  260,  261,
   -1,  296,   -1,   -1,   -1,   -1,  268,  269,   -1,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,
  282,  283,  284,   -1,   -1,  287,   -1,  322,  323,  291,
  260,  261,   -1,   -1,  296,   -1,   -1,   -1,  268,  269,
   -1,  271,  272,  273,   -1,  275,  276,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  287,   -1,   -1,
  322,  323,  260,  261,   -1,   -1,  296,   -1,   -1,   -1,
  268,  269,   -1,  271,  272,  273,   -1,  275,  276,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  287,
   -1,   -1,  322,  323,   -1,   -1,   -1,   -1,  296,  308,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,   -1,   -1,   -1,   -1,  297,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  322,  323,  308,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  319,  260,   -1,
   -1,  263,  264,  265,  266,  267,   -1,  269,  270,   -1,
   -1,   -1,   -1,   -1,   -1,  277,  260,   -1,  280,  263,
  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,
   -1,  260,   -1,  277,  263,  264,  265,  266,   -1,   -1,
  269,  270,   -1,   -1,   -1,   -1,  260,   -1,  277,  263,
  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,
   -1,  260,   -1,  277,  263,  264,  265,  266,   -1,   -1,
  269,  270,   -1,   -1,   -1,   -1,  260,   -1,  277,  263,
  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,
   -1,  260,   -1,  277,  263,  264,  265,  266,   -1,   -1,
  269,  270,   -1,   -1,   -1,   -1,  260,   -1,  277,  263,
  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,
  303,   -1,   -1,  277,   -1,  308,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  305,   -1,   -1,
  308,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  305,   -1,   -1,  308,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  308,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  318,  319,
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
"$$6 :",
"bloque : LLIZ $$6 sentencias LLDE",
"$$7 :",
"bloque : $$7 sentencia",
"$$8 :",
"bloque : LLIZ $$8 LLDE",
"$$9 :",
"if : IF expresion bloque ELSE $$9 bloque",
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
"$$10 :",
"$$11 :",
"llamada_proc : ID PIZ $$10 params_llamada $$11 PDE PYC",
"llamada_proc : ID PIZ PDE PYC",
"params_llamada : params_llamada COMA expresion",
"params_llamada : expresion",
"$$12 :",
"main : VOID MAIN $$12 PIZ PDE cuerpo",
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
#line 700 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 741 "y_tab.c"
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
case 1:
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
case 2:
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
case 27:
#line 115 "lexico.y"
{
								if(existeEntradaLocal(yyvsp[-1].cadena) == 0){
									pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,yyvsp[-2].tipo,defTipo,0));
								}else{
									printf("\n* Error linea: %d. El identificador \" %s \" de la refinicion de tipo ya existe.\n",linea_actual, yyvsp[-1].cadena);
									yyval.tipo = errorTipo;
									contadorErrores++;
								}
							}
break;
case 28:
#line 128 "lexico.y"
{yyval.tipo = entero;}
break;
case 29:
#line 129 "lexico.y"
{yyval.tipo = real;}
break;
case 30:
#line 130 "lexico.y"
{yyval.tipo = caracter;}
break;
case 31:
#line 131 "lexico.y"
{yyval.tipo = conjunto;}
break;
case 32:
#line 132 "lexico.y"
{
		if((tipoAux = existeEntradaDefTipo(yyvsp[0].cadena)) != 0){
		 yyval.tipo = tipoAux;
		}else{
			printf("\n* Error linea: %d. Tipo \" %s \" propio no definido.\n",linea_actual, yyvsp[0].cadena);
			yyval.tipo = errorTipo;
			contadorErrores++;
		}
	 }
break;
case 33:
#line 141 "lexico.y"
{yyval.tipo = booleano;}
break;
case 34:
#line 142 "lexico.y"
{yyval.tipo = cadena;}
break;
case 35:
#line 145 "lexico.y"
{tipoAux = yyvsp[0].tipo;}
break;
case 40:
#line 153 "lexico.y"
{ 				   
						   if(tipoAux != yyvsp[0].tipo && yyvsp[0].tipo != errorTipo){
								printf("\n* Error linea: %d. Asignacion de tipo incorrecta en la declaracion de la variable \" %s\".\n",linea_actual, yyvsp[-2].cadena);
								yyval.tipo = errorTipo;
								contadorErrores++;
						   }
						   
						   if(yyvsp[0].tipo == errorTipo){ /*Subimos el error*/
								yyval.tipo = errorTipo;
						   }
						   
						 }
break;
case 41:
#line 167 "lexico.y"
{ if(existeEntradaLocal(yyvsp[0].cadena) == 0){
					pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,tipoAux,var,0));
			    }else{
					printf("\n* Error linea: %d. Identificador \" %s \" declarado anteriormente.\n",linea_actual, yyvsp[0].cadena);
					yyval.tipo = errorTipo;
					contadorErrores++;
				}
			  }
break;
case 42:
#line 179 "lexico.y"
{if(existeEntradaLocal(yyvsp[-1].cadena) != 0){
						printf("\n* Error linea: %d. Funcion \" %s \" ya declarada.\n",linea_actual, yyvsp[-1].cadena);
						yyval.tipo = errorTipo;
						contadorErrores++;
					  }else{
						pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,sinTipo,proc,0));
					  }
				   }
break;
case 43:
#line 186 "lexico.y"
{
									pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
									copiaParametrosFormales();
								}
break;
case 44:
#line 189 "lexico.y"
{borrarHastaMarcaTS();}
break;
case 45:
#line 191 "lexico.y"
{if(existeEntradaLocal(yyvsp[-1].cadena) != 0){
					printf("\n* Error linea: %d. Funcion \" %s \" ya declarada.",linea_actual, yyvsp[-1].cadena);
					yyval.tipo = errorTipo;
					contadorErrores++;
				  }else{
					pushTS(rellenaEntrada(linea_actual,yyvsp[-1].cadena,sinTipo,proc,0));
				  }
			   }
break;
case 46:
#line 198 "lexico.y"
{
						pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
						copiaParametrosFormales();
					 }
break;
case 47:
#line 201 "lexico.y"
{borrarHastaMarcaTS();}
break;
case 48:
#line 204 "lexico.y"
{
								if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)){
									printf("\n* Error linea: %d. El parametro formal \" %s \" existente.\n",linea_actual, yyvsp[0].cadena);
									yyval.tipo = errorTipo;
									contadorErrores++;
								}
							 }
break;
case 49:
#line 211 "lexico.y"
{
				if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)){
					printf("\n* Error linea: %d. Parametro formal \" %s \" existente.\n",linea_actual, yyvsp[0].cadena);
					yyval.tipo  = errorTipo;
					contadorErrores++;
				}
		  }
break;
case 59:
#line 230 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-5].cadena)) != 0 && tipoAux == yyvsp[-2].tipo){
																yyval.tipo = tipoAux;
																	if(tipoAux != entero && tipoAux != caracter){ 
																		printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
																		contadorErrores++;
																	}
															   }else{
																if((tipoAux = existeEntrada(yyvsp[-5].cadena)) != 0 && tipoAux == yyvsp[-2].tipo){
																 yyval.tipo = tipoAux;
																	 if(tipoAux != entero && tipoAux != caracter){
																		printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
																		contadorErrores++;
																	 }
																}else{
																	if(tipoAux == yyvsp[-2].tipo){
																		printf("\n* Error linea: %d. Variable \" %s \" no declarada\n",linea_actual, yyvsp[-5].cadena);
																		contadorErrores++;
																	}else{
																		printf("\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH.\n",linea_actual);
																		contadorErrores++;
																	}
																}
															   }
															  }
break;
case 60:
#line 254 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-4].cadena)) != 0){
												yyval.tipo = tipoAux;
													if(tipoAux != entero && tipoAux != caracter){ 
														printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
														contadorErrores++;
													}
											   }else{
												if((tipoAux = existeEntrada(yyvsp[-4].cadena)) != 0){
												 yyval.tipo = tipoAux;
													 if(tipoAux != entero && tipoAux != caracter){
														printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
														contadorErrores++;
													 }
												}else{
													printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual, yyvsp[-4].cadena);
													contadorErrores++;
												}
											   }
											  }
break;
case 61:
#line 273 "lexico.y"
{ 	if((tipoAux = existeEntradaLocal(yyvsp[-4].cadena)) != 0 && tipoAux == yyvsp[-1].tipo){
											yyval.tipo = tipoAux;
												if(tipoAux != entero && tipoAux != caracter){
													printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
													contadorErrores++;
												}
										   }else{
											if((tipoAux = existeEntrada(yyvsp[-4].cadena)) != 0 && tipoAux == yyvsp[-1].tipo){
											 yyval.tipo = tipoAux;
												 if(tipoAux != entero && tipoAux != caracter){
													printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
													contadorErrores++;
												 }
											}else{
												if(tipoAux == yyvsp[-1].tipo){
													printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual, yyvsp[-4].cadena);
													contadorErrores++;
												}else{
													printf("\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH.\n",linea_actual);
													contadorErrores++;
												}
											}
										   }
										  }
break;
case 62:
#line 297 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-3].cadena)) != 0){
									yyval.tipo = tipoAux;
									if(tipoAux != entero && tipoAux != caracter){
										printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter.\n",linea_actual);
										contadorErrores++;
									}
										
								   }else{
									if((tipoAux = existeEntrada(yyvsp[-3].cadena)) != 0){
										 yyval.tipo = tipoAux;
										 if(tipoAux != entero && tipoAux != caracter){
											printf("\n* Error linea: %d. Expresion en switch es distinto a entero o caracter",linea_actual);
											contadorErrores++;
										 }
									}else{
										printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual, yyvsp[-3].cadena);
										
									}
								   }
								  }
break;
case 63:
#line 319 "lexico.y"
{	
																if(yyvsp[-6].tipo != yyvsp[-4].tipo){ 
																	printf("\n* Error linea: %d. CASEs del Switch con diferente tipo.\n",linea_actual);
																	contadorErrores++;
																}else{
																	yyval.tipo = yyvsp[-4].tipo;
																}
														    }
break;
case 64:
#line 327 "lexico.y"
{yyval.tipo = yyvsp[-4].tipo;}
break;
case 65:
#line 328 "lexico.y"
{	if(yyvsp[-5].tipo != yyvsp[-3].tipo){
												printf("\n* Error linea: %d. CASEs del Switch con diferente tipo.\n",linea_actual);
												contadorErrores++;
											}else{
												yyval.tipo = yyvsp[-3].tipo;
											}
										}
break;
case 66:
#line 335 "lexico.y"
{yyval.tipo = yyvsp[-3].tipo;}
break;
case 67:
#line 338 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 68:
#line 339 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 73:
#line 348 "lexico.y"
{linea_aux = linea_actual - 1;}
break;
case 75:
#line 349 "lexico.y"
{linea_aux = linea_actual - 1;}
break;
case 77:
#line 350 "lexico.y"
{linea_aux = linea_actual - 1;}
break;
case 79:
#line 354 "lexico.y"
{linea_if = linea_aux;}
break;
case 80:
#line 354 "lexico.y"
{
																if(yyvsp[-4].tipo != booleano && yyvsp[-4].tipo != errorTipo){ 
																	printf("\n* Error linea: %d. Expresion en if no es booleana.\n",linea_if);
																	yyval.tipo = errorTipo;
																	contadorErrores++;
																}
																
																if(yyvsp[-4].tipo == errorTipo){
																	yyval.tipo = errorTipo;
																}
															}
break;
case 81:
#line 365 "lexico.y"
{
							if(yyvsp[-1].tipo != booleano && yyvsp[-1].tipo != errorTipo){ 
								printf("\n* Error linea: %d. Expresion en if no es booleana.\n",linea_aux);
								yyval.tipo = errorTipo;
								contadorErrores++;
							}
							
							if(yyvsp[-1].tipo == errorTipo){
								yyval.tipo = errorTipo;
							}
					  }
break;
case 82:
#line 379 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == cadena || yyvsp[-2].tipo == conjunto /*UNION*/)){
										yyval.tipo = yyvsp[-2].tipo;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion suma.\n",linea_actual);
										yyval.tipo = errorTipo;
										contadorErrores++;
									  }
									}
break;
case 83:
#line 387 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == conjunto /*DIFERENCIA*/)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion resta.\n",linea_actual);
								yyval.tipo = errorTipo;
								contadorErrores++;
							  }
							}
break;
case 84:
#line 395 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion de multiplicacion.\n",linea_actual);
								yyval.tipo = errorTipo;
								contadorErrores++;
							  }
							}
break;
case 85:
#line 403 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == conjunto /*INTERSECCION*/)){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n* Error en la linea: %d. Expresion con tipos distintos en la  operacion de dividir.\n",linea_actual);
								yyval.tipo = errorTipo;
								contadorErrores++;
							  }
							}
break;
case 86:
#line 411 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
								yyval.tipo = yyvsp[-2].tipo;
							  }else{
								printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion booleana AND.\n",linea_actual);
								yyval.tipo = errorTipo;
								contadorErrores++;
							  }
							}
break;
case 87:
#line 419 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
							   }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion booleana OR.\n",linea_actual);
									yyval.tipo = errorTipo;
									contadorErrores++;
							   }
							}
break;
case 88:
#line 427 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
								}
break;
case 89:
#line 435 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
								}
break;
case 90:
#line 443 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
								}
break;
case 91:
#line 451 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
								}
break;
case 92:
#line 459 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
								yyval.tipo = errorTipo;
								contadorErrores++;
							  }
							}
break;
case 93:
#line 467 "lexico.y"
{ if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
								yyval.tipo = booleano;
							  }else{
								printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion.\n",linea_actual);
								yyval.tipo = errorTipo;
								contadorErrores++;
							  }
							}
break;
case 95:
#line 476 "lexico.y"
{yyval.tipo = yyvsp[-1].tipo;}
break;
case 96:
#line 477 "lexico.y"
{ if(yyvsp[0].tipo == booleano){
							yyval.tipo = booleano;
					   }else{
							printf("\n* Error linea: %d. Expresion con tipos distintos en el operador booleano de negacion.\n",linea_actual);
							yyval.tipo = errorTipo;
							contadorErrores++;
					   }
					}
break;
case 97:
#line 485 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[0].cadena)) != 0){
		yyval.tipo = tipoAux;
	   }else{
		if((tipoAux = existeEntrada(yyvsp[0].cadena)) != 0){
			yyval.tipo = tipoAux;
		}else{
			printf("\n* Error linea: %d. La variable \" %s \" no declarada.\n",linea_actual,yyvsp[0].cadena);
			yyval.tipo = errorTipo;
			contadorErrores++;
		}
	   }
     }
break;
case 103:
#line 502 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 105:
#line 504 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 106:
#line 505 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 107:
#line 506 "lexico.y"
{ if((tipoAux = existeEntradaLocal(yyvsp[-2].cadena)) != 0){
						yyval.tipo = tipoAux;
					   }else{
						if((tipoAux = existeEntrada(yyvsp[-2].cadena)) != 0){
						 yyval.tipo = tipoAux;
						}else{
							printf("\n* Error linea: %d. Variable \" %s \" no declarada.\n",linea_actual,yyvsp[-2].cadena);
							yyval.tipo = errorTipo;
							contadorErrores++;
						}
				    }
					   
					   if(tipoAux != yyvsp[0].tipo){
							printf("\n* Error linea: %d. Asignacion de tipo incorrecta.\n",linea_actual);
							yyval.tipo = errorTipo;
							contadorErrores++;
					   }
					 }
break;
case 108:
#line 526 "lexico.y"
{ 
											if(yyvsp[-2].tipo != booleano && yyvsp[-2].tipo != errorTipo){ 
												printf("\n* Error linea: %d. Expresion en while no es booleana.\n",linea_actual);
												yyval.tipo = errorTipo;
												contadorErrores++;
											}
											
											if(yyvsp[-2].tipo == errorTipo){
												yyval.tipo = errorTipo;
											}
									   }
break;
case 109:
#line 537 "lexico.y"
{
								if(yyvsp[-2].tipo != booleano && yyvsp[-2].tipo != errorTipo){
									printf("\n* Error linea: %d. Expresion en while no es booleana.\n",linea_actual);
									yyval.tipo = errorTipo;
									contadorErrores++;
								}
								
								if(yyvsp[-2].tipo == errorTipo){
									yyval.tipo = errorTipo;
								}
							  }
break;
case 115:
#line 560 "lexico.y"
{  if(existeEntrada(yyvsp[-1].cadena) != sinTipo){
							printf("\n* Error linea: %d. Llamada a procedimiento no declarada con anterioridad.\n",linea_actual);
							yyval.tipo = errorTipo;
							contadorErrores++;
						 }
						 
					  }
break;
case 116:
#line 566 "lexico.y"
{	if(compruebaNumeroParametros(yyvsp[-3].cadena, numParametros) == 0){ /*Error en tipo*/
												printf("\n* Error linea: %d. El numero de parametros no coindicen en la llamada al procedimiento.\n", linea_actual);
												yyval.tipo = errorTipo;
												contadorErrores++;
											}		
									   }
break;
case 118:
#line 573 "lexico.y"
{ if(existeEntrada(yyvsp[-3].cadena) != sinTipo){
					  printf("\n* Error linea: %d. Llamada a procedimiento \" %s \" no declarada con anterioridad.\n",linea_actual, yyvsp[-3].cadena);
					  yyval.tipo = errorTipo;
					  contadorErrores++;
				   }
				 }
break;
case 119:
#line 581 "lexico.y"
{ 	
													if(yyvsp[0].tipo != errorTipo){
														numParametros++;
														if(compruebaParametroProcedimiento(yyvsp[-4].cadena, yyvsp[0].tipo, numParametros) == 0){
															printf("\n* Error linea: %d. Parametro del procedimiento no coinciden en tipo.\n", linea_actual);
															yyval.tipo = errorTipo;
															contadorErrores++;
														}
														
														if(compruebaParametroProcedimiento(yyvsp[-4].cadena, yyvsp[0].tipo, numParametros) == 2){
															printf("\n* Error linea: %d. Numero de parametros excedido en la llamada a procedimiento.\n", linea_actual);
															yyval.tipo = errorTipo;
															contadorErrores++;
														}
													}else{
														yyval.tipo = errorTipo;
													}
												}
break;
case 120:
#line 599 "lexico.y"
{	
				if(yyvsp[0].tipo != errorTipo){
					numParametros = 1;
					if(compruebaParametroProcedimiento(yyvsp[-2].cadena, yyvsp[0].tipo, numParametros) == 0){
						printf("\n* Error linea: %d. Parametro del procedimiento no coinciden en tipo.\n", linea_actual);
						yyval.tipo = errorTipo;
						contadorErrores++;
					}
				}else{
					yyval.tipo = errorTipo;
				}
			}
break;
case 121:
#line 613 "lexico.y"
{
					pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
				 }
break;
case 122:
#line 615 "lexico.y"
{borrarHastaMarcaTS();}
break;
case 130:
#line 629 "lexico.y"
{
									yyval.tipo = conjunto;
							   }
break;
case 131:
#line 633 "lexico.y"
{ if( existeEntradaLocal(yyvsp[-1].cadena) != conjunto && existeEntrada(yyvsp[-1].cadena) != conjunto){
											printf("\n* Error linea: %d. Identificador \" %s \" no declarado.\n",linea_actual, yyvsp[-1].cadena);
											contadorErrores++;
										}
									  }
break;
case 132:
#line 639 "lexico.y"
{  	
										if( existeEntradaLocal(yyvsp[-1].cadena) != conjunto && existeEntrada(yyvsp[-1].cadena) != conjunto){
											printf("\n* Error linea. %d. Identificador \" %s \" no declarado",linea_actual, yyvsp[-1].cadena);
											yyval.tipo = errorTipo;
											contadorErrores++;
										}else{
											yyval.tipo = booleano;
										}
								   }
break;
case 133:
#line 650 "lexico.y"
{
									if( existeEntradaLocal(yyvsp[-1].cadena) != conjunto && existeEntrada(yyvsp[-1].cadena) != conjunto){
										printf("\n* Error linea. %d. Identificador \" %s \" no declarado.\n",linea_actual, yyvsp[-1].cadena);
										yyval.tipo = errorTipo;
										contadorErrores++;
									}else{
										yyval.tipo = entero;
									}
								  }
break;
case 134:
#line 661 "lexico.y"
{
										if(yyvsp[0].tipo != errorTipo){
											if( existeEntradaLocal(yyvsp[-2].cadena) != conjunto && existeEntrada(yyvsp[-2].cadena) != conjunto){
												printf("\n* Error linea: %d. Identificador \" %s \" no declarado.\n",linea_actual, yyvsp[-2].cadena);
												yyval.tipo = errorTipo;
												contadorErrores++;
											}
										}else{
											yyval.tipo = errorTipo;
										}
									 }
break;
case 135:
#line 674 "lexico.y"
{
									if(yyvsp[0].tipo != errorTipo){
										if( existeEntradaLocal(yyvsp[-2].cadena) != conjunto && existeEntrada(yyvsp[-2].cadena) != conjunto){
											printf("\n* Error linea: %d. Identificador \" %s \" no declarado",linea_actual, yyvsp[-2].cadena);
											yyval.tipo = errorTipo;
											contadorErrores++;
										}
									}else{
										yyval.tipo = errorTipo;
									}
								 }
break;
case 136:
#line 688 "lexico.y"
{
									if( existeEntradaLocal(yyvsp[0].cadena) != conjunto && existeEntrada(yyvsp[0].cadena) != conjunto){
										printf("\n* Error linea: %d. Identificador \" %s \" no declarado",linea_actual, yyvsp[0].cadena);
										yyval.tipo = errorTipo;
										contadorErrores++;
									}else{
										yyval.tipo = conjunto;
									}
								  }
break;
#line 1606 "y_tab.c"
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
