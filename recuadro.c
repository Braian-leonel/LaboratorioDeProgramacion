/*
Ingresar por teclado dos números (alto y ancho) y un caracter (relleno).
Mostrar un recuadro del alto y ancho solicitado, rellenado con el caracter ingresado, usando dos ciclos for.
Ejemplo: para alto = 3, ancho = 6 y relleno = '+', mostrar:
++++++
++++++
++++++
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int alto, ancho, i,j;
	char relleno;
	puts("digite el alto y ancho del recuadro:");
	scanf("%d %d", &alto, &ancho);
	while(getchar() != '\n');
	puts("relleno: ");
	scanf("%c", &relleno);
	
	for(i = 0; i<alto; ++i){
		for(j = 0; j<ancho; ++j)
		printf("%c", relleno);
	printf("\n");
	}
	
	return 0;
}

