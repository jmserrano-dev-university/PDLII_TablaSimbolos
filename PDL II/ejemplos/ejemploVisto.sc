#include <stdio.h>
#include "miLibreria.h"

void main(){
	int a,b,c;
	/*El usuario mete el primer valor*/
	printf("Introduzca el valor a: ");
	scanf("%d",a);
	
	
	/*El usuario mete el segundo valor*/
	printf("Introduzca el valor a: ");
	scanf("%d",b);
	
	c = a - b;
	
	if(c >= 0){
		printf("La resta de los numeros a-b es positiva y es %d",c);
	}else{
		printf("La resta de los numeros a-b es negativa y es %d",c);
	}
}
