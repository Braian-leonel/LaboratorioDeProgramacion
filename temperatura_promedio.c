/*
 En una provincia con diez ciudades, se desea conocer el promedio de temperatura que hubo en ella, 
 * pero considerando únicamente aquellas mayores a cero.
Ingrese por teclado la temperatura de cada ciudad, calcule y muestre: la cantidad de temperaturas ingresadas, 
* y el promedio de dichas temperaturas.
La carga finaliza al registrar las diez temperaturas, o bien, al ingresar un valor de -100
 */


#include <stdio.h>
#define CIUDAD 10
int main()
{
	int temperatura, i, ciudad, total = 0; 
	float prom = 0;
	puts("Digite cantidad de ciudad: ");
	scanf("%d", &ciudad);	
	for(i = 0; i<ciudad; i++){
		printf("Digite la temperatura de la ciudad %d\n", i);
		scanf("%d", &temperatura);
		if(temperatura +1 > 0){
			total += temperatura;
			prom = (float)total /10;
		}
	}
	printf("promedio:%.2f",prom );
	return 0;
}

