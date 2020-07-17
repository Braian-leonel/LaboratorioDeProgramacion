/*
 Ingrese una cadena de texto de hasta 100 caracteres. 
Luego muestre el texto ingresado con las siguientes transformaciones: 
- mostrar en orden inverso, 
- separar cada caracter con guión, 
- reemplazar los espacios por guión bajo, 
- convertir las vocales a mayúscula (vea la función toupper). 
- descartar los dígitos numéricos (0-9).
Ejemplo: La casa 3esta en 4orden => n-E-d-r-O-_-n-E-_-A-t-s-E-_-A-s-A-c-_-A-L 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define HASTA 100
int main()
{
	char texto[HASTA+1];
	char vocalm[5] = {'a','e','i','o','u'};
	int i,j;
	int largo = strlen(texto);
	
	puts("Digite un texto: ");
	scanf("%100[^\n]", texto);
	for(i = 0; i < largo; i++){
			for(j=0;j<5;j++){
				if(texto[i]==vocalm[i]){
					texto[i] = toupper(texto[i]);
				}
			}
	}
	putchar(texto[i]);
	return 0;
}

