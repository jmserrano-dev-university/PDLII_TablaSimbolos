#include <stdio.h>
#include "miLibreria.h"

void InsertarEnConjunto(set conjunto,int a){
	void print () {
	
	}
	conjunto <-- a;
}

void main(){
	bool booleano = true;
	int a,b,c=0;
	set cjt;
	int i = 0;
	char caracter = 'a';
	string cadena = "HOLA MUNDO";
	
	printf("Introduzca el numero para la variable a: ");
	scanf("%d",a);
	printf("Introduzca el numero para la varialbe b: ");
	scanf("%d",b);
	
	/*NUEVO: Declaración de procedimientos dentro del main*/
	void miProcedimiento(int a, int b){
		a = a + b;
	}
	
	if(a>b){
		printf("El valor de a es mayor que el de b");
		while(a<0){
			c = c + a;
			a = a - 1;
		}
	}else{
		printf("El valor de b es mayor que el de a");
		switch(a){
			case 1: printf("El valor de a es 1...");
			break;
			case 2: printf("El valor de a es 2...");
			break;
			default: printf("El valor de a no es ni 1 ni 2...");
		}
	}
	
	/*Creamos un conjuto*/
	cjt = create();
	
	/*Insertamos unos cuantos elementos*/
	InsertarEnConjunto(cjt,a);
	InsertarEnConjunto(cjt,b);
	InsertarEnConjunto(cjt,c);
	
	if(length(cjt) > 3)
		printf("La longitud es mayor de 3");
		
	while(i < 5)
		i = i + 1;
		

}
