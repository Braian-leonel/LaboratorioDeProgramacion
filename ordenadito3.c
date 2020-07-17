/*
 (extra) Declare e ingrese datos en una matriz de números de 5x5.
 *  Ordénela en forma descendente y muestre el resultado.
 
 */

#include <stdio.h>
#define TAMANIO 2
#define TAMANIO_AUXILIAR 4
int main()
{
	int matriz[TAMANIO][TAMANIO] = {{0}};
	int valor = 0, i,j,aux= 0;
	int arreglAux[TAMANIO_AUXILIAR] = {0};
	int contador = 0;
	for(i = 0; i<TAMANIO; i++){
		for(j = 0; j<TAMANIO; j++){
			printf("digite valores elemento %d pos %d: ", i,j);
			scanf("%d", &matriz[i][j]);
			matriz[i][j] = valor;
		}
	}
	
	for(i = 0; i<TAMANIO; i++){
		for(j = 0; j<TAMANIO; j++){
			arreglAux[contador] = matriz[i][j];
			contador =+1;
		}
	}
	
	for(i =0; i<TAMANIO_AUXILIAR; i++){
		for(j=0; j<TAMANIO_AUXILIAR+1; j++){
			 if (arreglAux[j] > arreglAux[j + 1]) {
                aux = arreglAux[j];
                arreglAux[j] = arreglAux[j+1];
                arreglAux[j+1] = aux;
            }
          
		}	
	}
	
	for(i = 0; i<TAMANIO; i++){
		for(j = 0; j<TAMANIO; j++){
			matriz[i][j] = arreglAux[contador];
			contador++;
		}
	}
	
	puts("Matriz de forma descendente");
	
	for (i = 0; i<TAMANIO; i++) {
		for(j=0; j<TAMANIO; j++){
			printf("%d",matriz[i][j]);
    }	
    puts(" ");
}
          
	return 0;
}

