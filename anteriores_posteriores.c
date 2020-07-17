/*
 Ingrese por teclado dos números enteros entre 0 y 127. 
 * Muestre ambos números en pantalla, en forma contigua y separados con un guión.
  Luego, en una nueva fila, muestre el caracter de la primera, y los dos caracteres anteriores de la tabla ASCII, 
* separados por una flecha =>.
Haga lo mismo con la segunda variable, pero mostrando los dos caracteres posteriores.

Ejemplo ingresando 85 y 109
Los caracteres ingresados son: U-m
U => T => S
m => n => o
 * 
 */


#include <stdio.h>

int main()
{
	int a, b;
	int let = 0, let1 = 0;
	int let2 = 0, let3 = 0;
	puts("digite dos enteros mayor a 0 y menor a 127: ");
	scanf("%d %d", &a, &b);
	printf("los dos enteros ingresados son %d - %d\n", a,b);
	printf("los carecteres ingresados son %c - %c\n", a,b);
	
	let = a -1;
	let1 = a + 1;
	printf("%c => %c => %c\n",a,let, let1); 
	let2 = b + 1;
	let3 = b - 1;
	printf("%c => %c => %c", b, let2, let3);
	
	return 0;
}

