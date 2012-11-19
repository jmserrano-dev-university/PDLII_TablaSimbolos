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
    topeTS--;
    while(TS[topeTS].tipoEntrada != marca){
        topeTS--;
    }
}

/**
 * 
 * @param nombre
 */
int existeEntrada(char * nombre){
    int tope = topeTS - 1;
    
    while(strcmp(TS[tope].nombre,nombre) != 0 && tope >= 0){
        tope--;
    }
    
    if(tope > -1){
        return TS[tope].tipoDato; //true
    }else{
        return 0; //false
        
    }
}

/**
 * 
 * @param nombre
 */
int existeEntradaDefTipo(char * nombre){
    int tope = topeTS - 1;
    
    while(strcmp(TS[tope].nombre,nombre) != 0 && TS[tope].tipoEntrada != defTipo && tope >= 0){
        tope--;
    }
    
    if(tope > -1){
        return TS[tope].tipoDato; //true
    }else{
        return 0; //false
        
    }
}


/**
 * 
 * @param nombre
 */
int existeEntradaLocal(char * nombre){
    int tope = topeTS - 1;
    
    while(strcmp(TS[tope].nombre,nombre) != 0 && TS[tope].tipoEntrada != marca){
        tope--;
    }
    
    if(TS[tope].tipoEntrada != marca){
        return TS[tope].tipoDato; //True
    }else{
        return 0; //False
    }
    
}

/**
 * 
 */
void imprimirTS(){
    int i;
    
    printf("INICIO TABLA\n");
    
    for(i = 0; i < topeTS; i++){
        printf("NOMBRE:%s -- TIPOENT: %d -- TIPODAT: %d -- NUMPARAM: %d \n",TS[i].nombre,TS[i].tipoEntrada,TS[i].tipoDato,TS[i].parametros);
    }
    printf("\nFIN TABLA\n\n");
}

/**
 * 
 */
entrada rellenaEntrada(unsigned int linea, char* nombre, tDato tipoDato, tEntrada tipoEntrda, unsigned int numParam){
    entrada e;
    e.linea = linea;
    strcpy(e.nombre,nombre);
    e.tipoDato = tipoDato;
    e.tipoEntrada = tipoEntrda;
    e.parametros = numParam;
    return e;
}