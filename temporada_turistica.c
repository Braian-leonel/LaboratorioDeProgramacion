/*
 ingrese por teclado el nombre de OCHO destinos turísticos diferentes, 
 * dos para cada estación del año, y siendo uno PRIMARIO y el otro SECUNDARIO (use scanf, 
 * ingrese los nombres con guiones bajos en lugar de espacios).
Ingrese el día, mes y año de una fecha en formato dd/mm/aaaa. Ej.: 24/11/2019.
Usando únicamente el mes como referencia, determine en qué estación del año nos encontramos,
*  y muéstrela en pantalla (ej. "INVIERNO").
Ingrese luego, una opción numérica (1 o 2) 
* para indicar si se desea viajar al destino primario (1) o secundario (2).
Finalmente, muestre el nombre del destino turístico correspondiente a la estación del año,
*  y la clasificación anterior.
¡Tengan en cuenta los valores incorrectos!
 */


#include <stdio.h>

int main()
{
	char nombre1[30],nombre2[30],nombre3[30], nombre4[30],nombre5[30],nombre6[30],nombre7[30],nombre8[30];
	int dia,mes,anio,opc;
	puts("Ingrese el destino turistico PRIMARIO: ");
	scanf("%s", nombre1);
	puts("Ingrese el destino turistico SECUNDARIO: ");
	scanf("%s", nombre2);
	puts("Ingrese el destino turistico PRIMARIO: ");
	scanf("%s", nombre3);
	while(getchar() != '\n');
	puts("Ingrese el destino turistico SECUNDARIO: ");
	scanf("%s", nombre4);
	puts("Ingrese el destino turistico PRIMARIO: ");
	scanf("%s", nombre5);
	puts("Ingrese el destino turistico SECUNDARIO: ");
	scanf("%s", nombre6);
	puts("Ingrese el destino turistico PRIMARIO: ");
	while(getchar() != '\n');
	scanf("%s", nombre7);
	puts("Ingrese el destino turistico SECUNDARIO: ");
	scanf("%s", nombre8);
	while(getchar() != '\n');
	puts("Digite la fecha: ");
	scanf("%d/%d/%d", &dia,&mes,&anio);
	if(mes >= 1 && mes <= 3)
		puts("VERANO");
	else if(mes > 3 && mes <= 6)
		puts("OTOÑO");
	else if(mes > 6 && mes <= 9)
		puts("INVIERNO");
	else if(mes > 9 && mes <= 12)
		puts("PRIMAVERA");

	puts("Desea viajar al destino turistico primario(1) o secundario(2): ");
	scanf("%d", &opc);
	switch(opc){
		case 1: 
		if(mes >= 1 && mes <= 3){
			printf("Estacion VERANO, destino: %s", nombre1);
		}else if(mes > 3 && mes <= 6){
			printf("Estacion OTOÑO, destino: %s", nombre3);
		}else if(mes > 6 && mes <= 9){
			printf("Estacion INVIERNO, destino: %s", nombre5);
		}else if(mes > 9 && mes <= 12){
			printf("Estacion PRIMAVERA, destino: %s", nombre7);
		}else{
			puts("ERROR, NO ES UN MES!!!");
		}
		
		break;
		case 2:
		if(mes >= 1 && mes <= 3){
			printf("Estacion VERANO, destino: %s", nombre2);
		}else if(mes > 3 && mes <= 6){
			printf("Estacion OTOÑO, destino: %s", nombre4);
		}else if(mes > 6 && mes <= 9){
			printf("Estacion INVIERNO, destino: %s",nombre6);
		}else if(mes > 9 && mes <= 12){
			printf("Estacion PRIMAVERA, destino: %s",nombre8);
		}else{
			puts("ERROR, NO ES UN MES!!!");
	    }
		break;
	
		default: puts("Error al ingresar opcion");
		break;
}



	return 0;
}

