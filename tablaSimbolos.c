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
    int encontrado = 0;
    
    while(!encontrado && tope >= 0){
        if(strcmp(TS[tope].nombre,nombre) == 0 && TS[tope].tipoEntrada == defTipo ){
            break;
        }else{
            tope--;
        }
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


/**
 * Introduce los parametros formales
 * @param linea
 * @param nombre
 * @param tipoDato
 * @return 
 */
int pushTSParametroFormal(unsigned int linea, char* nombre, tDato tipoDato){
    int tope = topeTS - 1;
    int existeParametro = 0; 
    
   while((!existeParametro) && (TS[tope].tipoEntrada != proc)){ 
      if(TS[tope].tipoEntrada == paramForm){ 
         if(!strcmp(TS[tope].nombre,nombre)){ 
             existeParametro = 1;  //Encontramos que ya existe la variable
         }else{ 
             tope--;
         }
      }
   }       
   //Si no encontramos el parametro (por tanto hemos llegado a una marca) la introducimos en TS
   if(!existeParametro){  
      pushTS(rellenaEntrada(linea,nombre,tipoDato,paramForm,0));
   }else{  //La variable ya ha sido declarada
       return 0;
   }
  //Incrementamos el numero de parametros del primer identificador tipo procedimiento que nos encontremos
/*   while(TS[pos].tipoEntrada != proc){
      pos--;
   } */
   TS[tope].parametros++;
   
   return 1;
}

void copiaParametrosFormales(){
   int tope = topeTS - 2; //Nos saltamos la marca
   
   while(TS[tope].tipoEntrada == paramForm){
       pushTS(rellenaEntrada(TS[tope].linea,TS[tope].nombre,TS[tope].tipoDato,TS[tope].tipoEntrada,0));
       tope--;
   }
}



int compruebaParametroProcedimiento(char * nombreProc, tDato tipoVariable, int posicion){
    int i = topeTS - 1;
    
    while(strcmp(TS[i].nombre,nombreProc)!=0 && i >= 0){
        i--;
    }
    
    if(posicion <= TS[i].parametros){
        //Vamos hasta el paramentro
        i += posicion;
        
        if(TS[i].tipoDato == tipoVariable){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 2;
    }
}

int compruebaNumeroParametros(char * nombreProc, int numTotalParam){
    int i = topeTS - 1;
    
    while(strcmp(TS[i].nombre,nombreProc)!=0 && i >= 0){
        i--;
    }
    
    
    if(TS[i].parametros == numTotalParam){
        return 1;
    }else{
        return 0;
    }
    
    
}

