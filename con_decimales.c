/*
 declare dos variables de tipo unsigned short int: unidad_vendidas_ayer y unidades
 * vendidas_hoy. Declare una tercer variable Venta_promedio de tipo unsigned float
 * ingresar los valores de ambas unidades vendidas por teclado.
 * calcular y mostrar el promedio de ambas, mostrando dos decimales, y casteando
 * segun corresponda para no perder los decimales en el resultado
 */


#include <stdio.h>


int main()
{
	unsigned short int unidades_vendidas_ayer, unidades_vendidas_hoy;
	
	puts("digite las unidades vendidas del dia de ayer: ");
	scanf("%hu", &unidades_vendidas_ayer);
	
	puts("digite las unidades vendidas del dia de hoy: ");
	scanf("%hu", &unidades_vendidas_hoy);
	
	float venta_promedio = (float)unidades_vendidas_ayer / unidades_vendidas_hoy;
	
	printf("El promedio de la venta vendidas de los dos dias: %.2f", venta_promedio);
	
	return 0;
}

