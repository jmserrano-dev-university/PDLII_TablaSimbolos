#include <stdio.h>
#include "miLibreria.h"

void InsertarEnConjunto(set conjunto,int a){
	insert(conjunto,a);	
}

void main(){
	int a,b,c=0;
	set cjt;
	int i = 0;
	printf("Introduzca el numero para la variable a: ");
	scanf("%d",a);
	printf("Introduzca el numero para la varialbe b: ");
	scanf("%d",b);
	
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
