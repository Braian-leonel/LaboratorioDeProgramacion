/*
Declare una función llamada buscar_valor, que reciba dos parámetros:
un arreglo de enteros ("elementos") y un número entero ("valor"). Devolverá un puntero a entero.
La función buscará a "valor" dentro de "elementos" y
devuelva un puntero al elemento encontrado, o NULL si no se encontró el valor.
Declare en el main, un arreglo de 20 números enteros. 
* Inicialice el arreglo, con el primer valor ingresado por el usuario, 
el segundo será el doble del primero, el tercero el doble del segundo, etc.
Ingrese un número entero por teclado. 
Invoque a la función buscar_valor, y dependiendo del resultado de la misma, muestre un mensaje en pantalla:
- si se encontró el valor, se mostrará el valor, y la dirección de memoria donde se encuentra.
- si no se encontró ningún valor, mostrar un mensaje de error.
 */


#include <stdio.h>
#define LARGO 20

int buscar_valor(int elementos[], int *valor);
int main()
{
	int numero,i, arreglo[LARGO] = {0};
	puts("digite un valor: ");
	scanf("%d", &numero);
	for(i = 0; i<LARGO; i++){
		printf("digite los datos en un arreglo, %d: " ,(i+1));
		scanf("%d", &arreglo[i]);
		if(arreglo[i] == numero){
			printf("el valor que se encontro: %d en la posicion [%i]",numero, i);
			buscar_valor(arreglo, &numero);
			break;
		}else{
			puts("no se encontro ningun valor");
		}
		
	}
		
	return 0;
}

int buscar_valor(int elementos[], int *valor){
	int i;
	for(i=0; i<LARGO; i++){
		if(*valor == elementos[i]){
			puts("encontrado");
	}
}
	return *valor;
}	

