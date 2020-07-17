/*
declare una matriz de enteros de 7 filas x 5 columnas, inicializada en ceros.
Ingrese en una variable char, una letra mayúscula, de la A a la F.
Dependiendo de la letra ingresada, "dibújela" punto por punto en la matriz, reemplazando los 0 por 1 donde corresponda.
Utilice el enlace adjunto como guía: https://www.dafont.com/enhanced-dot-digital-7.font

Luego muestre el caracter en pantalla usando la matriz, mostrando un ESPACIO en caso de leer un 0,
o bien un ASTERISCO, en caso de leer un 1. Ejemplo letra A en imagen adjunta (se agregan espacios entre asteriscos por legibilidad).
 */
 
#include <stdio.h>
#define FILA 7
#define COLUMNAS 5
int main()
{
	int matriz[FILA][COLUMNAS] = {{0}}, i, j;
	char letra;
	
	puts("Ingrese una letra de la A a F");
	scanf("%c", &letra);
	switch(letra){
		case 'A':
				matriz[0][1] = 1;
				matriz[0][2] = 1;
				matriz[0][3] = 1;
			
				matriz[1][0] = 1;
				matriz[1][4] = 1;
				
				matriz[2][0] = 1;
				matriz[2][4] = 1;
				
				matriz[3][0] = 1;
				matriz[3][1] = 1;
				matriz[3][2] = 1;
				matriz[3][3] = 1;
				matriz[3][4] = 1;
				
				matriz[4][0] = 1;
				matriz[4][4] = 1;
				
				matriz[5][0] = 1;
				matriz[5][4] = 1;
		break;
		case 'B':
				matriz[0][1] = 1;
				matriz[0][2] = 1;
				matriz[0][3] = 1;
			
				matriz[1][0] = 1;
				matriz[1][4] = 1;
				
				matriz[2][0] = 1;
				matriz[2][4] = 1;
				
				matriz[3][0] = 1;
				matriz[3][1] = 1;
				matriz[3][2] = 1;
				matriz[3][3] = 1;
				matriz[3][4] = 1;
				
				matriz[4][0] = 1;
				matriz[4][4] = 1;
				
				matriz[5][0] = 1;
				matriz[5][4] = 1;
		break;
		case 'C':
				matriz[0][1] = 1;
				matriz[0][2] = 1;
				matriz[0][3] = 1;
			
				matriz[1][0] = 1;
				matriz[1][4] = 1;
				
				matriz[2][0] = 1;
				matriz[2][4] = 1;
				
				matriz[3][0] = 1;
				matriz[3][1] = 1;
				matriz[3][2] = 1;
				matriz[3][3] = 1;
				matriz[3][4] = 1;
				
				matriz[4][0] = 1;
				matriz[4][4] = 1;
				
				matriz[5][0] = 1;
				matriz[5][4] = 1;
		break;
		case 'E':
				matriz[0][1] = 1;
				matriz[0][2] = 1;
				matriz[0][3] = 1;
			
				matriz[1][0] = 1;
				matriz[1][4] = 1;
				
				matriz[2][0] = 1;
				matriz[2][4] = 1;
				
				matriz[3][0] = 1;
				matriz[3][1] = 1;
				matriz[3][2] = 1;
				matriz[3][3] = 1;
				matriz[3][4] = 1;
				
				matriz[4][0] = 1;
				matriz[4][4] = 1;
				
				matriz[5][0] = 1;
				matriz[5][4] = 1;
		break;
		case 'F':
				matriz[0][1] = 1;
				matriz[0][2] = 1;
				matriz[0][3] = 1;
			
				matriz[1][0] = 1;
				matriz[1][4] = 1;
				
				matriz[2][0] = 1;
				matriz[2][4] = 1;
				
				matriz[3][0] = 1;
				matriz[3][1] = 1;
				matriz[3][2] = 1;
				matriz[3][3] = 1;
				matriz[3][4] = 1;
				
				matriz[4][0] = 1;
				matriz[4][4] = 1;
				
				matriz[5][0] = 1;
				matriz[5][4] = 1;
		break;
		default: puts("ERROR ");
	}
	for(i = 0; i<FILA; ++i){
		for(j = 0; j<COLUMNAS; ++j){
			if(matriz[i][j] == 1){
				printf("* %c ",matriz[i][j]);
			}else
				puts("   ");
	}
}
   
	
	return 0;
}

