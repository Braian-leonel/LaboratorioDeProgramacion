/*
 Un corralón tiene stock de 50 productos diferentes.
Declare un arreglo numérico para guardar el stock en unidades de cada producto, inicializado a cero.
El código del producto estará determinado por la posición del arreglo + 1.

Solicite al usuario un código de producto (entre 1 y 50) y el stock inicial correspondiente al mismo. 
Valide que ambos datos sean correctos (código de producto entre 1 y 50, stock mayor a cero).
Finalizar la carga al ingresar el código de producto 0.

Luego, solicite nuevamente al usuario un código de producto (valide nuevamente), y muestre el stock disponible del mismo.
 * 
 */
#include <stdio.h>
int main()
{
	int n = 0;
	int arreglo[n], cod, i;
	
	do{
		puts("***Codigo del producto**** < 0 para salir>: ");
		scanf("%d", &cod);
		if(cod > 0){
			puts("digite el stock: ");
			scanf("%d", &n);
			if(n > 0 && n <= 50){
				for(i = 1; i<n; ++i){
					printf("Stock %d\n", i+1);
					scanf("%d", &arreglo[i]);
				}
			}else
				puts("ERROR!!!");
			for(i = 1; i<n; ++i){
				if(arreglo[i] == cod){
					puts("Stock disponible");
					break;
				}
				else if(i == n){
					puts("Stock no disponible");
					break;
				}
			}
		
		}else
			puts("ERROR!!!");
	
		
	}while((cod >= 1 && cod <= 50) || cod != 0);	
	printf("%d",cod);
	
	return 0;
}

