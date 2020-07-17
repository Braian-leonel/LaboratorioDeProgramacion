/* 
 *declare dos variables de tipo int, precio y recargo, ingrese por teclado
 * valores de ambas variables, total, de tipo unsigned short int guarde la suma
 * de las anteriores, compruebe manualmente la salida de programa, para ver en
 * que caso se produce desbordamiento 
 */


#include <stdio.h>

int main()
{
	int precio, recargo;
	unsigned short int total;
	
	puts("digite el precio: ");
	scanf("%d", &precio);
	
	puts("digite el recargo: ");
	scanf("%d", &recargo);
	
	total = precio + recargo;
	printf("Total: %hu\n", total);
	puts("Se produce desbordamiento cuando se ingresa numeros negativos y pase de los 65535");
	return 0;
}

