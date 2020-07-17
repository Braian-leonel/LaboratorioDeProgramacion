/*
 Declare una función llamada cuantas_mayusculas, que reciba un arreglo de char, 
 * lo recorra caracter a caracter, y devuelva la cantidad de mayúsculas que contiene.
En el main, declare e ingrese por teclado un arreglo de char,
*  y utilice la función para mostrar en pantalla la cantidad de mayúsculas. 
 */
 
#include <stdio.h>
#include <string.h>

int cuantas_mayuscula(char palabra[20]);

int main()
{
	char string[20];
	puts("Digite una palabra: ");
	scanf("%20[^\n]", string);
	cuantas_mayuscula(string);
	return 0;
}
int cuantas_mayuscula(char palabra[20]){
	int mayuscula = 0, i, j;
	int largo = strlen(palabra);
	char comparar[] = {'A','B','C','D','E','F','G','I','H','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','Y','Z'};
	int largo2 = strlen(comparar);
	for(i = 0; i<largo; i++){
		for(j = 0; j<largo2; j++){
			if(palabra[i] == comparar[j]){
				mayuscula++;
			}
		}
	}
	printf("cantidad de mayuscula %d", mayuscula);
	return mayuscula;
}
