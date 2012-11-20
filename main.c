/* 
 * File:   main.c
 * 
 * Author: José Manuel Serrano Mármol
 * Author: Raúl Salazar de Torres
 */

#include <stdio.h>
#include <stdlib.h>
#include "tablaSimbolos.h"



int main(int argc, char** argv) {
    int proc;
    createTS();
    //imprimirTS();
    
    entrada marca1 = rellenaEntrada(0,"",sinTipo,marca,0); //MARCA
    pushTS(marca1);
    //imprimirTS();
    
    entrada marca2 = rellenaEntrada(0,"varA",entero,var,0);
    pushTS(marca2);
    //imprimirTS();
    
    entrada marca3 = rellenaEntrada(0,"varB",real,var,0);
    pushTS(marca3);
    //imprimirTS();
    
    entrada marca4 = rellenaEntrada(0,"main",entero,func,2);
    pushTS(marca4);
    
    entrada marca5 = rellenaEntrada(0,"dato1",entero,var,0);
    pushTS(marca5);
    
    entrada marca6 = rellenaEntrada(0,"dato2",entero,var,0);
    pushTS(marca6);
    //imprimirTS();
    
    entrada marca7 = rellenaEntrada(0,"",sinTipo,marca,0); //MARCA
    pushTS(marca7);
    
    entrada marca8 = rellenaEntrada(0,"varC",real,var,0);
    pushTS(marca8);
    
    imprimirTS();
    
    //Comprobamos entrada LOCAL
    if(existeEntrada("varR")){
        printf("Existe la entrada\n");
    }else{
        printf("NO existe la entrada\n");
    }
    
    /*borrarHastaMarcaTS();
    imprimirTS();
    
    borrarHastaMarcaTS();
    imprimirTS();
    */
    
    return (EXIT_SUCCESS);
}

