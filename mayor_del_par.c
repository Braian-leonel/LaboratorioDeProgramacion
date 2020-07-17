/*
Declare dos arreglos numéricos, ingrese datos en ambos a la vez.
Compare ambos valores ingresados, y guarde el mayor de ellos en un tercer arreglo.
Finalmente mostrar los datos del tercer arreglo en orden descendente.
 * 
 */

#include <stdio.h>
#define TAM 5
int main()
{
	int arreglo[TAM], arreglo2[TAM], arreglo3[TAM];
	int i, con = 0, con2 = 0;
	
	for(i = 0; i<TAM; ++i){
		printf("Arreglo 1 elemento : %d\n", i+1);
		scanf("%d", &arreglo[i]);
	}
	for(i = 0; i<TAM; ++i){
		printf("Arreglo 2 elemento : %d\n", i+1);
		scanf("%d", &arreglo2[i]);
	
}
	for(i = 0; i<TAM; ++i){
		con = con + arreglo[i];
		con2 = con2 + arreglo2[i];
	}
	
	if(con > con2){
		puts("Arreglo 1 es el mayor");
		for(i = 0; i<TAM; ++i)	
			arreglo3[i] = arreglo[i];
		for(i = TAM-1; i>= 0; --i)
			printf("%d | ", arreglo3[i]);
		
	}else{
		puts("Arreglo 2 es el mayor");
		for(i = 0; i<TAM; ++i)
			arreglo3[i] = arreglo2[i];
		for(i = TAM-1; i>= 0; --i)
			printf("%d | ", arreglo3[i]);
	}
	

	return 0;
}

