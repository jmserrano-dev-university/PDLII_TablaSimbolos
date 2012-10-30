%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaSimbolos.h" //A�adimos la tabla de simbolos

/*Declaraci�n de para usar yylval*/
typedef struct{
	int entero;
	char *cadena;
	tDato tipo;
}atributos;

#define YYSTYPE atributos;

/*Fin Declaraci�n*/



int linea_actual = 1;

/* Se debe modificar la implementaci�n la funci�n yyerror. En este caso simplemente se escribe el mensaje en pantalla, por lo que habr� que a�adir previamente la declaraci�n de la variable global asociada al n�mero de l�nea (declarada en la pr�ctica anterior en el fichero fuente del flex) y modificar yyerror para que se muestre dicho n�mero de l�nea */
void yyerror (char *msg){
	char buffer[50];
	sprintf(buffer,"%s %d",msg,linea_actual);
	fprintf(stderr, "\n");
	fprintf(stderr,buffer);
}


%}
/* A continuaci�n declaramos los nombres simb�licos de los tokens, as� como el s�mbolo inicial de la gram�tica (axioma). Byacc se encarga de asociar a cada uno un c�digo */
%start prog

%token CAB1 CAB2 CASE ID
%token NUM BREAK
%token INT FLOAT CHAR SET TYPEDEF REAL 
%token STRING BOOL TRUE FALSE CARACTER
%token TEXTO_OUT OP_INOUT EMPTY
%token LENGTH VOID SWITCH
%token WHILE INCLUDE DEFINE
%token IF IN OUT DEFAULT ELSE
%token CREATE INSERT MAIN EXTRACT DELETE
%token MINUS UNION INTERSECTION NEG

%token PIZ PDE COMEN ERR

%token CORI CORD PUNTOS LLIZ LLDE PYC COMA

%left ASI
%left MAYORIQ MENORIQ MAYORQ MENORQ DIST II
%left SUM RES
%left MUL DIV
%left AND OR
%left ADDC MINC COMPC
%left NEGEXP





%%
/* Secci�n de producciones que definen la gram�tica */
prog : dec1 dec2 | dec2
;
dec1 : incs_s defs_s tipos_s
| defs_s tipos_s 
| incs_s tipos_s
| incs_s defs_s
| incs_s
| defs_s
| tipos_s
;
dec2 : vars_s procs_s main
| vars_s main
| procs_s main
| main
;
incs_s : incs_s incs | incs
;
defs_s : defs_s defs defs 
;
tipos_s : tipos_s tipos | tipos PYC
;
vars_s : vars_s vars | vars
;
procs_s : procs_s proc | proc   
;
incs : INCLUDE cabeceras
;
cabeceras : CAB1 | CAB2
;
defs : DEFINE ID NUM
;
tipos : TYPEDEF tipo ID
;
tipo : INT | FLOAT | CHAR | SET | ID | BOOL | STRING
;
vars : tipo variables PYC
;
variables : variables COMA variables_s | variables_s
;
variables_s : variable | variable ASI expresion
;
variable : ID | ID CORI NUM CORD
;
proc : VOID ID PIZ params PDE cuerpo
| VOID ID PIZ PDE cuerpo
;
params : params COMA tipo ID | tipo ID
;
sentencia : switch | if | while | in | out | proc |llamada_proc | llamada_conjunto PYC | expresion PYC
;
switch : SWITCH PIZ ID PDE LLIZ casos_s caso_defecto LLDE
| SWITCH PIZ ID PDE LLIZ caso_defecto LLDE
| SWITCH PIZ ID PDE LLIZ casos_s LLDE | SWITCH PIZ ID PDE LLIZ LLDE
;
casos_s : casos_s CASE literal PUNTOS sentencias BREAK PYC
| CASE literal PUNTOS sentencias BREAK PYC
| casos_s CASE literal PUNTOS BREAK PYC
| CASE literal PUNTOS BREAK PYC
;
literal : NUM | TEXTO_OUT
;
sentencias : sentencias sentencia | sentencia
;
caso_defecto : DEFAULT PUNTOS sentencias | DEFAULT PUNTOS
;
bloque : LLIZ sentencias LLDE | sentencia | LLIZ LLDE
;
if : IF expresion bloque ELSE bloque
| IF expresion bloque
;
expresion : expresion SUM expresion | expresion RES expresion
| expresion MUL expresion | expresion DIV expresion | expresion AND expresion
| expresion OR expresion | expresion MAYORIQ expresion
| expresion MENORIQ expresion | expresion MAYORQ expresion
| expresion MENORQ expresion | expresion DIST expresion 
| expresion II expresion | NUM | PIZ expresion PDE 
| NEGEXP expresion | ID | REAL| TRUE | FALSE | CARACTER | TEXTO_OUT | crea_conjunto 
| llamada_complementario 
| llamada_sivacio | llamada_length | ID ASI expresion
;
while : WHILE PIZ expresion PDE bloque
| WHILE PIZ expresion PDE PYC
;
out : OUT PIZ TEXTO_OUT COMA ids PDE PYC
| OUT PIZ TEXTO_OUT PDE PYC
;
ids : ids COMA ID | ID
;
in : IN PIZ OP_INOUT COMA ID PDE PYC
;
llamada_proc : ID PIZ params_llamada PDE PYC
| ID PIZ PDE PYC
;
params_llamada : params_llamada COMA expresion
| expresion
;
main : VOID MAIN PIZ PDE cuerpo
;
cuerpo : LLIZ vars_s sentencias LLDE
| LLIZ sentencias LLDE
| LLIZ vars_s LLDE
| LLIZ LLDE
;
llamada_conjunto : inserta_conjunto
| saca_conjunto | destruye_conjunto
;

crea_conjunto : CREATE PIZ PDE
;
destruye_conjunto : DELETE PIZ ID PDE
;
llamada_sivacio : EMPTY PIZ ID PDE
;
llamada_length : LENGTH PIZ ID PDE
;

//inserta_conjunto : INSERT PIZ expresion COMA ID PDE
//;
inserta_conjunto : expresion ADDC ID
;

//saca_conjunto : EXTRACT PIZ expresion COMA ID PDE
//;
saca_conjunto : expresion MINC ID
;

//llamada_diferencia : MINUS PIZ expresion COMA expresion PDE
//;

//llamada_union : UNION PIZ expresion COMA expresion PDE
//;

//llamada_interseccion : INTERSECTION PIZ expresion COMA expresion PDE
//;

//llamada_complementario : NEG PIZ expresion PDE
//;
llamada_complementario : COMPC expresion
;

%%
/* Aqu� incluimos el fichero generado por el Flex, que implementa la funci�n yylex() */
#include "lexyy.c"
