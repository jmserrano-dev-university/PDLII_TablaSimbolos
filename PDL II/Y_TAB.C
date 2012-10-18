#ifndef lint
static char yysccsid[] = "@(#)yaccpar     1.7 (Berkeley) 09/09/90";
#endif
#define YYBYACC 1
#line 2 "lexico.y"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int linea_actual = 1;

/* Se debe modificar la implementación la función yyerror. En este caso simplemente se escribe el mensaje en pantalla, por lo que habrá que añadir previamente la declaración de la variable global asociada al número de línea (declarada en la práctica anterior en el fichero fuente del flex) y modificar yyerror para que se muestre dicho número de línea */
void yyerror (char *msg){
	char buffer[50];
	sprintf(buffer,"%s %d",msg,linea_actual);
	fprintf(stderr, "\n");
	fprintf(stderr,buffer);
}


#line 22 "y_tab.c"
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
   15,   15,   15,   15,   12,   16,   16,   17,   17,   18,
   18,   13,   13,   20,   20,   22,   22,   22,   22,   22,
   22,   22,   22,   22,   23,   23,   23,   23,   30,   30,
   30,   30,   32,   32,   33,   33,   31,   31,   34,   34,
   34,   24,   24,   19,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   19,   19,   19,   25,
   25,   27,   27,   39,   39,   26,   28,   28,   40,   40,
    8,   21,   21,   21,   21,   29,   29,   29,   35,   43,
   37,   38,   41,   42,   36,
};
short yylen[] = {                                         2,
    2,    1,    3,    2,    2,    2,    1,    1,    1,    3,
    2,    2,    1,    2,    1,    3,    2,    2,    2,    1,
    2,    1,    2,    1,    1,    3,    3,    1,    1,    1,
    1,    1,    1,    1,    3,    3,    1,    1,    3,    1,
    4,    6,    5,    4,    2,    1,    1,    1,    1,    1,
    1,    1,    2,    2,    8,    7,    7,    6,    7,    6,
    6,    5,    1,    1,    2,    1,    3,    2,    3,    1,
    2,    5,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    3,    2,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    5,
    5,    7,    5,    3,    1,    7,    5,    4,    3,    1,
    5,    4,    3,    3,    2,    1,    1,    1,    3,    4,
    4,    4,    3,    3,    2,
};
short yydefred[] = {                                      0,
   32,   28,   29,   30,   31,    0,   34,   33,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   13,   15,
    0,   20,   22,    0,    0,    0,    0,   24,   25,   23,
    1,    0,    0,   14,    0,    0,    0,   17,    0,   11,
   19,   12,   21,   18,    0,    0,   37,    0,   27,    0,
    0,    0,    0,   16,   10,    0,   35,    0,    0,    0,
    0,    0,    0,   26,    0,   36,    0,   86,   90,   91,
   92,   93,   94,    0,    0,    0,    0,    0,    0,    0,
   95,   96,   97,   98,    0,   43,   45,    0,    0,  111,
   41,    0,    0,    0,    0,    0,  125,   88,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  115,    0,
   51,    0,   66,   46,   47,   48,   49,   50,   52,    0,
    0,  116,  117,  118,   42,    0,    0,    0,    0,  119,
   87,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   78,   79,    0,    0,    0,    0,    0,    0,    0,
  114,    0,   54,    0,    0,   53,    0,  113,   65,   44,
  121,  122,    0,    0,    0,    0,    0,    0,   70,    0,
    0,    0,    0,  112,  123,  124,  108,    0,    0,    0,
    0,   71,    0,    0,    0,    0,    0,  120,  107,    0,
    0,  101,  100,   69,   72,    0,  103,  105,    0,    0,
    0,   58,    0,    0,    0,    0,    0,   63,   64,    0,
    0,    0,   57,    0,   56,  106,  102,  104,    0,    0,
    0,   55,    0,    0,    0,   62,    0,    0,    0,   60,
   61,    0,   59,
};
short yydgoto[] = {                                      11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   37,
   21,   22,  121,   30,   24,   46,   47,   48,  122,   62,
   86,  123,  124,  125,  126,  127,  128,  129,  130,  213,
  214,  220,  131,  180,   81,   82,   83,   84,  209,  175,
  132,  133,  134,
};
short yysindex[] = {                                   1098,
    0,    0,    0,    0,    0, -110,    0,    0, -236, -143,
    0,  -45,    0, -210, -253, -264,  -45, -267,    0,    0,
 -293,    0,    0, -245, -221, -232, -228,    0,    0,    0,
    0, -253, -264,    0, -188, -264, -171,    0, -267,    0,
    0,    0,    0,    0, -213, -100,    0, -191,    0, -238,
 -179, -264, -139,    0,    0, -126,    0, -245, 1083, -162,
 -111, -230, -162,    0, -151,    0, -113,    0,    0,    0,
    0,    0,    0, -132,  -97,  -85, 1083, 1083, 1083, 1168,
    0,    0,    0,    0,  568,    0,    0, -162, -110,    0,
    0, 1083,  -44,  -32,  -39, 1099,    0,    0, 1083, 1083,
 1083, 1083, 1083, 1083, 1083, 1083, 1083, 1083, 1083, 1083,
 -287,    5,  -31,  -27, 1083,  -26,  -24,  -22,    0,  598,
    0, 1137,    0,    0,    0,    0,    0,    0,    0,  -21,
  712,    0,    0,    0,    0,   26, 1168,  -11,   11,    0,
    0, -128, -128, -128, -128, -128, -128,  165,  165,  -93,
  -93,    0,    0, 1051,   29, 1083,  157,   35,   38,   53,
    0,  742,    0,   58,   64,    0, -287,    0,    0,    0,
    0,    0,   19, 1168, -214,   31, 1122,  772,    0,   45,
   23, -209,   36,    0,    0,    0,    0,   39, 1083,   40,
  628,    0,  802,  832,   86,   42,  102,    0,    0, 1168,
 -252,    0,    0,    0,    0,   65,    0,    0, -206, -178,
   66,    0, -250,   70,   75,   76,  110,    0,    0,   83,
 1018, -178,    0,   82,    0,    0,    0,    0,  886, 1018,
   88,    0,   95,  919,  952,    0,   96,   97,  985,    0,
    0,   99,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   14,   73,  130,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  187,  248,    0,    0,  305,    0,    0,    0,    0,
    0,    0,    0,    0, -145,    0,    0,  -56,    0,    0,
    0,  362,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -140,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -53,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 1072,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -198,    0,    0,    0,
    0,  218,  275,  332,  389,  446,  503,   43,  100,  -75,
  -16,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, 1154,    0,    0,    0,
    0,    0,    0, -194,    0,    0,    0,    0,    0,  682,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -180,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   84,    0,    0,    0,    0,    0,    0,    0,    0,  114,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,  408,    0,  412,   -9,  342,  415,   -1,  424,  402,
  178,  -15,  129,    0,    2,    0,  385,    0,  -59,    0,
  -51, -127,    0,    0,    0,    0,    0,    0,    0,    0,
  231,  224, -119, -133,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
#define YYTABLESIZE 1488
short yytable[] = {                                      80,
  162,   41,    6,  169,   33,   36,  210,   25,  222,  154,
    9,   90,   44,    6,   45,   40,   42,   96,   97,   98,
   92,    1,   52,   26,    2,    3,    4,    5,   35,  179,
    7,    8,  137,  211,  169,  211,  135,   55,   49,  142,
  143,  144,  145,  146,  147,  148,  149,  150,  151,  152,
  153,   61,  212,   27,  223,  157,    6,  203,  193,   60,
  205,   99,   99,  179,   50,  169,  179,   88,   51,   99,
   10,   53,   99,   99,   99,   99,   89,   99,   99,   99,
   99,   99,  218,  188,   99,   99,   99,   56,  196,   99,
  136,  216,  189,   99,  174,  219,  177,  197,   99,   99,
  217,  230,  169,  110,   41,   99,  169,   99,   99,  234,
   35,  169,  110,   28,   29,  239,   59,  109,   63,   89,
   89,   64,   99,   99,   99,   99,  109,   89,   23,  200,
   89,   89,   89,   89,   65,   89,   89,   89,   89,   89,
   23,   85,   89,   89,   89,   23,   43,   89,   87,    1,
   91,   89,    2,    3,    4,    5,   89,   89,    7,    8,
   40,   40,   40,   89,   93,   89,   89,   43,   89,   89,
   89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   76,   76,  105,  106,  107,  108,
  109,  110,   76,   38,   92,   76,   76,   76,   76,   94,
   76,   76,   76,   76,   76,   57,   58,   76,   76,   76,
   38,   95,   76,   38,    1,  138,   76,    2,    3,    4,
    5,   76,   76,    7,    8,  109,  110,  139,   76,   38,
   76,   76,    9,   76,   76,   76,   76,   76,   76,   76,
   76,   76,   76,   77,   77,   76,   76,   76,   76,   38,
   38,   77,   39,   39,   77,   77,   77,   77,  140,   77,
   77,   77,   77,   77,   26,  155,   77,   77,   77,  156,
  158,   77,  159,    7,  160,   77,    7,    7,    7,    7,
   77,   77,    7,    7,  166,  170,  171,   77,  176,   77,
   77,    7,   77,   77,   77,   77,   77,   77,   77,   77,
   77,   77,   74,   74,   77,   77,   77,   77,  172,  181,
   74,  182,  183,   74,   74,   74,   74,  185,   74,   74,
   74,   74,   74,  186,  187,   74,   74,   74,  190,  195,
   74,  194,    8,  198,   74,    8,    8,    8,    8,   74,
   74,    8,    8,  201,  199,  206,   74,  207,   74,   74,
    8,   74,   74,   74,   74,   74,   74,   74,   74,   75,
   75,  208,  215,   74,   74,   74,   74,   75,  221,  228,
   75,   75,   75,   75,  225,   75,   75,   75,   75,   75,
  226,  227,   75,   75,   75,  229,  232,   75,   68,    9,
  235,   75,    9,    9,    9,    9,   75,   75,    9,    9,
  236,  240,  241,   75,  243,   75,   75,    9,   75,   75,
   75,   75,   75,   75,   75,   75,  167,   68,   67,   31,
   75,   75,   75,   75,   69,   32,  120,   70,   71,   72,
   73,   39,   74,   75,  112,  113,  114,   34,   54,  115,
  116,  117,   66,  224,   76,  231,    6,    0,  118,    6,
    6,    6,    6,   77,    0,    6,    6,    0,    0,    0,
  178,    0,    0,    0,    6,   99,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,   80,   80,   78,
   79,  107,  108,  109,  110,   80,    0,    0,   80,   80,
   80,   80,    0,   80,   80,   80,   80,   80,    0,    0,
   80,   80,   80,    0,    0,   80,    0,    5,    0,   80,
    5,    5,    5,    5,   80,   80,    5,    5,    0,    0,
    0,   80,    0,   80,   80,    5,   80,   80,   80,   80,
   80,   80,    0,    0,   81,   81,    0,    0,   80,   80,
   80,   80,   81,    0,    0,   81,   81,   81,   81,    0,
   81,   81,   81,   81,   81,    0,    0,   81,   81,   81,
    0,    0,   81,    0,    4,    0,   81,    4,    4,    4,
    4,   81,   81,    4,    4,    0,    0,    0,   81,    0,
   81,   81,    4,   81,   81,   81,   81,   81,   81,    0,
    0,   82,   82,    0,    0,   81,   81,   81,   81,   82,
    0,    0,   82,   82,   82,   82,    0,   82,   82,   82,
   82,   82,    0,    0,   82,   82,   82,    0,    0,   82,
    0,    3,    0,   82,    3,    3,    3,    3,   82,   82,
    3,    3,    0,    0,    0,   82,    0,   82,   82,    3,
   82,   82,   82,   82,   82,   82,    0,    0,   83,   83,
    0,    0,   82,   82,   82,   82,   83,    0,    0,   83,
   83,   83,   83,    0,   83,   83,   83,   83,   83,    0,
    0,   83,   83,   83,    0,    0,   83,    0,    0,    0,
   83,    0,    0,    0,    0,   83,   83,    0,    0,    0,
    0,    0,   83,    0,   83,   83,    0,   83,   83,   83,
   83,   83,   83,    0,    0,   84,   84,    0,    0,   83,
   83,   83,   83,   84,    0,    0,   84,   84,   84,   84,
    0,   84,   84,   84,   84,   84,    0,    0,   84,   84,
   84,    0,    0,   84,    0,    0,    0,   84,    0,    0,
    0,    0,   84,   84,    0,    0,    0,    0,    0,   84,
    0,   84,   84,    0,   84,   84,   84,   84,   84,   84,
    0,    0,   85,   85,    0,    0,   84,   84,   84,   84,
   85,    0,    0,   85,   85,   85,   85,    0,   85,   85,
   85,   85,   85,    0,    0,   85,   85,   85,    0,    0,
   85,    0,    0,    0,   85,    0,    0,    0,    0,   85,
   85,    0,    0,    0,    0,    0,   85,    0,   85,   85,
    0,   85,   85,   85,   85,   85,   85,    0,    0,    0,
    0,    0,    0,   85,   85,   85,   85,  111,   68,    0,
    2,    3,    4,    5,    0,   69,    7,    8,   70,   71,
   72,   73,    0,   74,   75,  112,  113,  114,    0,    0,
  115,  116,  117,    0,    0,   76,    0,  111,   68,  118,
    2,    3,    4,    5,   77,   69,    7,    8,   70,   71,
   72,   73,  119,   74,   75,  112,  113,  114,    0,    0,
  115,  116,  117,    0,    0,   76,    0,  167,   68,  118,
   78,   79,    0,    0,   77,   69,    0,    0,   70,   71,
   72,   73,  161,   74,   75,  112,  113,  114,    0,    0,
  115,  116,  117,    0,    0,   76,    0,    0,    0,  118,
   78,   79,    0,    0,   77,    0,    0,    0,    0,    0,
    0,  178,    0,  202,    0,    0,    0,    0,    0,    0,
    0,   73,   73,   73,    0,    0,    0,    0,    0,   73,
   78,   79,   73,   73,   73,   73,    0,   73,   73,   73,
   73,   73,    0,    0,   73,   73,   73,    0,    0,   73,
    0,  167,   68,   73,    0,    0,    0,    0,   73,   69,
    0,    0,   70,   71,   72,   73,   73,   74,   75,  112,
  113,  114,    0,    0,  115,  116,  117,    0,    0,   76,
    0,  167,   68,  118,   73,   73,    0,    0,   77,   69,
    0,    0,   70,   71,   72,   73,  168,   74,   75,  112,
  113,  114,    0,    0,  115,  116,  117,    0,    0,   76,
    0,  167,   68,  118,   78,   79,    0,    0,   77,   69,
    0,    0,   70,   71,   72,   73,  184,   74,   75,  112,
  113,  114,    0,    0,  115,  116,  117,    0,    0,   76,
    0,  167,   68,  118,   78,   79,    0,    0,   77,   69,
    0,    0,   70,   71,   72,   73,  192,   74,   75,  112,
  113,  114,    0,    0,  115,  116,  117,    0,    0,   76,
    0,  167,   68,  118,   78,   79,    0,    0,   77,   69,
    0,    0,   70,   71,   72,   73,  204,   74,   75,  112,
  113,  114,    0,    0,  115,  116,  117,    0,    0,   76,
    0,    0,    0,  118,   78,   79,    0,    0,   77,    0,
    0,    0,    0,    0,    0,  178,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  167,   68,  233,    0,    0,
    0,    0,    0,   69,   78,   79,   70,   71,   72,   73,
    0,   74,   75,  112,  113,  114,    0,    0,  115,  116,
  117,    0,    0,   76,    0,    0,    0,  118,  167,   68,
  237,    0,   77,    0,    0,    0,   69,    0,    0,   70,
   71,   72,   73,    0,   74,   75,  112,  113,  114,    0,
    0,  115,  116,  117,    0,    0,   76,    0,   78,   79,
  118,  167,   68,  238,    0,   77,    0,    0,    0,   69,
    0,    0,   70,   71,   72,   73,    0,   74,   75,  112,
  113,  114,    0,    0,  115,  116,  117,    0,    0,   76,
    0,   78,   79,  118,  167,   68,  242,    0,   77,    0,
    0,    0,   69,    0,    0,   70,   71,   72,   73,    0,
   74,   75,  112,  113,  114,    0,    0,  115,  116,  117,
    0,    0,   76,    0,   78,   79,  118,  167,   68,    0,
    0,   77,    0,    0,    0,   69,    0,    0,   70,   71,
   72,   73,    0,   74,   75,  112,  113,  114,    0,    0,
  115,  116,  117,    0,    0,   76,    0,   78,   79,  118,
   67,   68,    0,    0,   77,    0,    0,    0,   69,    0,
    0,   70,   71,   72,   73,    0,   74,   75,    0,    0,
    0,   32,    0,    0,    0,    0,    0,    0,   76,    0,
   78,   79,   67,   68,    0,    0,    0,   77,  173,    0,
   69,    0,    0,   70,   71,   72,   73,    1,   74,   75,
    2,    3,    4,    5,    6,    0,    7,    8,    0,    0,
   76,    0,    0,   78,   79,    9,    0,   89,   10,   77,
   89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   89,    0,    0,  141,    0,    0,    0,
    0,    0,    0,    0,    0,   78,   79,   99,  100,  101,
  102,  103,  104,  105,  106,  107,  108,  109,  110,  191,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   99,  100,  101,  102,  103,  104,  105,  106,  107,  108,
  109,  110,  163,    0,    0,   99,  100,  101,  102,  103,
  104,  105,  106,  107,  108,  109,  110,  164,  165,   89,
    0,    0,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,   99,  100,  101,  102,
  103,  104,  105,  106,  107,  108,  109,  110,
};
short yycheck[] = {                                      59,
  120,   17,  267,  131,   14,   15,  259,    6,  259,  297,
  278,   63,  306,  267,  260,   17,   18,   77,   78,   79,
  308,  260,   32,  260,  263,  264,  265,  266,  282,  157,
  269,  270,   92,  286,  162,  286,   88,   39,  260,   99,
  100,  101,  102,  103,  104,  105,  106,  107,  108,  109,
  110,   50,  305,  290,  305,  115,  267,  191,  178,  298,
  194,  260,  261,  191,  297,  193,  194,  298,  297,  268,
  281,  260,  271,  272,  273,  274,  307,  276,  277,  278,
  279,  280,  261,  298,  283,  284,  285,  301,  298,  288,
   89,  298,  307,  292,  154,  274,  156,  307,  297,  298,
  307,  221,  230,  298,  120,  304,  234,  306,  307,  229,
  282,  239,  307,  257,  258,  235,  308,  298,  298,  260,
  261,  261,  321,  322,  323,  324,  307,  268,    0,  189,
  271,  272,  273,  274,  261,  276,  277,  278,  279,  280,
   12,  304,  283,  284,  285,   17,   18,  288,  260,  260,
  302,  292,  263,  264,  265,  266,  297,  298,  269,  270,
  306,  307,  308,  304,  297,  306,  307,   39,  309,  310,
  311,  312,  313,  314,  315,  316,  317,  318,  319,  320,
  321,  322,  323,  324,  260,  261,  315,  316,  317,  318,
  319,  320,  268,   16,  308,  271,  272,  273,  274,  297,
  276,  277,  278,  279,  280,  306,  307,  283,  284,  285,
   33,  297,  288,   36,  260,  260,  292,  263,  264,  265,
  266,  297,  298,  269,  270,  319,  320,  260,  304,   52,
  306,  307,  278,  309,  310,  311,  312,  313,  314,  315,
  316,  317,  318,  260,  261,  321,  322,  323,  324,  306,
  307,  268,  306,  307,  271,  272,  273,  274,  298,  276,
  277,  278,  279,  280,  260,  297,  283,  284,  285,  297,
  297,  288,  297,  260,  297,  292,  263,  264,  265,  266,
  297,  298,  269,  270,  306,  260,  298,  304,  260,  306,
  307,  278,  309,  310,  311,  312,  313,  314,  315,  316,
  317,  318,  260,  261,  321,  322,  323,  324,  298,  275,
  268,  274,  260,  271,  272,  273,  274,  260,  276,  277,
  278,  279,  280,  260,  306,  283,  284,  285,  298,  307,
  288,  287,  260,  298,  292,  263,  264,  265,  266,  297,
  298,  269,  270,  304,  306,  260,  304,  306,  306,  307,
  278,  309,  310,  311,  312,  313,  314,  315,  316,  260,
  261,  260,  298,  321,  322,  323,  324,  268,  303,  260,
  271,  272,  273,  274,  305,  276,  277,  278,  279,  280,
  306,  306,  283,  284,  285,  303,  305,  288,  305,  260,
  303,  292,  263,  264,  265,  266,  297,  298,  269,  270,
  306,  306,  306,  304,  306,  306,  307,  278,  309,  310,
  311,  312,  313,  314,  315,  316,  260,  261,  305,   12,
  321,  322,  323,  324,  268,   14,   85,  271,  272,  273,
  274,   17,  276,  277,  278,  279,  280,   14,   37,  283,
  284,  285,   58,  213,  288,  222,  260,   -1,  292,  263,
  264,  265,  266,  297,   -1,  269,  270,   -1,   -1,   -1,
  304,   -1,   -1,   -1,  278,  309,  310,  311,  312,  313,
  314,  315,  316,  317,  318,  319,  320,  260,  261,  323,
  324,  317,  318,  319,  320,  268,   -1,   -1,  271,  272,
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
   -1,  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,
  292,   -1,   -1,   -1,   -1,  297,  298,   -1,   -1,   -1,
   -1,   -1,  304,   -1,  306,  307,   -1,  309,  310,  311,
  312,  313,  314,   -1,   -1,  260,  261,   -1,   -1,  321,
  322,  323,  324,  268,   -1,   -1,  271,  272,  273,  274,
   -1,  276,  277,  278,  279,  280,   -1,   -1,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,  292,   -1,   -1,
   -1,   -1,  297,  298,   -1,   -1,   -1,   -1,   -1,  304,
   -1,  306,  307,   -1,  309,  310,  311,  312,  313,  314,
   -1,   -1,  260,  261,   -1,   -1,  321,  322,  323,  324,
  268,   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,
  278,  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,
  288,   -1,   -1,   -1,  292,   -1,   -1,   -1,   -1,  297,
  298,   -1,   -1,   -1,   -1,   -1,  304,   -1,  306,  307,
   -1,  309,  310,  311,  312,  313,  314,   -1,   -1,   -1,
   -1,   -1,   -1,  321,  322,  323,  324,  260,  261,   -1,
  263,  264,  265,  266,   -1,  268,  269,  270,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,
  263,  264,  265,  266,  297,  268,  269,  270,  271,  272,
  273,  274,  305,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  260,  261,  292,
  323,  324,   -1,   -1,  297,  268,   -1,   -1,  271,  272,
  273,  274,  305,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,  292,
  323,  324,   -1,   -1,  297,   -1,   -1,   -1,   -1,   -1,
   -1,  304,   -1,  306,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  260,  261,  262,   -1,   -1,   -1,   -1,   -1,  268,
  323,  324,  271,  272,  273,  274,   -1,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  260,  261,  292,   -1,   -1,   -1,   -1,  297,  268,
   -1,   -1,  271,  272,  273,  274,  305,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  260,  261,  292,  323,  324,   -1,   -1,  297,  268,
   -1,   -1,  271,  272,  273,  274,  305,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  260,  261,  292,  323,  324,   -1,   -1,  297,  268,
   -1,   -1,  271,  272,  273,  274,  305,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  260,  261,  292,  323,  324,   -1,   -1,  297,  268,
   -1,   -1,  271,  272,  273,  274,  305,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  260,  261,  292,  323,  324,   -1,   -1,  297,  268,
   -1,   -1,  271,  272,  273,  274,  305,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,   -1,   -1,  292,  323,  324,   -1,   -1,  297,   -1,
   -1,   -1,   -1,   -1,   -1,  304,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  260,  261,  262,   -1,   -1,
   -1,   -1,   -1,  268,  323,  324,  271,  272,  273,  274,
   -1,  276,  277,  278,  279,  280,   -1,   -1,  283,  284,
  285,   -1,   -1,  288,   -1,   -1,   -1,  292,  260,  261,
  262,   -1,  297,   -1,   -1,   -1,  268,   -1,   -1,  271,
  272,  273,  274,   -1,  276,  277,  278,  279,  280,   -1,
   -1,  283,  284,  285,   -1,   -1,  288,   -1,  323,  324,
  292,  260,  261,  262,   -1,  297,   -1,   -1,   -1,  268,
   -1,   -1,  271,  272,  273,  274,   -1,  276,  277,  278,
  279,  280,   -1,   -1,  283,  284,  285,   -1,   -1,  288,
   -1,  323,  324,  292,  260,  261,  262,   -1,  297,   -1,
   -1,   -1,  268,   -1,   -1,  271,  272,  273,  274,   -1,
  276,  277,  278,  279,  280,   -1,   -1,  283,  284,  285,
   -1,   -1,  288,   -1,  323,  324,  292,  260,  261,   -1,
   -1,  297,   -1,   -1,   -1,  268,   -1,   -1,  271,  272,
  273,  274,   -1,  276,  277,  278,  279,  280,   -1,   -1,
  283,  284,  285,   -1,   -1,  288,   -1,  323,  324,  292,
  260,  261,   -1,   -1,  297,   -1,   -1,   -1,  268,   -1,
   -1,  271,  272,  273,  274,   -1,  276,  277,   -1,   -1,
   -1,  260,   -1,   -1,   -1,   -1,   -1,   -1,  288,   -1,
  323,  324,  260,  261,   -1,   -1,   -1,  297,  298,   -1,
  268,   -1,   -1,  271,  272,  273,  274,  260,  276,  277,
  263,  264,  265,  266,  267,   -1,  269,  270,   -1,   -1,
  288,   -1,   -1,  323,  324,  278,   -1,  306,  281,  297,
  309,  310,  311,  312,  313,  314,  315,  316,  317,  318,
  319,  320,  321,  322,   -1,   -1,  298,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  323,  324,  309,  310,  311,
  312,  313,  314,  315,  316,  317,  318,  319,  320,  298,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
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
"vars : tipo variables PYC",
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
"main : VOID MAIN PIZ PDE cuerpo",
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
#line 191 "lexico.y"
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
#line 702 "y_tab.c"
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
