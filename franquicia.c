/*
La AFIP permite realizar importaciones libres de impuestos (franquicia) para aquellas mercaderías que, 
* sumando el valor del envío, no alcancen los U$D 50 por mes. 
* Al alcanzar dicha suma, se debe pagar un impuesto correspondiente al 50% del valor declarado (valor producto + valor envío).
*  Excepto si se trata de libros, que están siempre libres de impuestos.
Ingrese el valor del producto y del envío (valores monetarios con centavos). 
* Ingrese si el declarante tiene la franquicia disponible, y si la carga corresponde a libros.
Con estos datos, calcule y muestre el valor que se debe abonar en concepto de impuestos. 
* Si no debe abonar, muestre un mensaje especificando la causa (libros, no supera monto, etc.).
Los montos a mostrar deben estar expresados en PESOS, 
* haciendo la conversión correspondiente con la cotización del día (use una constante)
 */


#include <stdio.h>
#include <stdbool.h>
#define PESOS 66.57
int main()
{
	/*
	float producto, envio, total_de_abono = 0, valordeclarado = 0;
	int franquicia;
	int libros;
	
	puts("digite el valor del producto:");
	scanf("%f", &producto);
	puts("digite el valor del envio:");
	scanf("%f", &envio);
	puts("digite si tiene franquicia disponible ? 1 si / 2 no:");
	scanf("%d", &franquicia);
	puts("La carga es de libros? 1 si / 2 no:");
	scanf("%d", &libros);
	if(libros == true ){
		puts("No corresponde ningun impuesto");
	}else if(franquicia == true){
		total_de_abono = producto + envio;
		if(total_de_abono > 50){
			valordeclarado = total_de_abono * 50 / 100;
			printf("el valor declarado es de $%.2f", valordeclarado *= PESOS);
			}else{
					puts("no supero el monto correspondiente");
				
			}
			
		}else{
			puts("No hay franquicia disponible");
		}
		*/
		
	float deuda, valor;
	puts("Ingrese el valor: ");
	scanf("%f", &valor);
	for(deuda = 100.0; deuda<valor; deuda *= 1.1){
		printf("su deuda asciende: %5.1f\n", deuda);
	}		
	return 0;
}

