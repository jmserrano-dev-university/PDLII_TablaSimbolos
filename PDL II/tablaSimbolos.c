#include <stdio.h>
#include "tablaSimbolos.h"


/**
 * Inicializador de la tabla de simbolos
 */
void createTS(){
    topeTS = 0;
}

/**
 * Procedimiento para insertar una entrada en la tabla de símbolos
 * @param e Entrada en la tabla de simbolos
 */
void pushTS(entrada e){
    TS[topeTS] = e;
    topeTS++;
}

/**
 * Procedimineto para sacar la última entrada en la talba de símbolos
 * @return Entrada que ha sido extraida
 */
entrada popTS(){
    return TS[topeTS--];
}

/**
 * Procedimiento que borra la tabla de simbolos hasta la MARCA más próxima
 */
void borrarHastaMarcaTS(){
    topeTS--;
    while(TS[topeTS].tipoEntrada != marca){
        topeTS--;
    }
}

/**
 * Función que comprueba si existe una entrada en la tabla de simbolos por nombre
 * @param nombre Nombre de la entrada a comprobar
 * @return 0 si no exite la entrada en la tabla de simbolos o el tipo del dato 
 * en caso de existir
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
 * Función que comprueba si existe un TIPO DE DEFINICIÓN PROPIA en la tabla de simbolos
 * @param nombre Nombre de la entrada a comprobar
 * @return 0 si no exite la entrada en la tabla de simbolos o el tipo del dato 
 * en caso de existir
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
 * Función que comprueba si existe una entrada hasta una MARCA (LOCAL)
 * @param nombre Nombre Nombre de la entrada a comprobar
 * @return 0 si no exite la entrada en la tabla de simbolos o el tipo del dato 
 * en caso de existir
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
 * Procedimineto para imprimir la tabla de simbolos
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
 * Función que rellena una entrada de la tabla de simbolos
 * @param linea Línea en que se encuentra en componente ha insertar
 * @param nombre Nombre del componenete que se va a insertar
 * @param tipoDato Tipo de dato del componente que se va a insertar
 * @param tipoEntrda Tipo de entrada del componente que se va a insertar
 * @param numParam Número de parámetros que tiene el componenete que se va a insertar
 * @return La entrada rellena
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
 * Introduce los parametros formales de un procedimineto
 * @param linea Línea donde se encuentra el parámetro a insertar
 * @param nombre Nombre del parámetro a insertar
 * @param tipoDato Tipo del parámetro a insertar
 * @return 0 sino se ha podido insertar o 1 si se ha insertado correctamente
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
   TS[tope].parametros++;
   
   return 1;
}

/**
 * Procedimiento que realiza una copia de los parámetros de un procedimineto
 * debajo de una MARCA, para considerarlos como parámetros locales
 */
void copiaParametrosFormales(){
   int tope = topeTS - 2; //Nos saltamos la marca
   
   while(TS[tope].tipoEntrada == paramForm){
       pushTS(rellenaEntrada(TS[tope].linea,TS[tope].nombre,TS[tope].tipoDato,TS[tope].tipoEntrada,0));
       tope--;
   }
}


/**
 * Función que comprueba los parámetros de un procedimiento cuando se realiza una llamada
 * @param nombreProc Nombre del procedimiento invocado
 * @param tipoVariable Tipo de dato del parámetro a comprobar
 * @param posicion Posición en la que se encuentra dicho parámetro
 * @return 0 si existe parametro de ese tipo, 1 si es correcto, 2 si el número de parámetros
 *  de la llamada al procedimiento en mayor
 */
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

/**
 * Función que comprueba si el número de parámetros de una llamada a procedimiento es correcto
 * @param nombreProc Nombre del procedimiento que se desea comprobar
 * @param numTotalParam Númeto de parámetros de la llamada
 * @return 0 si el número de parámetros en menor, 1 si el número de parámetros en correcto
 */
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

