#include <stdio.h>
#include "miLibreria.h"

typedef int entero;
typedef float real;

bool asd;

void main(){
	real r;
	entero a=2,b,c;
	bool h,f;
	loat ca; /*Error 1: Error l�xico en un tipo generando error sem�ntico*/
	set conj,uni,inter,dif; /*CONJUNTOS*/
	
	/*imprimir_tabla;*/ /*Sentencia para imprimir la tabla de s�mbolos*/
	
	conj = create();
	
	if(empty(conj)){
	
	}
	
	a = length(h); /*Error 5: Error en expresiones complejas del tipo SET (conjunto)*/
	
	/*Insertamos en conjunto*/
	conj <-- conj;
	
	/*Sacamos del conjunto*/
	conj --> ca;
	
	/*conjunto*/
	~conj;
	
	/*Operaciones: Union , Interseccion y Diferencia*/
	uni = conj + conj;
	inter = conj / conj;
	dif = conj - conj;
	
	delete(conj);
	
	void procedimiento(int a, int b, int c){
		int y,e,f;
		
		void proc1(){
			int tr;
			int ert;
			int rt;
			real realo;
			
			void proc1(){
				
				if( 2 < 3){
					printf("HOLA QUE TAL");
				}else{
					printf("ADIOS");
				}
			}
			
			procedimient(tr,ert,rt); /*Error 3c: Llamada a procedimiento fuera de ambito*/
			
			void procedimient(int d, int e, int s){
				int d; 	/*Error 2: Declaramos una variable igual a el argumento de la funci�n*/
			}
			
			procedimient(tr,ert,realo); /*Error 3a: Llamada a una funci�n con tipo de argumentos erroneos*/
			procedimient(tr,ert);		/*Error 3b: Llamada a una funci�n con n�mero de par�metros erroneos*/
		}
	}
	
	
	switch(a){
		case 1:
			ca = 5 + 5.123; /*Error 4b: Error en tipo de expresiones aritm�ticas*/
			b = length(conj);
			rt = tr + 2;
		break;
		
		case 2:
			while(a < h){ /*Error 4a: Error en tipo de expresi�n l�gica | "a" es entero y "h" es booleano */
				if(3.0 < ca){
					printf("ERROR, XD!");
				}
			}
		break;
		
		default:
			printf("NADA de NADA");
	}
	
}
