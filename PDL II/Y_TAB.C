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
	int compruebaParam = 0;  /*Comprueba si tenemos que validar los parámetros o no*/
	int numParametros;		 /*Número de parámetros para los procedimientos*/
	int linea_if;			 /*Línea que nos indica la linea de la cabecera del id*/
	int linea_aux;			 /*Línea actual auxiliar para el if*/
	int contadorErrores = 0; /*Contador de errores*/
	char cad[250];
	char cad1[250];
	char n_f[250];

	/* Se debe modificar la implementación la función yyerror. En este caso simplemente se escribe el mensaje en pantalla, por lo que habrá que añadir previamente la declaración de la variable global asociada al número de línea (declarada en la práctica anterior en el fichero fuente del flex) y modificar yyerror para que se muestre dicho número de línea */
	void yyerror (char *msg){
		char buffer[50];
		sprintf(buffer,"%s %d",msg,linea_actual);
		fprintf(stderr, "\n");
		fprintf(stderr,buffer);
	}

#line 40 "y_tab.c"
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
#define IMPRIMIR_TABLA 300
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
   27,   27,   27,   27,   27,   27,   27,   27,   27,   35,
   28,   28,   28,   28,   36,   36,   36,   36,   38,   38,
   39,   39,   37,   37,   41,   40,   42,   40,   43,   40,
   44,   29,   29,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   30,
   30,   32,   32,   49,   49,   31,   51,   52,   33,   33,
   50,   50,   53,    8,   23,   23,   23,   23,   34,   34,
   34,   45,   56,   47,   48,   54,   55,   46,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    1,    2,    1,
    2,    1,    2,    1,    1,    3,    4,    1,    1,    1,
    1,    1,    1,    1,    0,    4,    3,    1,    1,    3,
    1,    0,    0,    8,    0,    0,    7,    4,    2,    1,
    1,    1,    1,    1,    1,    1,    2,    2,    1,    2,
    8,    7,    7,    6,    7,    6,    6,    5,    1,    1,
    2,    1,    3,    2,    0,    4,    0,    2,    0,    3,
    0,    6,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    3,    2,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    5,
    5,    7,    5,    3,    1,    7,    0,    0,    7,    4,
    3,    1,    0,    6,    4,    3,    3,    2,    1,    1,
    1,    3,    4,    4,    4,    3,    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
   18,   20,   22,   35,    0,    0,  123,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,    0,    0,    0,    0,    0,    0,   16,
   10,   41,    0,   38,    0,   27,    0,    0,    0,   26,
   36,    0,    0,    0,    0,   46,    0,   37,    0,   96,
  100,  104,  101,  102,  103,    0,    0,    0,    0,    0,
    0,    0,  105,  106,  107,  108,   49,   43,    0,    0,
    0,  124,    0,    0,    0,    0,    0,  138,   98,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   47,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  128,    0,   55,    0,   72,   50,
   51,   52,   53,   54,   56,    0,   59,    0,  129,  130,
  131,    0,    0,    0,  132,   97,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   88,   89,   44,   48,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   60,
  127,    0,   58,   57,    0,  126,   71,  134,  135,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  125,  120,    0,    0,    0,    0,    0,    0,   81,
   78,    0,    0,    0,  133,    0,    0,    0,  111,  110,
    0,   80,    0,    0,  113,  115,    0,    0,    0,    0,
    0,   64,    0,    0,   76,   82,    0,    0,    0,  119,
   69,   70,    0,    0,    0,   63,    0,   62,  116,  112,
  114,    0,    0,    0,   61,    0,    0,    0,   68,    0,
    0,    0,   66,   67,    0,   65,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  127,   30,   24,   53,   44,   54,   55,  128,
   65,   57,   92,  112,   58,   90,  129,  130,  131,  132,
  133,  134,  135,  136,  137,  223,  224,  233,  138,  187,
  198,  188,  199,  213,   83,   84,   85,   86,  217,  195,
  181,  207,   47,  139,  140,  141,
};
short yysindex[] = {                                   1196,
    0,    0,    0,    0,    0, -118,    0,    0, -239, -189,
    0,  617,    0, -256, -261, -253,  617, -219,    0,    0,
    0,    0,    0,    0, -237, -220,    0,    0,    0,    0,
    0, -261, -253,    0, -197, -253, -193,    0, -219,    0,
    0,    0,    0, -169, -211,    0, -195, -253, -158,    0,
    0,    0, -187,    0, -203,    0, -118, -182, -170,    0,
    0, -169, -190, -150, -282,    0, -196,    0, -167,    0,
    0,    0,    0,    0,    0, -140, -138, -135, -190,  -76,
 -190, 1225,    0,    0,    0,    0,    0,    0, -118, -196,
  496,    0, -190,  -72,  -61,  -97, 1111,    0,    0, -190,
 -190, -190, -190, -190, -190, -190, -190, -190, -190, -190,
 -190, -196,  -57,    0,  140,    0,  -56,  -94,  -90, -190,
  -89,  -88,  -87,  -93,    0,  534,    0, 1198,    0,    0,
    0,    0,    0,    0,    0,  -91,    0,  667,    0,    0,
    0, 1225,  -85,  -81,    0,    0,  432,  432,  432,  432,
  432,  432, -139, -139, -181, -181,    0,    0,    0,    0,
  -80, -190, -190,  -41, -190, 1183,  -52,  -34,  -24,    0,
    0,  705,    0,    0,  140,    0,    0,    0,    0,  -67,
 -190, 1225, 1225,  -54, 1135,    0,  -46, 1001,  -60, -233,
  -44,    0,    0, 1225,  -53,  -45, -208, 1001,  -47,    0,
    0,    1,  -43,    2,    0, -190,  -32, -254,    0,    0,
  743,    0,  -38,  -30,    0,    0, -230, 1225,  -35, -244,
  -31,    0, -252,  -37,    0,    0,  -28,  -25,   14,    0,
    0,    0,   -9, 1001, -244,    0,  -29,    0,    0,    0,
    0,  800, 1001,   -8,    0,   -7,  843,  886,    0,   -4,
    6,  929,    0,    0,    7,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  772,  787,  829,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  872,  915,    0,    0, 1117,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -204,    0, 1214,    0,    0,
    0,    0,    0,    0, -152,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -147,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -112,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, 1056, 1087,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  572,    0,    0,    0,    0,  146,  203,  260,  317,
  374,  431,   32,   89,  -86,  -27,    0,    0,    0,    0,
 1068,    0,    0,    0,    0, 1035,    0,    0,    0,    0,
    0,    0,    0,    0, 1213,    0,    0,    0,    0,    0,
    0,   11,   12,    0,    0,  963,  629,    0,    0,    0,
    0,    0,    0, -217,  -22,    0, 1035,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, 1035,    0,    0,    0,    0, -213,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   15,    0,    0,    0,    0,    0,    0,
    0,    0,   16,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  286,    0,  292,   -6,  231,  307,   -5,  311,  289,
   56,  -14,   10,    0,   -2,    0,    0,  265,    0,  -63,
    0,    0,  -58,    0,    0,    0, -136,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  107,   96, -125, -178,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 1545
short yytable[] = {                                      82,
  172,  177,   41,   25,  220,    6,  235,   33,   36,   23,
    6,   40,   42,    6,   88,   97,  231,   99,  210,   35,
   26,   23,   45,   10,   89,   48,   23,   43,  232,  142,
  221,  114,  221,   51,  226,  177,  147,  148,  149,  150,
  151,  152,  153,  154,  155,  156,  157,  158,   43,   27,
  222,  201,  236,  159,   64,   42,  166,    9,   42,   42,
   42,   42,   49,  203,   42,   42,  228,   28,   29,   69,
   70,   38,  211,  204,  177,   46,  229,   71,   72,  122,
   73,   74,   75,  121,   76,   77,  113,   35,   38,  122,
   52,   38,   45,  121,   56,  186,   78,  209,  182,  183,
   59,  185,   60,   38,   63,   79,  177,   91,  243,   87,
  177,   41,   99,   99,   66,  177,  247,  194,   61,   62,
   99,   99,  252,   99,   99,   99,   67,   99,   99,   99,
   99,   99,   80,   81,   99,   99,   99,  110,  111,   99,
   93,    1,  218,   99,    2,    3,    4,    5,   99,   99,
    7,    8,   99,   39,   39,   94,   99,   95,   99,   99,
   96,   99,   99,   99,   99,   99,   99,   99,   99,   99,
   99,   99,   99,   86,   86,   99,   99,  108,  109,  110,
  111,   86,   86,   98,   86,   86,   86,  143,   86,   86,
   86,   86,   86,   40,   40,   86,   86,   86,  144,  145,
   86,  164,  160,   26,   86,  165,  167,  168,  169,   86,
   86,  178,  170,   86,  174,  179,  180,   86,  184,   86,
   86,  189,   86,   86,   86,   86,   86,   86,   86,   86,
   86,   86,   87,   87,  190,  191,   86,   86,  193,  200,
   87,   87,  196,   87,   87,   87,  202,   87,   87,   87,
   87,   87,  205,  206,   87,   87,   87,  212,  208,   87,
  214,  216,  215,   87,  219,  186,  227,  238,   87,   87,
  230,  234,   87,  241,  118,  245,   87,  239,   87,   87,
  240,   87,   87,   87,   87,   87,   87,   87,   87,   87,
   87,   84,   84,  242,  248,   87,   87,   31,  249,   84,
   84,  253,   84,   84,   84,   32,   84,   84,   84,   84,
   84,  254,  256,   84,   84,   84,  136,  137,   84,   74,
   73,  126,   84,   39,   34,   50,   68,   84,   84,  237,
  244,   84,    0,    0,    0,   84,    0,   84,   84,    0,
   84,   84,   84,   84,   84,   84,   84,   84,   85,   85,
    0,    0,    0,    0,   84,   84,   85,   85,    0,   85,
   85,   85,    0,   85,   85,   85,   85,   85,    0,    0,
   85,   85,   85,    0,    0,   85,    0,    0,    0,   85,
    0,    0,    0,    0,   85,   85,    0,    0,   85,    0,
    0,    0,   85,    0,   85,   85,    0,   85,   85,   85,
   85,   85,   85,   85,   85,   90,   90,    0,    0,    0,
    0,   85,   85,   90,   90,    0,   90,   90,   90,    0,
   90,   90,   90,   90,   90,    0,    0,   90,   90,   90,
    0,    0,   90,    0,    0,  161,   90,    0,    0,    0,
    0,   90,   90,    0,    0,   90,    0,   93,    0,   90,
    0,   90,   90,    0,   90,   90,   90,   90,   90,   90,
  162,  163,   91,   91,    0,    0,    0,    0,   90,   90,
   91,   91,    0,   91,   91,   91,    0,   91,   91,   91,
   91,   91,    0,    0,   91,   91,   91,    0,    0,   91,
    0,    0,    0,   91,    0,    0,    0,    0,   91,   91,
    0,    0,   91,    0,    0,    0,   91,    0,   91,   91,
    0,   91,   91,   91,   91,   91,   91,    0,    0,   92,
   92,    0,    0,    0,    0,   91,   91,   92,   92,    0,
   92,   92,   92,    0,   92,   92,   92,   92,   92,    0,
    0,   92,   92,   92,    0,    0,   92,    0,    0,    0,
   92,    0,    0,    0,    0,   92,   92,    0,    0,   92,
    0,    0,    0,   92,    0,   92,   92,    0,   92,   92,
   92,   92,   92,   92,    0,    0,   93,   93,    0,    0,
    0,    0,   92,   92,   93,   93,    0,   93,   93,   93,
    0,   93,   93,   93,   93,   93,    0,    0,   93,   93,
   93,    0,    0,   93,    0,    0,    0,   93,    0,    0,
    0,    0,   93,   93,    0,    0,   93,    0,    0,    0,
   93,    0,   93,   93,    0,   93,   93,   93,   93,   93,
   93,    0,    0,   94,   94,    0,    0,    0,    0,   93,
   93,   94,   94,    0,   94,   94,   94,    0,   94,   94,
   94,   94,   94,    0,    0,   94,   94,   94,    0,    0,
   94,    0,    0,    0,   94,    0,    0,    0,    0,   94,
   94,    0,    0,   94,    0,    0,    0,   94,    0,   94,
   94,    0,   94,   94,   94,   94,   94,   94,    0,    0,
   95,   95,    0,    0,    0,    0,   94,   94,   95,   95,
    0,   95,   95,   95,    0,   95,   95,   95,   95,   95,
    0,    0,   95,   95,   95,    0,    0,   95,    0,    0,
    0,   95,    0,    0,    0,    0,   95,   95,    0,    0,
   95,    0,    0,    0,   95,    0,   95,   95,    0,   95,
   95,   95,   95,   95,   95,    0,  106,  107,  108,  109,
  110,  111,    0,   95,   95,  115,   70,    0,    2,    3,
    4,    5,    0,   71,  116,    8,   73,   74,   75,    0,
   76,   77,  117,  118,  119,    0,    0,  120,  121,  122,
    0,    0,   78,    0,    0,    0,  123,    0,    0,    0,
    0,   79,    0,  115,   70,  124,    2,    3,    4,    5,
  125,   71,  116,    8,   73,   74,   75,    0,   76,   77,
  117,  118,  119,    0,    0,  120,  121,  122,   80,   81,
   78,    0,    0,    0,  123,    0,    0,    0,    0,   79,
    0,  109,  109,  124,    0,    0,    0,    0,  171,  109,
  109,    0,  109,  109,  109,    0,  109,  109,  109,  109,
  109,    0,    0,  109,  109,  109,   80,   81,  109,    0,
    0,    0,  109,    0,    0,    0,    0,  109,  109,    0,
    0,  109,    0,    0,    0,  109,    1,  109,  109,    2,
    3,    4,    5,    0,    0,    7,    8,    0,   83,   83,
   83,    0,    0,    9,  109,  109,   83,   83,    0,   83,
   83,   83,    0,   83,   83,   83,   83,   83,    0,    0,
   83,   83,   83,    0,    0,   83,    0,    0,    0,   83,
    0,    0,    0,    0,   83,    0,  175,   70,   83,    0,
    0,    0,    0,   83,   71,   72,    0,   73,   74,   75,
    0,   76,   77,  117,  118,  119,    0,    0,  120,  121,
  122,   83,   83,   78,    0,    0,    0,  123,    0,    0,
    0,    0,   79,    0,  175,   70,  124,    0,    0,    0,
    0,  176,   71,   72,    0,   73,   74,   75,    0,   76,
   77,  117,  118,  119,    0,    0,  120,  121,  122,   80,
   81,   78,    0,    0,    0,  123,    0,    0,    0,    0,
   79,    0,  175,   70,  124,    0,    0,    0,    0,  192,
   71,   72,    0,   73,   74,   75,    0,   76,   77,  117,
  118,  119,    0,    0,  120,  121,  122,   80,   81,   78,
    0,    7,    0,  123,    7,    7,    7,    7,   79,    0,
    7,    7,  124,    0,    0,    0,    8,  225,    7,    8,
    8,    8,    8,    0,    0,    8,    8,    0,    0,  175,
   70,  246,    0,    8,    0,   80,   81,   71,   72,    0,
   73,   74,   75,    0,   76,   77,  117,  118,  119,    0,
    0,  120,  121,  122,    0,    0,   78,    0,    9,    0,
  123,    9,    9,    9,    9,   79,    0,    9,    9,  124,
    0,    0,  175,   70,  250,    9,    0,    0,    0,    0,
   71,   72,    0,   73,   74,   75,    0,   76,   77,  117,
  118,  119,   80,   81,  120,  121,  122,    0,    0,   78,
    0,    6,    0,  123,    6,    6,    6,    6,   79,    0,
    6,    6,  124,    0,    0,  175,   70,  251,    6,    0,
    0,    0,    0,   71,   72,    0,   73,   74,   75,    0,
   76,   77,  117,  118,  119,   80,   81,  120,  121,  122,
    0,    0,   78,    0,    5,    0,  123,    5,    5,    5,
    5,   79,    0,    5,    5,  124,    0,    0,  175,   70,
  255,    5,    0,    0,    0,    0,   71,   72,    0,   73,
   74,   75,    0,   76,   77,  117,  118,  119,   80,   81,
  120,  121,  122,    0,    0,   78,    0,    0,    0,  123,
    0,    0,   75,   75,   79,    0,    0,    0,  124,    0,
   75,   75,    0,   75,   75,   75,    0,   75,   75,   75,
   75,   75,    0,    0,   75,   75,   75,    0,    0,   75,
    0,   80,   81,   75,    0,    0,    0,    0,   75,    0,
  175,   70,   75,    0,    0,    0,    0,   79,   71,   72,
    0,   73,   74,   75,    0,   76,   77,  117,  118,  119,
    0,    0,  120,  121,  122,   75,   75,   78,    0,    0,
    0,  123,    0,    0,   77,   77,   79,    0,    0,    0,
  124,    0,   77,   77,    0,   77,   77,   77,    0,   77,
   77,   77,   77,   77,    0,   32,   77,   77,   77,    0,
    0,   77,    0,   80,   81,   77,    0,  117,  117,    0,
   77,    0,    0,    0,   77,  117,  117,    0,  117,  117,
  117,    0,  117,  117,    0,    0,   34,    0,    0,    0,
    0,    0,    0,    0,  117,    0,    0,   77,   77,    0,
    0,   99,    0,  117,   99,   99,   99,   99,   99,   99,
   99,   99,   99,   99,   99,   99,    4,    0,    0,    4,
    4,    4,    4,    0,    0,    4,    4,    0,    0,    0,
  117,  117,  104,    4,    0,  104,  104,  104,  104,  104,
  104,  104,  104,  104,  104,  104,  104,  146,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  100,
  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
  111,  197,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  100,  101,  102,  103,  104,  105,  106,
  107,  108,  109,  110,  111,    1,    0,    0,    2,    3,
    4,    5,    6,    0,    7,    8,    0,    0,    0,    0,
    0,    0,    9,    3,    0,   10,    3,    3,    3,    3,
    0,    0,    3,    3,    0,    0,  186,    0,    0,    0,
    3,  100,  101,  102,  103,  104,  105,  106,  107,  108,
  109,  110,  111,  173,    0,    0,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,   99,    0,
    0,   99,   99,   99,   99,   99,   99,   99,   99,   99,
   99,   99,   99,  100,  101,  102,  103,  104,  105,  106,
  107,  108,  109,  110,  111,
};
short yycheck[] = {                                      63,
  126,  138,   17,    6,  259,  267,  259,   14,   15,    0,
  267,   17,   18,  267,  297,   79,  261,   81,  197,  281,
  260,   12,  260,  280,  307,   32,   17,   18,  273,   93,
  285,   90,  285,   39,  213,  172,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  111,   39,  289,
  305,  188,  305,  112,   57,  260,  120,  277,  263,  264,
  265,  266,  260,  297,  269,  270,  297,  257,  258,  260,
  261,   16,  198,  307,  211,  296,  307,  268,  269,  297,
  271,  272,  273,  297,  275,  276,   89,  281,   33,  307,
  260,   36,  297,  307,  306,  304,  287,  306,  162,  163,
  296,  165,  261,   48,  308,  296,  243,  304,  234,  260,
  247,  126,  260,  261,  297,  252,  242,  181,  306,  307,
  268,  269,  248,  271,  272,  273,  297,  275,  276,  277,
  278,  279,  323,  324,  282,  283,  284,  319,  320,  287,
  308,  260,  206,  291,  263,  264,  265,  266,  296,  297,
  269,  270,  300,  306,  307,  296,  304,  296,  306,  307,
  296,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  260,  261,  323,  324,  317,  318,  319,
  320,  268,  269,  260,  271,  272,  273,  260,  275,  276,
  277,  278,  279,  306,  307,  282,  283,  284,  260,  297,
  287,  296,  260,  260,  291,  296,  296,  296,  296,  296,
  297,  297,  306,  300,  306,  297,  297,  304,  260,  306,
  307,  274,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  260,  261,  269,  260,  323,  324,  306,  286,
  268,  269,  297,  271,  272,  273,  307,  275,  276,  277,
  278,  279,  297,  307,  282,  283,  284,  305,  304,  287,
  260,  260,  306,  291,  297,  304,  297,  305,  296,  297,
  306,  303,  300,  260,  297,  305,  304,  306,  306,  307,
  306,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  260,  261,  303,  303,  323,  324,   12,  306,  268,
  269,  306,  271,  272,  273,   14,  275,  276,  277,  278,
  279,  306,  306,  282,  283,  284,  306,  306,  287,  305,
  305,   91,  291,   17,   14,   37,   62,  296,  297,  223,
  235,  300,   -1,   -1,   -1,  304,   -1,  306,  307,   -1,
  309,  310,  311,  312,  313,  314,  315,  316,  260,  261,
   -1,   -1,   -1,   -1,  323,  324,  268,  269,   -1,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,
  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,
   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,  300,   -1,
   -1,   -1,  304,   -1,  306,  307,   -1,  309,  310,  311,
  312,  313,  314,  315,  316,  260,  261,   -1,   -1,   -1,
   -1,  323,  324,  268,  269,   -1,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
   -1,   -1,  287,   -1,   -1,  296,  291,   -1,   -1,   -1,
   -1,  296,  297,   -1,   -1,  300,   -1,  308,   -1,  304,
   -1,  306,  307,   -1,  309,  310,  311,  312,  313,  314,
  321,  322,  260,  261,   -1,   -1,   -1,   -1,  323,  324,
  268,  269,   -1,  271,  272,  273,   -1,  275,  276,  277,
  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,
   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,  297,
   -1,   -1,  300,   -1,   -1,   -1,  304,   -1,  306,  307,
   -1,  309,  310,  311,  312,  313,  314,   -1,   -1,  260,
  261,   -1,   -1,   -1,   -1,  323,  324,  268,  269,   -1,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,
  291,   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,  300,
   -1,   -1,   -1,  304,   -1,  306,  307,   -1,  309,  310,
  311,  312,  313,  314,   -1,   -1,  260,  261,   -1,   -1,
   -1,   -1,  323,  324,  268,  269,   -1,  271,  272,  273,
   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,  283,
  284,   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,   -1,
   -1,   -1,  296,  297,   -1,   -1,  300,   -1,   -1,   -1,
  304,   -1,  306,  307,   -1,  309,  310,  311,  312,  313,
  314,   -1,   -1,  260,  261,   -1,   -1,   -1,   -1,  323,
  324,  268,  269,   -1,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,
  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,
  297,   -1,   -1,  300,   -1,   -1,   -1,  304,   -1,  306,
  307,   -1,  309,  310,  311,  312,  313,  314,   -1,   -1,
  260,  261,   -1,   -1,   -1,   -1,  323,  324,  268,  269,
   -1,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,   -1,   -1,  287,   -1,   -1,
   -1,  291,   -1,   -1,   -1,   -1,  296,  297,   -1,   -1,
  300,   -1,   -1,   -1,  304,   -1,  306,  307,   -1,  309,
  310,  311,  312,  313,  314,   -1,  315,  316,  317,  318,
  319,  320,   -1,  323,  324,  260,  261,   -1,  263,  264,
  265,  266,   -1,  268,  269,  270,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,   -1,   -1,  282,  283,  284,
   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,
   -1,  296,   -1,  260,  261,  300,  263,  264,  265,  266,
  305,  268,  269,  270,  271,  272,  273,   -1,  275,  276,
  277,  278,  279,   -1,   -1,  282,  283,  284,  323,  324,
  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,
   -1,  260,  261,  300,   -1,   -1,   -1,   -1,  305,  268,
  269,   -1,  271,  272,  273,   -1,  275,  276,  277,  278,
  279,   -1,   -1,  282,  283,  284,  323,  324,  287,   -1,
   -1,   -1,  291,   -1,   -1,   -1,   -1,  296,  297,   -1,
   -1,  300,   -1,   -1,   -1,  304,  260,  306,  307,  263,
  264,  265,  266,   -1,   -1,  269,  270,   -1,  260,  261,
  262,   -1,   -1,  277,  323,  324,  268,  269,   -1,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,   -1,   -1,
  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,
   -1,   -1,   -1,   -1,  296,   -1,  260,  261,  300,   -1,
   -1,   -1,   -1,  305,  268,  269,   -1,  271,  272,  273,
   -1,  275,  276,  277,  278,  279,   -1,   -1,  282,  283,
  284,  323,  324,  287,   -1,   -1,   -1,  291,   -1,   -1,
   -1,   -1,  296,   -1,  260,  261,  300,   -1,   -1,   -1,
   -1,  305,  268,  269,   -1,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,   -1,  282,  283,  284,  323,
  324,  287,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,
  296,   -1,  260,  261,  300,   -1,   -1,   -1,   -1,  305,
  268,  269,   -1,  271,  272,  273,   -1,  275,  276,  277,
  278,  279,   -1,   -1,  282,  283,  284,  323,  324,  287,
   -1,  260,   -1,  291,  263,  264,  265,  266,  296,   -1,
  269,  270,  300,   -1,   -1,   -1,  260,  305,  277,  263,
  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,  260,
  261,  262,   -1,  277,   -1,  323,  324,  268,  269,   -1,
  271,  272,  273,   -1,  275,  276,  277,  278,  279,   -1,
   -1,  282,  283,  284,   -1,   -1,  287,   -1,  260,   -1,
  291,  263,  264,  265,  266,  296,   -1,  269,  270,  300,
   -1,   -1,  260,  261,  262,  277,   -1,   -1,   -1,   -1,
  268,  269,   -1,  271,  272,  273,   -1,  275,  276,  277,
  278,  279,  323,  324,  282,  283,  284,   -1,   -1,  287,
   -1,  260,   -1,  291,  263,  264,  265,  266,  296,   -1,
  269,  270,  300,   -1,   -1,  260,  261,  262,  277,   -1,
   -1,   -1,   -1,  268,  269,   -1,  271,  272,  273,   -1,
  275,  276,  277,  278,  279,  323,  324,  282,  283,  284,
   -1,   -1,  287,   -1,  260,   -1,  291,  263,  264,  265,
  266,  296,   -1,  269,  270,  300,   -1,   -1,  260,  261,
  262,  277,   -1,   -1,   -1,   -1,  268,  269,   -1,  271,
  272,  273,   -1,  275,  276,  277,  278,  279,  323,  324,
  282,  283,  284,   -1,   -1,  287,   -1,   -1,   -1,  291,
   -1,   -1,  260,  261,  296,   -1,   -1,   -1,  300,   -1,
  268,  269,   -1,  271,  272,  273,   -1,  275,  276,  277,
  278,  279,   -1,   -1,  282,  283,  284,   -1,   -1,  287,
   -1,  323,  324,  291,   -1,   -1,   -1,   -1,  296,   -1,
  260,  261,  300,   -1,   -1,   -1,   -1,  305,  268,  269,
   -1,  271,  272,  273,   -1,  275,  276,  277,  278,  279,
   -1,   -1,  282,  283,  284,  323,  324,  287,   -1,   -1,
   -1,  291,   -1,   -1,  260,  261,  296,   -1,   -1,   -1,
  300,   -1,  268,  269,   -1,  271,  272,  273,   -1,  275,
  276,  277,  278,  279,   -1,  260,  282,  283,  284,   -1,
   -1,  287,   -1,  323,  324,  291,   -1,  260,  261,   -1,
  296,   -1,   -1,   -1,  300,  268,  269,   -1,  271,  272,
  273,   -1,  275,  276,   -1,   -1,  260,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  287,   -1,   -1,  323,  324,   -1,
   -1,  306,   -1,  296,  309,  310,  311,  312,  313,  314,
  315,  316,  317,  318,  319,  320,  260,   -1,   -1,  263,
  264,  265,  266,   -1,   -1,  269,  270,   -1,   -1,   -1,
  323,  324,  306,  277,   -1,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,  297,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  309,
  310,  311,  312,  313,  314,  315,  316,  317,  318,  319,
  320,  297,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  320,  260,   -1,   -1,  263,  264,
  265,  266,  267,   -1,  269,  270,   -1,   -1,   -1,   -1,
   -1,   -1,  277,  260,   -1,  280,  263,  264,  265,  266,
   -1,   -1,  269,  270,   -1,   -1,  304,   -1,   -1,   -1,
  277,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  306,   -1,   -1,  309,  310,  311,  312,
  313,  314,  315,  316,  317,  318,  319,  320,  306,   -1,
   -1,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  319,  320,
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
"FALSE","CARACTER","OP_INOUT","EMPTY","LENGTH","VOID","SWITCH","WHILE",
"INCLUDE","DEFINE","IF","IN","OUT","DEFAULT","ELSE","CREATE","INSERT","MAIN",
"EXTRACT","DELETE","MINUS","UNION","INTERSECTION","NEG","PIZ","PDE","COMEN",
"ERR","IMPRIMIR_TABLA","CORI","CORD","PUNTOS","LLIZ","LLDE","PYC","COMA","ASI",
"MAYORIQ","MENORIQ","MAYORQ","MENORQ","DIST","II","SUM","RES","MUL","DIV","AND",
"OR","ADDC","MINC","COMPC","NEGEXP",
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
"sentencia : imprimir_tabla",
"imprimir_tabla : IMPRIMIR_TABLA PYC",
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
#line 828 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 752 "y_tab.c"
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
#line 67 "lexico.y"
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
#line 78 "lexico.y"
{
			if(contadorErrores == 0){
				printf("\n\n-------------------------------\n");
				printf(" -- Generacion correcta.\n");
				printf("\n-------------------------------\n\n");
			}else{
				printf("\n\n-------------------------------\n");
				printf("\n--Se ha encontrado %d errores.\n", contadorErrores);
				printf("\n-------------------------------\n\n");
			}
	   }
break;
case 27:
#line 119 "lexico.y"
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
#line 130 "lexico.y"
{yyval.tipo = entero;}
break;
case 29:
#line 131 "lexico.y"
{yyval.tipo = real;}
break;
case 30:
#line 132 "lexico.y"
{yyval.tipo = caracter;}
break;
case 31:
#line 133 "lexico.y"
{yyval.tipo = conjunto;}
break;
case 32:
#line 134 "lexico.y"
{
		if((tipoAux = existeEntradaDefTipo(yyvsp[0].cadena)) != 0){
		 yyval.tipo = tipoAux;
		}else{
			printf("\n* Error linea: %d. Tipo \" %s \" propio no definido.\n",linea_actual, yyvsp[0].cadena);
			tipoAux = errorTipo;
			yyval.tipo = errorTipo;
			contadorErrores++;
		}
	 }
break;
case 33:
#line 144 "lexico.y"
{yyval.tipo = booleano;}
break;
case 34:
#line 145 "lexico.y"
{yyval.tipo = cadena;}
break;
case 35:
#line 148 "lexico.y"
{tipoAux = yyvsp[0].tipo;}
break;
case 40:
#line 156 "lexico.y"
{ 				   
						   if(tipoAux != yyvsp[0].tipo && yyvsp[0].tipo != errorTipo){
								printf("\n* Error linea: %d. Asignacion de tipo incorrecta en la declaracion de la variable \" %s\". Variable de tipo %s y asignacion de tipo %s.\n",linea_actual, yyvsp[-2].cadena, yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
								yyval.tipo = errorTipo;
								contadorErrores++;
						   }
						   
						   if(yyvsp[0].tipo == errorTipo){ /*Subimos el error*/
								yyval.tipo = errorTipo;
						   }
						   
						 }
break;
case 41:
#line 170 "lexico.y"
{ if(existeEntradaLocal(yyvsp[0].cadena) == 0){
					pushTS(rellenaEntrada(linea_actual,yyvsp[0].cadena,tipoAux,var,0));
					yyval.tipo = tipoAux;
			    }else{
					printf("\n* Error linea: %d. Identificador \" %s \" declarado anteriormente.\n",linea_actual, yyvsp[0].cadena);
					yyval.tipo = errorTipo;
					contadorErrores++;
				}
			  }
break;
case 42:
#line 182 "lexico.y"
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
#line 189 "lexico.y"
{
									pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
									copiaParametrosFormales();
								}
break;
case 44:
#line 192 "lexico.y"
{borrarHastaMarcaTS();}
break;
case 45:
#line 194 "lexico.y"
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
#line 201 "lexico.y"
{
						pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
						copiaParametrosFormales();
					 }
break;
case 47:
#line 204 "lexico.y"
{borrarHastaMarcaTS();}
break;
case 48:
#line 207 "lexico.y"
{
								if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)){
									printf("\n* Error linea: %d. El parametro formal \" %s \" existente.\n",linea_actual, yyvsp[0].cadena);
									yyval.tipo = errorTipo;
									contadorErrores++;
								}
							 }
break;
case 49:
#line 214 "lexico.y"
{
				if(!pushTSParametroFormal(linea_actual, yyvsp[0].cadena, yyvsp[-1].tipo)){
					printf("\n* Error linea: %d. Parametro formal \" %s \" existente.\n",linea_actual, yyvsp[0].cadena);
					yyval.tipo  = errorTipo;
					contadorErrores++;
				}
		  }
break;
case 60:
#line 235 "lexico.y"
{imprimirTS();}
break;
case 61:
#line 238 "lexico.y"
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
case 62:
#line 262 "lexico.y"
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
case 63:
#line 281 "lexico.y"
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
case 64:
#line 305 "lexico.y"
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
case 65:
#line 327 "lexico.y"
{	
																if(yyvsp[-6].tipo != yyvsp[-4].tipo){ 
																	printf("\n* Error linea: %d. CASEs del Switch con diferente tipo.\n",linea_actual);
																	contadorErrores++;
																}else{
																	yyval.tipo = yyvsp[-4].tipo;
																}
														    }
break;
case 66:
#line 335 "lexico.y"
{yyval.tipo = yyvsp[-4].tipo;}
break;
case 67:
#line 336 "lexico.y"
{	if(yyvsp[-5].tipo != yyvsp[-3].tipo){
												printf("\n* Error linea: %d. CASEs del Switch con diferente tipo.\n",linea_actual);
												contadorErrores++;
											}else{
												yyval.tipo = yyvsp[-3].tipo;
											}
										}
break;
case 68:
#line 343 "lexico.y"
{yyval.tipo = yyvsp[-3].tipo;}
break;
case 69:
#line 346 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 70:
#line 347 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 75:
#line 356 "lexico.y"
{linea_aux = linea_actual - 1;}
break;
case 77:
#line 357 "lexico.y"
{linea_aux = linea_actual - 1;}
break;
case 79:
#line 358 "lexico.y"
{linea_aux = linea_actual - 1;}
break;
case 81:
#line 362 "lexico.y"
{linea_if = linea_aux;}
break;
case 82:
#line 362 "lexico.y"
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
case 83:
#line 373 "lexico.y"
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
case 84:
#line 387 "lexico.y"
{ 
									  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
										  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == cadena || yyvsp[-2].tipo == conjunto /*UNION*/)){
											yyval.tipo = yyvsp[-2].tipo;
										  }else{
											printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion suma. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
											yyval.tipo = errorTipo;
											contadorErrores++;
										  }
									  }else{
										yyval.tipo = errorTipo;
									  }
									}
break;
case 85:
#line 400 "lexico.y"
{ 
							if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
								if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == conjunto /*DIFERENCIA*/)){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion resta. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
							}else{
								yyval.tipo = errorTipo;
							}
						 }
break;
case 86:
#line 413 "lexico.y"
{ 
							if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
								  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion de multiplicacion. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
							}else{
								yyval.tipo = errorTipo;
							}
						  }
break;
case 87:
#line 426 "lexico.y"
{ 
							if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
								  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == conjunto /*INTERSECCION*/)){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la  operacion de dividir. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
								yyval.tipo = errorTipo;
							  }
							}
break;
case 88:
#line 439 "lexico.y"
{ 
							  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
								  if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
									yyval.tipo = yyvsp[-2].tipo;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion booleana AND. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
								yyval.tipo = errorTipo;
							  }
							}
break;
case 89:
#line 452 "lexico.y"
{ 
							   if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
								   if(yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo == booleano){
										yyval.tipo = yyvsp[-2].tipo;
								   }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la operacion booleana OR. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
										yyval.tipo = errorTipo;
										contadorErrores++;
								   }
							   }else{
									yyval.tipo = errorTipo;
							   }
							}
break;
case 90:
#line 465 "lexico.y"
{ 
								  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
									  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
										yyval.tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
										yyval.tipo = errorTipo;
										contadorErrores++;
									  }
								   }else{
										yyval.tipo = errorTipo;
								   }
								}
break;
case 91:
#line 478 "lexico.y"
{ 
								  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
									  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
										yyval.tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
										yyval.tipo = errorTipo;
										contadorErrores++;
									  }
								   }else{
										yyval.tipo = errorTipo;
								   }
								}
break;
case 92:
#line 491 "lexico.y"
{ 
								  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
									  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
										yyval.tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
										yyval.tipo = errorTipo;
										contadorErrores++;
									  }
								  }else{
									yyval.tipo = errorTipo;
								  }
								}
break;
case 93:
#line 504 "lexico.y"
{ 
								  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
									  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real)){
										yyval.tipo = booleano;
									  }else{
										printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
										yyval.tipo = errorTipo;
										contadorErrores++;
									  }
								  }else{
									yyval.tipo = errorTipo;
								  }
								}
break;
case 94:
#line 517 "lexico.y"
{ 
							  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
								  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
									yyval.tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
									yyval.tipo = errorTipo;
							  }
							}
break;
case 95:
#line 530 "lexico.y"
{ 
							  if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
								  if(yyvsp[-2].tipo == yyvsp[0].tipo && (yyvsp[-2].tipo == entero || yyvsp[-2].tipo == real || yyvsp[-2].tipo == booleano)){
									yyval.tipo = booleano;
								  }else{
									printf("\n* Error en la linea: %d. Expresion con tipos distintos en la comparacion. %s - %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
									yyval.tipo = errorTipo;
									contadorErrores++;
								  }
							  }else{
									yyval.tipo = errorTipo;
							  }
							}
break;
case 97:
#line 544 "lexico.y"
{yyval.tipo = yyvsp[-1].tipo;}
break;
case 98:
#line 545 "lexico.y"
{ 
					   if(yyvsp[0].tipo != errorTipo){
						   if(yyvsp[0].tipo == booleano){
								yyval.tipo = booleano;
						   }else{
								printf("\n* Error linea: %d. Expresion con tipos distintos en el operador booleano de negacion. %s - %s\n",linea_actual,yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
								yyval.tipo = errorTipo;
								contadorErrores++;
						   }
					    }else{
							yyval.tipo = errorTipo;
						}
					}
break;
case 99:
#line 558 "lexico.y"
{ 
	   if(yyvsp[0].tipo != errorTipo){
		   if((tipoAux = existeEntradaLocal(yyvsp[0].cadena)) != 0){
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
	   }else{
		 yyval.tipo = errorTipo;
	   }
     }
break;
case 105:
#line 580 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 107:
#line 582 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 108:
#line 583 "lexico.y"
{yyval.tipo = yyvsp[0].tipo;}
break;
case 109:
#line 584 "lexico.y"
{ 
						 
						 if((tipoAux = existeEntradaLocal(yyvsp[-2].cadena)) != 0){
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
							 
						if(yyvsp[0].tipo != errorTipo){
							   if(tipoAux != yyvsp[0].tipo && tipoAux != errorTipo){
									printf("\n* Error linea: %d. Asignacion de tipo incorrecto. ID con tipo %s y asignacion con tipo %s\n",linea_actual,yyvsp[-2].tipo==1?"entero":yyvsp[-2].tipo==2?"real":yyvsp[-2].tipo==3?"booleano":yyvsp[-2].tipo==4?"caracter":yyvsp[-2].tipo==5?"cadena":"conjunto",yyvsp[0].tipo==1?"entero":yyvsp[0].tipo==2?"real":yyvsp[0].tipo==3?"booleano":yyvsp[0].tipo==4?"caracter":yyvsp[0].tipo==5?"cadena":"conjunto");
									yyval.tipo = errorTipo;
									contadorErrores++;
							   }
							   
							   if(tipoAux == errorTipo){
								 yyval.tipo = errorTipo;
							   }
						 }else{
							yyval.tipo = errorTipo;
						 }
					}
break;
case 110:
#line 614 "lexico.y"
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
case 111:
#line 625 "lexico.y"
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
case 117:
#line 648 "lexico.y"
{  if((compruebaParam = existeEntrada(yyvsp[-1].cadena)) != sinTipo){
							printf("\n* Error linea: %d. Llamada a procedimiento no declarada con anterioridad.\n",linea_actual);
							yyval.tipo = errorTipo;
							contadorErrores++;
						 }
						 
					  }
break;
case 118:
#line 654 "lexico.y"
{	
											if(compruebaParam != 0){
												if(compruebaNumeroParametros(yyvsp[-3].cadena, numParametros) == 0){ /*Error en tipo*/
													printf("\n* Error linea: %d. El numero de parametros no coindicen en la llamada al procedimiento.\n", linea_actual);
													yyval.tipo = errorTipo;
													contadorErrores++;
												}
											}else{
												yyval.tipo = errorTipo;
											}
									   }
break;
case 120:
#line 666 "lexico.y"
{ if(existeEntrada(yyvsp[-3].cadena) != sinTipo){
					  printf("\n* Error linea: %d. Llamada a procedimiento \" %s \" no declarada con anterioridad.\n",linea_actual, yyvsp[-3].cadena);
					  yyval.tipo = errorTipo;
					  contadorErrores++;
				   }
				 }
break;
case 121:
#line 674 "lexico.y"
{ 	
													if(yyvsp[0].tipo != errorTipo && compruebaParam != 0){
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
case 122:
#line 692 "lexico.y"
{	
				if(yyvsp[0].tipo != errorTipo && compruebaParam != 0){
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
case 123:
#line 706 "lexico.y"
{
					pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0));
				 }
break;
case 124:
#line 708 "lexico.y"
{borrarHastaMarcaTS();}
break;
case 132:
#line 722 "lexico.y"
{
									yyval.tipo = conjunto;
							   }
break;
case 133:
#line 726 "lexico.y"
{ 
										if(yyvsp[-1].tipo != errorTipo){
											if( existeEntradaLocal(yyvsp[-1].cadena) != conjunto && existeEntrada(yyvsp[-1].cadena) != conjunto){
												printf("\n* Error linea: %d. Identificador \" %s \" no declarado.\n",linea_actual, yyvsp[-1].cadena);
												contadorErrores++;
											}
										}
									  }
break;
case 134:
#line 735 "lexico.y"
{  	
										if(yyvsp[-1].tipo != errorTipo){
											if( (tipoAux = existeEntradaLocal(yyvsp[-1].cadena)) != conjunto && (tipoAux = existeEntrada(yyvsp[-1].cadena)) != conjunto){
												if(tipoAux == 0){
													printf("\n* Error linea. %d. Identificador \" %s \" no declarado",linea_actual, yyvsp[-1].cadena);
												}else{
													printf("\n* Error linea. %d. El identificador \" %s \" no es de tipo SET (conjunto).\n",linea_actual, yyvsp[-1].cadena);
												}
												yyval.tipo = errorTipo;
												contadorErrores++;
											}else{
												yyval.tipo = booleano;
											}
										}else{
											yyval.tipo = errorTipo;
										}
								   }
break;
case 135:
#line 754 "lexico.y"
{
									if(yyvsp[-1].tipo != errorTipo){
										if( (tipoAux = existeEntradaLocal(yyvsp[-1].cadena)) != conjunto && (tipoAux = existeEntrada(yyvsp[-1].cadena)) != conjunto){
											if(tipoAux == 0){
												printf("\n* Error linea. %d. Identificador \" %s \" no declarado.\n",linea_actual, yyvsp[-1].cadena);
											}else{
												printf("\n* Error linea. %d. El identificador \" %s \" no es de tipo SET (conjunto).\n",linea_actual, yyvsp[-1].cadena);
											}
											yyval.tipo = errorTipo;
											contadorErrores++;
										}else{
											yyval.tipo = entero;
										}
									}else{
										yyval.tipo = errorTipo;
									}
								  }
break;
case 136:
#line 773 "lexico.y"
{
										if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
											if( (tipoAux = existeEntradaLocal(yyvsp[-2].cadena)) != conjunto && (tipoAux = existeEntrada(yyvsp[-2].cadena)) != conjunto){
												if(tipoAux == 0){
													printf("\n* Error linea: %d. Identificador \" %s \" no declarado.\n",linea_actual, yyvsp[-2].cadena);
												}else{
													printf("\n* Error linea. %d. El identificador \" %s \" no es de tipo SET (conjunto).\n",linea_actual, yyvsp[-2].cadena);
												}
												yyval.tipo = errorTipo;
												contadorErrores++;
											}
										}else{
											yyval.tipo = errorTipo;
										}
									 }
break;
case 137:
#line 790 "lexico.y"
{
									if(yyvsp[-2].tipo != errorTipo && yyvsp[0].tipo != errorTipo){
										if( (tipoAux = existeEntradaLocal(yyvsp[-2].cadena)) != conjunto && (tipoAux = existeEntrada(yyvsp[-2].cadena)) != conjunto){
											if(tipoAux == 0){
												printf("\n* Error linea: %d. Identificador \" %s \" no declarado",linea_actual, yyvsp[-2].cadena);
											}else{
												printf("\n* Error linea. %d. El identificador \" %s \" no es de tipo SET (conjunto).\n",linea_actual, yyvsp[-2].cadena);
											}
											yyval.tipo = errorTipo;
											contadorErrores++;
										}
									}else{
										yyval.tipo = errorTipo;
									}
								 }
break;
case 138:
#line 808 "lexico.y"
{
									if(yyvsp[0].tipo != errorTipo){
										if( (tipoAux = existeEntradaLocal(yyvsp[0].cadena)) != conjunto && (tipoAux = existeEntrada(yyvsp[0].cadena)) != conjunto){
											if(tipoAux == 0){
												printf("\n* Error linea: %d. Identificador \" %s \" no declarado",linea_actual, yyvsp[0].cadena);
											}else{
												printf("\n* Error linea. %d. El identificador \" %s \" no es de tipo SET (conjunto).\n",linea_actual, yyvsp[0].cadena);
											}
											yyval.tipo = errorTipo;
											contadorErrores++;
										}else{
											yyval.tipo = conjunto;
										}
									}else{
										yyval.tipo = errorTipo;
									}
								  }
break;
#line 1743 "y_tab.c"
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
