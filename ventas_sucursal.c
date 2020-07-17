/*
Declare una matriz de enteros, de 12 filas x 5 columnas, llamada "ventas", 
donde las filas representan los meses del año, y las columnas sucursales de una cadena de supermercados.
Inicialice la matriz en CERO.
Ingrese repetidamente un n° del mes, n° de sucursal, y el total de ventas obtenido. 
Dicho total súmelo al total existente. Finalice la carga al ingresar un mes, sucursal o total igual a cero.
Luego solicite un n° de sucursal, calcule y muestre el total vendido de dicha sucursal en todo el año
 */


#include <stdio.h>
#define CANT_MESES_DEL_ANIO 12

int main()
{
	int ventas [CANT_MESES_DEL_ANIO][5]={{0}};
	int sucursal, mes, total_mes=0;
	float total_vendido_anio=0;
	
	puts("Ingrese numero de mes: ");
	scanf("%d", &mes);
	puts("Ingrese numero de sucursal: ");
	scanf("%d", &sucursal);
	puts("Ingrese el total vendido durante el mes: ");
	scanf("%d", &total_mes);
	
	while(mes!=0 && sucursal!=0 && total_mes!=0){
		
		ventas[mes][sucursal]=total_mes;
		puts("Ingrese numero de mes: ");
		scanf("%d", &mes);
		puts("Ingrese numero de sucursal: ");
		scanf("%d", &sucursal);
		puts("Ingrese el total vendido durante el mes: ");
		scanf("%d", &total_mes);

	}
		
	puts("Ingrese numero de sucursal para calcular el total vendido en todo el año: ");
	scanf("%d", &sucursal);
	for (mes=0; mes<CANT_MESES_DEL_ANIO; mes++){
		total_vendido_anio+=ventas[mes][sucursal];
	}
	printf("El total vendido por la sucursal durante todo el año es: $%.2f", total_vendido_anio);
	
	
	return 0;
}
