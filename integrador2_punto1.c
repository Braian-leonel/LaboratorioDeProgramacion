/*
 Para realizar un cómputo de los días de licencia correspondientes a un empleado en un período determinado, 
 * se considera lo siguiente:
- La cantidad de días depende de la antigüedad del empleado. 1 año: 20 días. 2 años: 25 días. 3 años o más: 30 días.
- Si son mujeres con hijos a cargo, les corresponden 10 días adicionales (fijos).
- Si son hombres mayores a 55 años, les corresponden 2 días adicionales por cada año de antigüedad.

Realice un programa en el que se ingrese el nombre, género (M/F), edad, antigüedad, y si tiene hijos a cargo. Con dichos datos, 
* calcule y muestre el total de días de licencia que le corresponde a dicho empleado.
 */


#include <stdio.h>
#include <stdbool.h>
int main()
{
	char nombre [30], genero;
	int edad, antiguedad, hijos;
	puts("Digite su edad:"); 
	scanf("%d", &edad);
	puts("Digite su nombre:"); 
	scanf("%s", nombre);
	while(getchar() != '\n');
	puts("Digite su genero:"); 
	scanf("%c", &genero);
	puts("Digite su antiguedad:"); 
	scanf("%d", &antiguedad);
	puts("¿Tiene hijos a cargo? 1-si/2-no");
	scanf("%d", &hijos);	
	
	if(antiguedad == 1 && (genero == 'M' || genero == 'F')){
			if(edad > 55){
				puts("20 dias adicional mas 2 dias por año de antiguedad");
			}else if(hijos == true && genero == 'F')
				puts("10 dias mas adicional");
			else{
				puts("20 dias de licencia solamente");
			}
		}
		
	if(antiguedad == 2 && (genero == 'M' || genero == 'F')){
			if(edad > 55){
				antiguedad *= 2;
				printf("20 dias adicional mas %d dias por año de antiguedad", antiguedad);
			}else if(hijos == true && genero == 'F')
				puts("10 dias mas adicional");
			else{
				puts("25 dias de licencia solamente");
			}
		}
	if(antiguedad >= 3 && (genero == 'M' || genero == 'F')){
			if(edad > 55){
				antiguedad *= 2;
				printf("20 dias adicional mas %d dias por año de antiguedad", antiguedad);
			}else if(hijos == true && genero == 'F')
				puts("10 dias mas adicional");
			else{
				puts("20 dias de licencia solamente");
			}
		}
	
	
	
	
	return 0;
}

