%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaSimbolos.h" //Añadimos la tabla de simbolos

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

tDato tipoAux; //Almacenamos el tipo para las declaraciones de VARIABLES
int numParametros;
char nombreProc[100];

%}

/* A continuación declaramos los nombres simbólicos de los tokens, así como el símbolo inicial de la gramática (axioma). Byacc se encarga de asociar a cada uno un código */
%start prog

%token CAB1 CAB2 CASE ID
%token NUM BREAK
%token INT FLOAT CHAR SET TYPEDEF REAL 
%token STRING BOOL TRUE FALSE CARACTER
%token OP_INOUT EMPTY
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
/* Sección de producciones que definen la gramática */
prog : dec1 dec2 | dec2 {createTS();}
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
tipos_s : tipos_s tipos | tipos /*PYC*/
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
tipos : TYPEDEF tipo ID PYC {
								if(existeEntradaLocal($3.cadena) == 0){
									pushTS(rellenaEntrada(linea_actual,$3.cadena,$2.tipo,defTipo,0));
								}else{
									printf("\n\n*Error linea %d: El identificador de la refinicion de tipo ya existe",linea_actual);
								}
							}
;



tipo : INT {$$.tipo = entero;}
| FLOAT {$$.tipo = real;}
| CHAR {$$.tipo = caracter;}
| SET {$$.tipo = conjunto;}
| ID {
		if((tipoAux = existeEntradaDefTipo($1.cadena)) != 0){
		 $$.tipo = tipoAux;
		}else{
			printf("\n\n* Error linea %d: Tipo propio no definido",linea_actual);
			
		}
	 }
| BOOL {$$.tipo = booleano;}
| STRING {$$.tipo = cadena;}
;

vars : tipo {tipoAux = $1.tipo;} variables PYC 
;

variables : variables COMA variables_s
| variables_s 
;

variables_s : variable
| variable ASI expresion { 				   
						   if(tipoAux != $3.tipo){
								printf("\n\n* Error linea: %d. Asignacion de tipo incorrecta en la declaración",linea_actual);
								
						   }
						 }


 
;
variable : ID { if(existeEntradaLocal($1.cadena) == 0){
					pushTS(rellenaEntrada(linea_actual,$1.cadena,tipoAux,var,0)); 
					/*imprimirTS();*/
			    }else{
					printf("\n\n* Error linea: %d: Identificador declarado anteriormente\n",linea_actual);
					
				}
			  }
/*| ID CORI NUM CORD ¿ESTO SE PONE?*/
;


proc : VOID ID PIZ{if(existeEntradaLocal($2.cadena) != 0){
						printf("\n\n* Error linea: %d: Funcion ya declarada",linea_actual);
						
					  }else{
						pushTS(rellenaEntrada(linea_actual,$2.cadena,sinTipo,proc,0));
						/*imprimirTS();*/
					  }
				   } params PDE {pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); /*imprimirTS();*/} cuerpo {borrarHastaMarcaTS(); /*imprimirTS();*/}
				   
| VOID ID PIZ {if(existeEntradaLocal($2.cadena) != 0){
					printf("\n\n* Error linea: %d: Funcion ya declarada",linea_actual);
					
				  }else{
					pushTS(rellenaEntrada(linea_actual,$2.cadena,sinTipo,proc,0));
					/*imprimirTS();*/
				  }
			   } PDE {pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); copiaParametrosFormales(); /*imprimirTS();*/}cuerpo {borrarHastaMarcaTS(); /*imprimirTS();*/}
;

params : params COMA tipo ID {if(!pushTSParametroFormal(linea_actual, $4.cadena, $3.tipo)){ printf("\n\n* Error linea: %d: Parametro formal existente\n",linea_actual); } /*else imprimirTS();*/}
| tipo ID {if(!pushTSParametroFormal(linea_actual, $2.cadena, $1.tipo)){ printf("\n\n* Error linea: %d: Parametro formal existente\n",linea_actual); }/*else imprimirTS();*/}
;

sentencia : switch 
| if 
| while 
| in 
| out 
| proc
| llamada_proc 
| llamada_conjunto PYC 
| expresion PYC
;
switch : SWITCH PIZ ID PDE LLIZ casos_s caso_defecto LLDE { if((tipoAux = existeEntradaLocal($3.cadena)) != 0 && tipoAux == $6.tipo){
																$$.tipo = tipoAux;
																	if(tipoAux != entero && tipoAux != caracter){ 
																		printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
																		
																	}
															   }else{
																if((tipoAux = existeEntrada($3.cadena)) != 0 && tipoAux == $6.tipo){
																 $$.tipo = tipoAux;
																	 if(tipoAux != entero && tipoAux != caracter){
																		printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
																		
																	 }
																}else{
																	if(tipoAux == $6.tipo){
																		printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
																		
																	}else{
																		printf("\n\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
																		
																	}
																}
															   }
															  } 
| SWITCH PIZ ID PDE LLIZ caso_defecto LLDE { if((tipoAux = existeEntradaLocal($3.cadena)) != 0){
												$$.tipo = tipoAux;
													if(tipoAux != entero && tipoAux != caracter){ 
														printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
														
													}
											   }else{
												if((tipoAux = existeEntrada($3.cadena)) != 0){
												 $$.tipo = tipoAux;
													 if(tipoAux != entero && tipoAux != caracter){
														printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
														
													 }
												}else{
												 printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
												 
												}
											   }
											  }
| SWITCH PIZ ID PDE LLIZ casos_s LLDE{ 	if((tipoAux = existeEntradaLocal($3.cadena)) != 0 && tipoAux == $6.tipo){
											$$.tipo = tipoAux;
												if(tipoAux != entero && tipoAux != caracter){
													printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
													
												}
										   }else{
											if((tipoAux = existeEntrada($3.cadena)) != 0 && tipoAux == $6.tipo){
											 $$.tipo = tipoAux;
												 if(tipoAux != entero && tipoAux != caracter){
													printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
													
												 }
											}else{
												if(tipoAux == $6.tipo){
													printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
													
												}else{
													printf("\n\n* Error linea: %d. Tipo de los CASES no corresponde con el tipo del SWITCH\n",linea_actual);
													
												}
											}
										   }
										  } 
| SWITCH PIZ ID PDE LLIZ LLDE { if((tipoAux = existeEntradaLocal($3.cadena)) != 0){
									$$.tipo = tipoAux;
									if(tipoAux != entero && tipoAux != caracter){
										printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
										
									}
										
								   }else{
									if((tipoAux = existeEntrada($3.cadena)) != 0){
										 $$.tipo = tipoAux;
										 if(tipoAux != entero && tipoAux != caracter){
											printf("\n\n* Error linea %d: Expresion en switch es distinto a entero o caracter",linea_actual);
											
										 }
									}else{
										printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
										
									}
								   }
								  }
;

casos_s : casos_s CASE literal PUNTOS sentencias BREAK PYC {	if($1.tipo != $3.tipo){ 
																	printf("\n\n* Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
																}else{
																	$$.tipo = $3.tipo;
																}
														    }
| CASE literal PUNTOS sentencias BREAK PYC {$$.tipo = $2.tipo;}
| casos_s CASE literal PUNTOS BREAK PYC {	if($1.tipo != $3.tipo){
												printf("\n\n* Error linea: %d: CASEs del Switch con diferente tipo",linea_actual);
											}else{
												$$.tipo = $3.tipo;
											}
										}
| CASE literal PUNTOS BREAK PYC {$$.tipo = $2.tipo;}
;

literal : NUM {$$.tipo = $1.tipo;} 
| CARACTER {$$.tipo = $1.tipo;}
;

sentencias : sentencias sentencia | sentencia
;

caso_defecto : DEFAULT PUNTOS sentencias | DEFAULT PUNTOS
;

bloque : LLIZ sentencias LLDE | sentencia | LLIZ LLDE
;


if : IF expresion bloque ELSE bloque { if($2.tipo != booleano){ printf("\n\n* Error linea %d: Expresion en if no es booleana",linea_actual);} }
| IF expresion bloque { if($2.tipo != booleano){ printf("\n\n* Error linea %d: Expresion en if no es booleana",linea_actual); } }
;


expresion : expresion SUM expresion { if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real || $1.tipo == cadena || $1.tipo == conjunto /*UNION*/)){
										$$.tipo = $1.tipo;
									  }else{
										printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									  }
									}
| expresion RES expresion{ if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real || $1.tipo == conjunto /*DIFERENCIA*/)){
								$$.tipo = $1.tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
							  }
							}
| expresion MUL expresion { if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real)){
								$$.tipo = $1.tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
| expresion DIV expresion { if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real || $1.tipo == conjunto /*INTERSECCION*/)){
								$$.tipo = $1.tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
| expresion AND expresion 	{ if($1.tipo == $3.tipo && $1.tipo == booleano){
								$$.tipo = $1.tipo;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
| expresion OR expresion 	{ if($1.tipo == $3.tipo && $1.tipo == booleano){
									$$.tipo = $1.tipo;
							   }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
							   }
							}
| expresion MAYORIQ expresion 	{ if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real)){
									$$.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
| expresion MENORIQ expresion 	{ if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real)){
									$$.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
| expresion MAYORQ expresion	{ if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real)){
									$$.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
| expresion MENORQ expresion	{ if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real)){
									$$.tipo = booleano;
								  }else{
									printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
									
								  }
								}
| expresion DIST expresion 	{ if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real || $1.tipo == booleano)){
								$$.tipo = booleano;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
| expresion II expresion 	{ if($1.tipo == $3.tipo && ($1.tipo == entero || $1.tipo == real || $1.tipo == booleano)){
								$$.tipo = booleano;
							  }else{
								printf("\n\n* Error en la linea: %d. Expresion con tipos distintos\n",linea_actual);
								
							  }
							}
| NUM
| PIZ expresion PDE {$$.tipo = $2.tipo;}
| NEGEXP expresion	{ if($2.tipo == booleano){
							$$.tipo = booleano;
					   }else{
							printf("\n\n* Error linea: %d. Expresion con tipos distintos\n",linea_actual);
							
					   }
					}
| ID { if((tipoAux = existeEntradaLocal($1.cadena)) != 0){
		$$.tipo = tipoAux;
	   }else{
		if((tipoAux = existeEntrada($1.cadena)) != 0){
			$$.tipo = tipoAux;
		}else{
			printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
			
		}
	   }
     }
| REAL
| TRUE
| FALSE
| CARACTER
| STRING
| crea_conjunto {$$.tipo = $1.tipo;}
| llamada_complementario 
| llamada_sivacio {$$.tipo = $1.tipo;}
| llamada_length {$$.tipo = $1.tipo;}
| ID ASI expresion { if((tipoAux = existeEntradaLocal($1.cadena)) != 0){
						$$.tipo = tipoAux;
					   }else{
						if((tipoAux = existeEntrada($1.cadena)) != 0){
						 $$.tipo = tipoAux;
						}else{
							printf("\n\n* Error linea: %d. Variable no declarada\n",linea_actual);
						}
					   }
					   
					   if(tipoAux != $3.tipo){
							printf("\n\n* Error linea: %d. Asignacion de tipo incorrecta",linea_actual);
							
					   }
					 }
;

while : WHILE PIZ expresion PDE bloque { if($3.tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
| WHILE PIZ expresion PDE PYC { if($3.tipo != booleano){ printf("\n\n* Error linea %d: Expresion en while no es booleana",linea_actual); } }
;

out : OUT PIZ STRING COMA ids PDE PYC
| OUT PIZ STRING PDE PYC
;

ids : ids COMA ID | ID
;

in : IN PIZ OP_INOUT COMA ID PDE PYC
;

llamada_proc : ID PIZ {  if(existeEntrada($1.cadena) != sinTipo){
							printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
							
						 }
						 
					  } params_llamada {	if(compruebaNumeroParametros($1.cadena, numParametros) == 0){ //Error en tipo
												printf("\n\n* Error linea %d: El numero de parametros no coindicen en la llamada al procedimiento", linea_actual);
												
											}		
									   }  PDE PYC

| ID PIZ PDE PYC { if(existeEntrada($1.cadena) != sinTipo){
					  printf("\n\n* Error linea: %d: Llamada a procedimiento no declarada con anterioridad\n",linea_actual);
					  
				   }
				 }
;

params_llamada : params_llamada COMA expresion { numParametros++;
													if(compruebaParametroProcedimiento($-1.cadena, $3.tipo, numParametros) == 0){
														printf("\n\n* Error linea: %d: Parametro del procedimiento no coinciden en tipo", linea_actual);
														
													}
													
													if(compruebaParametroProcedimiento($-1.cadena, $3.tipo, numParametros) == 2){
														printf("\n\n* Error linea: %d: Numero de parametros excedido en la llamada a procedimiento", linea_actual);
														
													}
												}
| expresion {numParametros = 1; if(compruebaParametroProcedimiento($-1.cadena, $1.tipo, numParametros) == 0){
									printf("\n\n* Error linea: %d: Parametro del procedimiento no coinciden en tipo", linea_actual);
									
								}
			}
;

main : VOID MAIN {pushTS(rellenaEntrada(linea_actual,"marca",sinTipo,marca,0)); /*imprimirTS();*/}  PIZ PDE cuerpo {borrarHastaMarcaTS(); /*imprimirTS();*/}
;

cuerpo : LLIZ vars_s sentencias LLDE
| LLIZ sentencias LLDE
| LLIZ vars_s LLDE
| LLIZ LLDE
;

llamada_conjunto : inserta_conjunto
| saca_conjunto 
| destruye_conjunto
;

crea_conjunto : CREATE PIZ PDE {
									$$.tipo = conjunto;
							   }
;
destruye_conjunto : DELETE PIZ ID PDE { if( existeEntradaLocal($3.cadena) != conjunto && existeEntrada($3.cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}
									  }
;
llamada_sivacio : EMPTY PIZ ID PDE {  	
										if( existeEntradaLocal($3.cadena) != conjunto && existeEntrada($3.cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}else{
											$$.tipo = booleano;
										}
								   }
;

llamada_length : LENGTH PIZ ID PDE{
									if( existeEntradaLocal($3.cadena) != conjunto && existeEntrada($3.cadena) != conjunto){
										printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
									}else{
										$$.tipo = entero;
									}
								  }
;

inserta_conjunto : ID ADDC expresion {
										if( existeEntradaLocal($1.cadena) != conjunto && existeEntrada($1.cadena) != conjunto){
											printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
										}
									 }
;

saca_conjunto : ID MINC expresion{
									if( existeEntradaLocal($1.cadena) != conjunto && existeEntrada($1.cadena) != conjunto){
										printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
									}
								 }
;


llamada_complementario : COMPC ID {
									if( existeEntradaLocal($2.cadena) != conjunto && existeEntrada($2.cadena) != conjunto){
										printf("\n\n* Error linea %d: Identificador no declarado",linea_actual);
									}else{
										$$.tipo = conjunto;
									}
								  }
;

%%
/* Aquí incluimos el fichero generado por el Flex, que implementa la función yylex() */
#include "lexyy.c"
