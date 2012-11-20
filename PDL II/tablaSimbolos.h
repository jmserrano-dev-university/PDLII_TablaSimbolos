/* 
 * File:   tablaSimbolos.c
 * Define la estructura de la TABLA de SIMBOLOS y sus operaciones
 * 
 * Author: José Manuel Serrano Mármol
 * Author: Raúl Salazar de Torres
 */
#include <string.h>

#ifndef TABLASIMBOLOS_H
#define	TABLASIMBOLOS_H

//CONSTANTES definidas
#define TAM_TABLA_SIMBOLOS 1000

//Campo ENTRADA en TS
typedef enum  { marca = 1, proc, func, var, paramForm, rangoArray, defTipo} tEntrada;
typedef enum { entero = 1, real, booleano, caracter, cadena, conjunto, desconocido, sinTipo} tDato ;

typedef struct{
    tDato tipoDato;
    char nombre[100];
    tEntrada tipoEntrada;
    unsigned int parametros;
    unsigned int linea;
}entrada;

//Estructura de datos
entrada TS[TAM_TABLA_SIMBOLOS]; //Tabla de simbolos
int topeTS;                 //Indica por donde va la pila TS

//Funciones
void createTS();
void pushTS(entrada e);
entrada popTS();
void borrarHastaMarcaTS();
int existeEntrada(char * nombre);
int existeEntradaDefTipo(char * nombre);
int existeEntradaLocal(char * nombre);
void imprimirTS();
entrada rellenaEntrada(unsigned int linea, char* nombre, tDato tipoDato, tEntrada tipoEntrda, unsigned int numParam);

int pushTSParametroFormal(unsigned int linea, char* nombre, tDato tipoDato);
void copiaParametrosFormales();

#endif	/* TABLASIMBOLOS_H */

