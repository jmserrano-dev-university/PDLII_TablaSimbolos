#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern FILE *yyout;
int yyparse(void);

FILE *abrir_entrada(int argc, char **argv){
	FILE *f= NULL;
	if (argc > 1) {
		f = fopen(argv[1],"r");
		
		printf("\n\n*----------------------------*\n");
		printf("*--  ANALIZADOR SEMANTICO  --*\n");
		printf("*----------------------------*\n\n");
		
		if (f==NULL) {
			fprintf(stderr,"* ERROR: Fichero '%s' no encontrado :')",argv[1]);
			exit(1);
		}else 
			printf("--> Leyendo fichero '%s' :) \n\n",argv[1]);
	}else 
		printf("Leyendo entrada standard");
		return f;
}

FILE *abrir_salida(int argc, char **argv){
	FILE *f= NULL;
	if (argc > 2) {
	f = fopen(argv[2],"w");
	
	if (f==NULL) {
		fprintf(stderr,"Fichero '%s' no encontrado",argv[2]);
		exit(1);
	}else 
		printf("Abriendo fichero '%s'.",argv[2]);
	}
	return f;
}

int main (int argc, char *argv[]){
yyin = abrir_entrada(argc,argv);
yyout = abrir_salida(argc,argv);
return yyparse();
}
