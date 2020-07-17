/*
Declare una matriz de enteros de 5x5, precargada con datos, o ingresados por teclado.
Ingrese un número por teclado, y muestre la cantidad de veces que dicho número aparece en la matriz. 
Muestre también, en qué fila y columna aparece por primera vez (si es que aparece).
 */


#include <stdio.h>
#include <stdbool.h>

#define FILA 2
#define COLUMNAS 2
int main()
{
	int matriz[FILA][COLUMNAS] = {{0}};
	int i, j,num,valor, encontrado = false,posC = 0, posF = 0;
	int cantidadM = 0;
	for(i = 0; i<FILA; ++i){
		for(j = 0; j<COLUMNAS; ++j){
			printf("Digite los valores:");
			scanf("%d", &num);
			matriz[i][j] = num;
		}
	}
	puts("Digite el valor a buscar: ");
	scanf("%d", &valor);
	puts("Matriz");
	for(i = 0; i<FILA; ++i){
		printf("\n");
		for(j= 0; j<COLUMNAS; ++j){
			printf("%d", matriz[i][j]);
		}
	}
	
	for(i = 0; i<FILA; ++i){
		printf("\nBuscando en la posicion %d\n", i +1);
		for(j = 0; j<COLUMNAS; ++j){
			printf("\nBuscando en la posicion %d\n", j +1);
			if(valor == matriz[i][j]){
				encontrado = true;
				posF=i;
				posC=j;
				cantidadM++;
				break;
			}
		}
	}
	if(encontrado){
		printf("Cantidad de veces que se encontro %d", cantidadM);
		printf("\n ENCONTRADO EN LA POSCICION [%d][%d]", posF,posC);
	}
	
	else{
		puts("No encontrado");
		}
	return 0;
}

