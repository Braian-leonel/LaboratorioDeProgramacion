/*
 Una estación meteorológica puede medir la velocidad del viento de entre 0 y 120 km/h.
Se desea analizar la velocidad del viento medida en forma diaria, por un lapso de 5 días (5 mediciones en total).

La condición general se determina según la velocidad del viento:
- De 0 a 30 km/h: CALMO.
- De 30 a 60 km/h: MODERADO.
- De 60 a 80 km/h: FUERTE.
- De 80 a 120 km/h: ALERTA METEOROLOGICO.

Ingrese por teclado la medición de viento para los 5 días de la semana.
Para cada medición, determine y muestre en pantalla la condición general.

Finalmente, únicamente para los días de viento fuerte, calcule y muestre en pantalla el mayor valor registrado
 */


#include <stdio.h>
#define CALMO 30
#define MODERADO 60 
#define FUERTE 80
#define ALERTA 120
int main()
{
	int viento;
	float viento_dias = 0;
	puts("Digite la medicion del viento: ");
	scanf("%d", &viento);
	
	if(viento <= CALMO){
		printf("Viento calmo %d kms/hs", viento);
	}else if(viento <= MODERADO){
		printf("Viento morerado %d kms/hs", viento);
	}else if(viento <= FUERTE){
		viento_dias = (float)viento * FUERTE;
		printf("El mayor valor registrado de viento fuerte es de: %.2f kms/hs", viento_dias);
	}else if(viento <= ALERTA){
		printf("ALERTA METEOROLIGICA %d kms/hs", viento);
	}else{
		puts("ERROR el valor de medicion");
	}
	
	
	return 0;
}

