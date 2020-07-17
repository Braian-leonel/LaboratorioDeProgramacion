/*
 Una granja tiene un conjunto de 5 sensores (casco, granero, corral, cultivo y huerto)
para medir el % de humedad en cada sector. Inicialice el conjunto de sensores en diez por ciento.

Solicite repetidamente al usuario un menú para seleccionar uno de los 5 sectores. Valide que el sector sea correcto.
Luego para dicho sector, ingrese un valor positivo o negativo, que indique la variación en el porcentaje de humedad.
Ajuste el valor de la medición anterior, con la variación (sumar o restar).

Finalice la carga cuando la humedad de un sector llegue a 0%, o bien cuando alcance o supere el 100%.
Dispare entonces una alarma indicando el nombre del sector, y el valor obtenido
 */


#include <stdio.h>
#define SENSORES 10
int main()
{
	int opc;
	int variacion, variacion_neg;
	int valor = 0, valor_neg = 0;
	
	do{
		puts("**Digite un sector** 1. casco - 2. granero - 3. corral - 4. cultivo");
		scanf("%d", &opc);
		switch(opc){
			case 1:
					puts("Digite el valor de variacion positivo :");
					scanf("%d", &variacion);
					valor = variacion + SENSORES;
			         
					puts("Digite el valor de variacion negativo:");
					scanf("%d", &variacion_neg);
					valor_neg = variacion_neg - SENSORES;
					
					
			break;
			case 2:
					puts("Digite el valor de variacion positivo :");
					scanf("%d", &variacion);
					valor = variacion + SENSORES;
						
					puts("Digite el valor de variacion negativo:");
					scanf("%d", &variacion_neg);
					valor_neg = variacion_neg - SENSORES;
		
			break;
			case 3:
					puts("Digite el valor de variacion positivo :");
					scanf("%d", &variacion);
					valor = variacion + SENSORES;
					
					puts("Digite el valor de variacion negativo:");
					scanf("%d", &variacion_neg);
					valor_neg = variacion_neg - SENSORES;
			break;
			
			case 4:
					puts("Digite el valor de variacion positivo :");
					scanf("%d", &variacion);
					valor = variacion + SENSORES;
					
					puts("Digite el valor de variacion negativo:");
					scanf("%d", &variacion_neg);
					valor_neg = variacion_neg - SENSORES;
			break;
			default: puts("Error al digitar un menu");
			
		
		}
		}while(valor >= 100 && valor_neg == 0);
		
		if(opc == 1 && valor >= 100 ){
			puts("SECTOR CASCO LLEGO AL 100% de humedad");
		}else{
		 if(valor_neg == 0){
			puts("SECTOR CASCO LLEGO AL 0% de humedad");
		}
	}
		
		if(opc == 2 && valor >= 100 ){
			puts("SECTOR GRANERO LLEGO AL 100% de humedad");
		}else {
			if(valor_neg == 0){
			puts("SECTOR GRANERO LLEGO AL 0% de humedad");
		}
	}
		
		if(opc == 3 && valor >= 100 ){
			puts("SECTOR CORRAL LLEGO AL 100% de humedad");
		}else{ 
			if(valor_neg == 0){
			puts("SECTOR CORRAL LLEGO AL 0% de humedad");
		}
	}
		
		if(opc == 4 && valor >= 100 ){
			puts("SECTOR CULTIVO LLEGO AL 100% de humedad");
		}else{ 
			if(valor_neg == 0){
			puts("SECTOR CULTIVO LLEGO AL 0% de humedad");
		}
	}
		
		
	
	return 0;
}

