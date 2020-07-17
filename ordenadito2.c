	/*	2) Declare e 
* ingrese una cadena de texto de 50 caracteres de largo. 
* Pregunte al usuario si desea ordenar los caracteres en forma ascendente o descendente.
*  En base al criterio elegido, utilice el método de burbuja para reordenar los caracteres,
*  y finalmente muestre el resultad
 */

#include <stdio.h>
#include <string.h>
#define TAMANIO_TEXTO 50
int main()
{
	char texto[TAMANIO_TEXTO+1],temp;
	int i, aux,j,opc,c=0;
	puts("Digite un texto: ");
	scanf("%50[^\n]", texto);
	puts("Desea ordenarlo en forma 1- ascendente  2- descendente");
	scanf("%d", &opc);
	switch(opc){
			case 1:
					puts("Forma ascendente");
					for(i = 0; i<TAMANIO_TEXTO; i++){
						for(j = i+1;j<TAMANIO_TEXTO; j++){
							if(texto[i+1]>0){
								aux = texto[i];
								texto[i] = texto[i+1];
								texto[i+1] = aux;
							}
						}
					}
					printf("%s", texto);
					
			break;
			case 2:
					puts("Forma descendente");
					for(i =strlen(texto)-1;i>=0; i--){
						temp = texto[i];
						texto[i] = texto[c];
						texto[c] = temp;
						c++;						
					}		
					printf("%s", texto);

			break;
			default :
					puts("Error");
			
	}

	
	
	return 0;
}

