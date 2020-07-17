/*
 Ingrese la fecha actual en formato dd/mm/yyyy, y muéstrela en formato texto. Ejemplo:
12/03/2019: doce de marzo del 2019.

Luego ingrese un n° de documento como texto con puntos, 
* y valide que el mismo tiene el formato correcto (cada caracter puede ser un dígito o un punto).
Conviértalo a entero (descartando los puntos previamente) , y valide que se encuentre entre 1 millón y 99 millones.
Finalmente, divida el n° por dos, y muestre el resultado. 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int main()
{
	
	char *fecha[31] = {"uno", "dos","tres", "cuatro", "cinco","seis","siete","ocho","nueve","diez","once","doce",
						"trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve","veinte",
						"veintiuno","veintidos","veintitres","veinticuatro","veinticinco","veintiseis",
						"veintisiete","veintiocho","veintinueve","treinta","treintaiuno"};
	
	char *meses[12] = {"enero","febrero","marzo","abril","mayo","junio",
					"julio","agosto","septiembre","octubre","noviembre","diciembre"};
	char dni[20+1];
	int dia,mes,anio,i,largo, error = false;
	int long long num;
	float total = 0;
	puts("digite una fecha: ");
	scanf("%d/%d/%d", &dia,&mes,&anio);
	if(dia >= 1 && dia <=31){
		if(mes>=1 && mes<=12){
			printf("%d/%d/%d : %s de %s del %d\n",dia,mes,anio, fecha[dia-1],meses[mes-1],anio);
	}
	}else{
		puts("Error de fecha");
	}
	while(getchar() != '\n');
	puts("Digite el dni: ");
	scanf("%20[^\n]", dni);
	largo = strlen(dni);
	for(i = 0; i<largo; ++i){
		if(!isdigit(dni[i]) && dni[i] != '.'){
			error = true;
			break;
		}		
	}
	if(error){
		puts("error de validacion");
	}
	else{
		num = atoll(dni);
		printf("%lld %lld", num, num+1);	
	}
	total = (float)num/2;
	printf("total %.2f", total);
	return 0;
}

