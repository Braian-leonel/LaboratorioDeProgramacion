/*
 *declare las siguientes variables: codigo de provincia(char simple)
 * nombre(cadena), apellido(cadena), nota(entero), y promedio_general(float)
 * ingrese las variables por teclado, y muestrelas por pantalla de acuerdo al siguiente ejemlo:
 * Nombre: Juan Perez(35 años)
 * codigo de provincia: "u"
 * nota obtenida: (4)
 * promedio general actual: 6.25
 */


#include <stdio.h>

int main()
{
	char codigo;
	char nombre[100], apellido[100];
	int edad, nota;
	float promedio_general;
	
	puts("ingrese su codigo de provincia: ");
	scanf("%c", &codigo);
	
	puts("Ingrese su nombre: ");
	scanf("%s", nombre);
	
	puts("Ingrese su apellido: ");
	scanf("%s", apellido);
	
	puts("digite su edad: ");
	scanf("%d", &edad);
	
	puts("digite su nota: ");
	scanf("%d", &nota);
	
	puts("digite su promedio general: ");
	scanf("%f", &promedio_general);
	
	printf(" Nombre: %s %s(%d años)\n", nombre, apellido, edad);
	printf("Nota obtenida: %d\n", nota);
	printf("Codigo de provincia: %c\n", codigo);
	printf("promedio general: %.2f\n", promedio_general);
	
	return 0;
}

