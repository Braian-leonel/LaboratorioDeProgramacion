/* 
 Declare una matriz de char de 5 filas por 20 columnas, llamada "usuarios". 
 * Ingrese por teclado un valor de tipo string en cada fila.
Luego, solicite un nombre de usuario para buscar, búsquelo en el arreglo y muestre si se encuentra, 
* y en qué posición. La búsqueda no será sensible a mayúsculas (investigue sobre las funciones toupper/tolower).
Si el usuario no se encuentra registrado, mostrar el mensaje correspondiente y solicitar nuevamente el ingreso del dato,
*  hasta encontrar uno. 
 */


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define FILAS 2
#define COLUMNAS 20
int main()
{
	char usuario[FILAS+1][COLUMNAS];
	int i,j,posF =0, encontrado;
	char valor_usuario[20];
	for(i = 0; i<FILAS; i++){
		printf("Digite un texto usuario: ");
		scanf("%20[^\n]", usuario[i]);
		while(getchar()!= '\n');
	}
	printf("\n\nIngrese un usuario a buscar: ");
	scanf("%20[^\n]", valor_usuario);
	for(i = 0; i<FILAS; i++){
		if(strlen(valor_usuario) == strlen(usuario[i])){
		   for(j = 0; j<strlen(valor_usuario); j++){
				if(valor_usuario[j] == usuario[i][j]){
					posF++;
						if (valor_usuario[i] == toupper(usuario[i][j])){
							encontrado = false;
						}
						else if(posF == strlen(valor_usuario)){
						encontrado = true;
					}
				}
		   }
		}
	}
	
		if(encontrado == true){
			printf("Se encontro con exito %s en la posicion [%d]", valor_usuario,posF);
			
		}else
			puts("No esta el usuario");

	return 0;
}

