/*
 * Defina una función llamada "mostrar_castigo", 
 * que reciba un número entero, y muestre un mensaje determinado, esa cantidad de veces
(ej. "no debo faltar el respeto a mi madre").
En el main, solicite al usuario ingresar un número por teclado,
*  y ejecute el procedimiento pasándole dicho número como parámetro. 
 */
 
#include <stdio.h>
void mostrar_castigo(int numero);

int main()
{
	int num;
	puts("Digite un numero");
	scanf("%d", &num);
	for(int i = 0; i<num; i++){
		mostrar_castigo(num);

}
	return 0;
}
void mostrar_castigo(int numero){
	puts("NO DEBES DECIR MALAS PALABRAS");
}
