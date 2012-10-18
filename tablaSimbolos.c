#include <stdio.h>

#include "tablaSimbolos.h"


//Funciones PRIVADAS



//Funciones PÚBLICAS

/**
 * 
 */
void createTS(){
    topeTS = 0;
}

/**
 * 
 * @param e
 */
void pushTS(entrada e){
    TS[topeTS] = e;
    topeTS++;
}

/**
 * 
 * @return 
 */
entrada popTS(){
    return TS[topeTS--];
}

/**
 * 
 */
void borrarHastaMarcaTS(){
    while(TS[topeTS].tipoEntrada != marca){
        topeTS--;
    }
    topeTS--;
}

/**
 * 
 * @param nombre
 */
int existeEntrada(char * nombre){
    int tope = topeTS;
    
    while(strcmp(TS[tope].nombre,nombre) != 0 && topeTS != 0){
        tope--;
    }
    
    if(tope !=0){
        return 1; //true
    }else{
        return 0; //false
    }
}

/**
 * 
 * @param nombre
 */
int existeEntradaLocal(char * nombre){
    int tope = topeTS;
    
    while(strcmp(TS[tope].nombre,nombre) != 0 && TS[tope].tipoEntrada != marca){
        tope--;
    }
    
    if(TS[tope].tipoEntrada != marca){
        return 1; //True
    }else{
        return 0; //False
    }
    
}

/**
 * 
 */
void imprimirTS(){
    int i;
    for(i = 0; i < topeTS; i++){
        printf("NOMBRE:%s -- TIPOENT: %d -- TIPODAT: %d -- NUMPARAM: %d \n",TS[i].nombre,TS[i].tipoEntrada,TS[i].tipoDato,TS[i].parametros);
    }
}