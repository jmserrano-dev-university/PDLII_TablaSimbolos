#include <stdio.h>
#include "miLibreria.h"

typedef int entero;
typedef float real;

bool asd;

void main(){
	real r;
	entero a=2,b,c;
	bool h,f;
	float ca;
	
	/*CONJUNTOS*/
	set conj,uni,inter,dif;
	
	conj = create();
	
	if(empty(conj)){
	
	}
	
	a = length(conj);
	
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
			
			void procedimient(int d, int e, int s){
				
			}
			
			procedimient(tr,ert,tr);
		}
	}
	
	
	
	if( asd ){
		printf("HOLA QUE TAL");
	}else{
		printf("ADIOS");
	}
	
	while(a < 3){
		printf("HOLA");
	}
	
	switch(a){
		case 1:
			ca = 5.3213 + 5.123;
		break;
		
		case 2:
		break;
		
		default:
			printf("NADA de NADA");
	}
	
}
