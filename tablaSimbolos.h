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

/*------------------------ CONSTANTES ---------------------------*/
#define TAM_TABLA_SIMBOLOS 1000 /** Numero máximo de entradas en la tabla de simbolos */


/*------------------------ DEFINICIONES ---------------------------*/

/** Enumeración para el tipo de entrada en la tabla de símbolos*/
typedef enum  { marca = 1, proc, func, var, paramForm, rangoArray, defTipo} tEntrada;

/** Enumeración para el tipo de dato insertado en la tabla de simbolos*/
typedef enum { entero = 1, real, booleano, caracter, cadena, conjunto, desconocido, sinTipo} tDato ;

/** Estructura de una entrada en la tabla de símbolos*/
typedef struct{
    tDato tipoDato;
    char nombre[100];
    tEntrada tipoEntrada;
    unsigned int parametros;
    unsigned int linea;
}entrada;


entrada TS[TAM_TABLA_SIMBOLOS]; /** Tabla de simbolos*/
int topeTS;                     /** Tope de la talba de simbolos*/



/*------------------------ FUNCIONES ---------------------------*/

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

int compruebaParametroProcedimiento(char * nombreProc, tDato tipoVariable, int posicion);
int compruebaNumeroParametros(char * nombreProc, int numTotalParam);

#endif	/* TABLASIMBOLOS_H */

