/*
1) En Bedelía están necesitando un programa para gestionar el uso de las 50 notebooks.
   Declare una matriz de 2x50 elementos, donde la 1era fila guardará el estado de un equipo (entregado/devuelto),
   *  y la segunda fila guardará el DNI de quien lo retiró.
   Muestre un menú con las opciones descritas más abajo. Al finalizar la ejecución de cada opción, 
   * se deberá volver al menú principal.
   
   *) Ver estado de equipo: Se ingresa un n° de equipo, y se valida que dicho número sea correcto. 
   * Luego se muestra el estado actual del mismo (entregado o devuelto).
   *) Entrega de equipo: Se comprueba que haya un equipo disponible, y en caso afirmativo se ingresa el DNI de quien lo retira.
   *  Se guardan los datos en la matriz.
   *) Devolución de equipo: Se ingresa y valida n° de equipo, y que éste haya sido entregado previamente. 
   * Entonces, se actualiza el estado del mismo.
   *) Mostrar estadísticas: Mostrar cuántos equipos hay entregados, y cuántos hay devueltos (cantidad y porcentajes). 
PUNTOS EXTRA: Muestre además el DNI de la persona que más equipos haya retirado.
   *) salir
 */

#include <stdio.h>

int main()
{
	int matriz[50][2] = {};
	int fila = 0, columna = 0, cont1 = 0,cont2= 0, contadordni = 0;
	int  dni, menu;
	
	do{
		
		puts("Digite una opcion: ");
		puts(" 0- registro de equipo");
		puts(" 1- Estado de equipos" );
		puts(" 2- entrega de equipo");
		puts(" 3- Devolucion del equipo"); 
		puts(" 4- mostrar estadisticas ");
		puts(" 5- cantidad de equipo entregado");
		puts(" 6- salir");
		scanf("%d", &menu);
		switch(menu){
			case 0:
					puts("digite el dni: ");
					scanf("%d", &dni);
					for(fila = 0; fila<50; fila++){
						if(matriz[fila][1] == 0){
							matriz[fila][1] = dni;
							matriz[fila][0] = 1;
							break;
						}
					}	
			break;
			case 1:
					 puts("estado de equipo entregado o devuelto");
					 puts("digite el numero de dni");
					 scanf("%d", &dni);
					 for(fila = 0; fila<50; fila++){
						if(matriz[fila][1] == dni){
							if(matriz[fila][0] == 1){
								printf("Estado: Entregado");
								break;
							}
							if(matriz[fila][0] == 2){
								printf("Estado: Devuelto");
								break;
							}
						}
					 }
			
		break;
		case 2:
				puts("digite el numero de dni: ");
				scanf("%d", &dni);
				for(fila = 0; fila<50; fila++){
					if(matriz[fila][1]==dni){
						matriz[fila][0]= 2;
						printf("\n Equipo entregado");
						break;
					}
				}
			
				
		break;
		case 3:	
				puts("Digite el numero de dni: ");
				scanf("%d", &dni);
				for(fila= 0; fila<50; fila++){
					if(matriz[fila][1] == dni){
						if(matriz[fila][0] == 2){
							printf("equipo devuelto");
						}
					}
				}
		break;
		case 4:
				for(fila = 0; fila<50; fila++){
					if(matriz[fila][0] == 1){
						cont1++;
					}
					if(matriz[fila][0] == 2){
						cont2++;
					}
				}	
				printf("\n equipo entredado %d", cont1);
				printf("\n equipo devuelto %d", cont2);
		break;
		case 5:
				for(fila = 0; fila<50; fila++){
					if(matriz[fila][1]==dni){
					  if(matriz[fila][0] == 1){
						contadordni++;
					  }
				}
			}
				printf("\n cantidad de retiro %d", contadordni);
		break;
		case 6:
				puts("Salio");
		break;
		default:
				puts("opcion incorrecta");
		}
	}while(menu != 6);

	printf("\nmatriz\n");
		for(fila=0;fila<50;fila++)
			{
				printf("\n");
				for(columna=0;columna<2;columna++)
				{
					if(matriz[fila][columna]!=0)
					printf(" %d",matriz[fila][columna]);
				}
			}
	
	return 0;
}

