/*
Ingrese la edad y el género de una persona.
VALIDAR que la edad esté entre 1 y 100, y que el género sea M o F. Mostrar los mensajes de error correspondientes en cada caso.
Una vez que AMBOS datos estén correctos, mostrarlos en pantalla y finalizar el programa
 */


#include <stdio.h>

int main(){
	int edad;
	char genero;
do{
	puts("Digite la edad:");
	scanf("%d", &edad);
	while(getchar() != '\n');
	puts("Ingrese un genero: ");
	scanf("%c", &genero);
	if((genero != 'M' && genero != 'F') || (edad < 0 && edad > 100)){
		getchar();
		puts("Genero invalido o edad invalido");
	}
}while((genero != 'M' && genero != 'F') ||( edad < 0 && edad > 100));
	printf("genero %c, edad %d", genero, edad);
	return 0;
}

