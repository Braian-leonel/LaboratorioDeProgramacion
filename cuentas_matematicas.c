/*Declare una constante RECARGO con el valor 0.3, y una DESCUENTO con el valor 42.
Declare 4 variables enteras: trimestre1, trimestre2, trimestre3, total.
Declare dos variables float: promedio y valor_final.
Ingrese los valores de los tres trimestres por teclado.
En la variable "total", calcule la suma de los tres trimestres, restando el valor de DESCUENTO.
Calcule el valor final, como el valor total sumando el recargo proporcional:
valor_final = valor_final + (valor_final * RECARGO)
Calcule el valor promedio final (dividiendo en tres), guarde el resultado en la variable promedio.
Finalmente muestre los valores ingresados, y los cálculos finales, respetando este formato (ejemplo):
Total con descuento: 25 + 30 + 72 - 42 = 85
Total con recargo: $ 110.50
Promedio trimestral: $ 36.83
 */


#include <stdio.h>
#define DESCUENTO 42
#define RECARGO 0.3

int main()
{
	int trimestre1,trimestre2,trimestre3,total;
	float promedio,valor_final;
	
	printf("Ingrese los tres trimestre: \n");
	scanf("%d %d %d", &trimestre1, &trimestre2, &trimestre3);
	printf("digite un valor final: ");
	scanf("%f", &valor_final);
	total = trimestre1 + trimestre2 + trimestre3 - DESCUENTO;
	valor_final = total + (total*RECARGO);
	promedio = valor_final/3;
	
	printf("%d + %d + %d - %d = %d\n", trimestre1, trimestre2, trimestre3, DESCUENTO, total);
	printf("total con recargo: $%.2f \n", valor_final);
	printf("promedio trimestral: $%.2f \n", promedio);
	return 0;
}

