/*
 Declare tantas variables de tipo char como nombres y apellidos posea.
 Declare una variable más de tipo char, llamada "separador".
 Solicite el ingreso de cada inicial, por teclado. Asegúrese de limpiar la entrada estándar cuando sea necesario.
 Muestre en pantalla las iniciales de su nombre, intercaladas con el caracter de la variable separador. 
 */


#include <stdio.h>

int main()
{
	char nombre, nombre2, apellido, separador;

	puts("Ingrese el primer caracter: ");
	nombre = getchar();
	while(getchar() != '\n');
	puts("Ingrese el segundo caracter: ");
	nombre2 = getchar();
	while(getchar() != '\n');
	puts("Ingrese el tercer caracter: ");
	apellido = getchar();
	while(getchar() != '\n');
	puts("Ingrese el separador: ");
	separador = getchar();
	
	
	putchar(nombre); putchar(separador); putchar(nombre2); putchar(separador); putchar(apellido);
	
	//puts("Ingrese el segundo caracter: ");
	//nombre2 = getchar();
	//puts("Ingrese el segundo caracter: ");
	//apellido = getchar();
	
	return 0;
}

