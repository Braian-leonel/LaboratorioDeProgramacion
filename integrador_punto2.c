/*
 2) Para liquidar el sueldo de un empleado, ingrese el documento, nombre, categoría (A/B/C), 
 * sueldo bruto, antigüedad (en años), y adicional por zona (monto decimal). 
 * El porcentaje por año de antigüedad es de 5% del bruto anual.
Muestre los datos ingresados por pantalla, junto con el sueldo neto que se calcula como:
neto = bruto + adicional por zona + bruto * porcentaje_anual_antigüedad * antiguedad
Utilizar las máscaras de formato, modificadores y secuencias de escape adecuados en cada caso.
Ejemplo:

========================================
PANGHO SRL - LIQUIDACION DE SUELDOS
========================================
PEREZ_JUAN_ALBERTO - DNI 35421025
CATEGORIA "C"

Sueldo bruto: 1345.56
Antiguedad: (3 años) 201.83
Adicional por zona: 450.43

----------------------------------------
NETO: 1997.82

(Nota: los números deben estar alineados con tabulaciones, en este ejemplo no se ven así por limitaciones técnicas de Classroom) 
 */


#include <stdio.h>
#define porcentaje_anual_antiguedad 5
int main()
{
	int documento, anio;
	float neto = 0; 
	char nombre[50];
	char categoria;
	float sueldo_bruto, antiguedad, adicional_zona;
	
	puts("Ingrese el documento: ");
	scanf("%d", &documento);
	puts("Ingrese el nombre completo: ");
	scanf("%s", nombre);
	while(getchar() != '\n');
	puts("Ingrese la categoria: ");
	scanf("%c", &categoria);
	puts("digite su sueldo bruto: ");
	scanf("%f", &sueldo_bruto);
	puts("Digite su antiguedad: ");
	scanf("%f", &antiguedad);
	puts("Ingrese la cantidad de años: ");
	scanf("%d", &anio);
	while(getchar() != '\n');
	puts("Digite el adicional por zona: ");
	scanf("%f", &adicional_zona);
	neto = sueldo_bruto + adicional_zona + porcentaje_anual_antiguedad * antiguedad;

	puts("========================================");
	puts("  PANGHO SRL - LIQUIDACION DE SUELDOS   ");
    puts("========================================\n");
    
    printf("%s - DNI %d\n", nombre, documento);
    printf("CATEGORIA  %c\n", categoria);
	printf("sueldo bruto: %.2f\n", sueldo_bruto);
	printf("antiguedad (%d anios) %.2f\n", anio, antiguedad);
	printf("adicional por zona: %.2f\n", adicional_zona);
	puts("------------------------------------");
	printf("Neto total es de: %.2f", neto);
	return 0;
}

