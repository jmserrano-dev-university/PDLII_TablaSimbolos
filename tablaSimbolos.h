/* 
 * File:   tablaSimbolos.c
 * Author: José Manuel Serrano Mármol
 * Author: Raúl Salazar de Torres
 */
#include <string.h>

#ifndef TABLASIMBOLOS_H
#define	TABLASIMBOLOS_H

//CONSTANTES definidas
#define TAM_TABLA_SIMBOLOS 1000

//Campo ENTRADA en TS

typedef struct{
    enum  { marca = 1, proc, func, var, paramForm, rangoArray } tipoEntrada;
    char nombre[100];
    enum { entero = 1, real, booleano, caracter, cadena, conjunto, desconocido } tipoDato ;
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
int existeEntradaLocal(char * nombre);
void imprimirTS();



#endif	/* TABLASIMBOLOS_H */

