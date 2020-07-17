/*
Una corporación internacional se dedica a la compra/venta de divisas.
*  Dicha empresa opera con tres monedas de cambio: pesos, dólares y euros.
Se solicita el desarrollo de un programa que, partiendo de un capital inicial EN PESOS,
*  permita hacer una simulación de hasta 10 transacciones de compra/venta.
Para cada transacción, se ingresará el código de operación (C/V), el código de divisa (P/D/E) y el monto de la operación. 
* Se deberán validar los códigos ingresados, y además que el monto de la operación sea mayor a cero.
El monto de la transacción se restará o sumará al capital inicial, de acuerdo a la operación 
* (una compra suma al capital inicial, una venta resta al capital inicial) y la relación de cambio (como constantes), 
* y pesificando el resultado cuando sea necesario.
La carga finaliza cuando se ingresa un código de operación 'S' (salir), o se llegan a las 10 transacciones.
Entonces, el programa mostrará:

* cuántas transacciones se realizaron en total según la operación,
* cuál fue la operación de MAYOR valor de VENTA,
* cuál fue la operación de MENOR valor de COMPRA,
* cuál fue el saldo al cierre del mercado.
* si el saldo fue positivo, cuál fue el monto resultante.
 */

#include <stdio.h>
#define TIPOCAMBIOCOMPRADORDOLAR 65.25
#define TIPOCAMBIOVENDEDORDOLAR 70.18
#define TIPOCAMBIOCOMPRADOREURO 70.64
#define TIPOCAMBIOVENDEDOREURO 75.86
int main()
{
	char codigo, opc; 
	int i,j,venta, venta2, venta3, compra, compra2, compra3;
	float VC;
	int capital_inicial;
	
	puts("Digite la capital inicial en pesos:");
	scanf("%d", &capital_inicial),
	i = 0;
	j = 0;
	venta = 0;
	venta2 = 0;
	venta3 = 0;
	compra= 0;
	compra2 = 0;
	compra3 = 0;
	if(capital_inicial > 0){
	  do{
		while(getchar()!= '\n');
		puts("¿Que deseas hacer? compra/venta: <C/V>");
		scanf("%c", &codigo);
		if(codigo == 'C'){
			i++;
			while(getchar()!= '\n');
			puts("Digite el codigo de divisa (P/D/E)");
			scanf("%c", &codigo);
			switch(codigo){
				case 'P':  
						  
			    		  puts("Digite el monto total de la compra en pesos:");
						  scanf("%f", &VC);
						  capital_inicial += VC;
						  compra++;
					      printf("¿Desea salir de la compra Si/No? ");
					      scanf("%c", &opc);
				break;
				case 'D': 
						  puts("Digite el monto total de la compra en dolares");
						  scanf("%f", &VC);
						  VC = VC*TIPOCAMBIOCOMPRADORDOLAR;
						  capital_inicial += VC;
						  compra2++;
					      printf("¿Desea salir de la compra Si/No? ");
					      scanf("%c", &opc);
				break;
				case 'E':			
						  puts("Digite el monto total de la compra en euros");
						  scanf("%f", &VC);
						  VC = VC*TIPOCAMBIOCOMPRADOREURO;
						  capital_inicial += VC;
						  compra3++;
					      printf("¿Desea salir de la compra Si/No? ");
					      scanf("%c", &opc);
				break;
				
				
		}
		puts("S/N");
		scanf("%c", &opc);
	}
		else if(codigo == 'V'){
			while(getchar()!= '\n');
			puts("Digite el codigo de divisa (P/D/E)");
			scanf("%c", &codigo);
			switch(codigo){
				case 'P':
						  puts("Digite el monto total de la venta en pesos");
						  scanf("%f", &VC);
					      capital_inicial-= VC;
					      venta ++;
					      printf("¿Desea salir de la compra Si/No? ");
					      scanf("%c", &opc);
				break;
				case 'D': 
						  puts("Digite el monto total de la venta en dolar");
				     	  scanf("%f", &VC);
					      VC = VC * TIPOCAMBIOVENDEDORDOLAR;
					      capital_inicial-= VC;
					      venta2++;
					      printf("¿Desea salir de la compra Si/No? ");
					      scanf("%c", &opc);
				break;
				case 'E': 
						  puts("Digite el monto total de la venta en euros");
				     	  scanf("%f", &VC);
				    	  VC = VC*TIPOCAMBIOVENDEDOREURO;
				    	  capital_inicial-=VC;
				    	  venta3++; 
					      printf("¿Desea salir de la compra Si/No? ");
					      scanf("%c", &opc);
				break;		
			
		}
		puts("S/N");
		scanf("%c", &opc);
		j++;
		
}
	}while(opc != 'S');
	
	if(venta > venta2 && venta > venta3)
		printf("Operacion de mayor venta: %d <ventas> \n", venta);
	else if(venta2 > venta && venta2 > venta3)
		printf("Operacion de mayor venta: %d <ventas>\n", venta2);
	else
		printf("Operacion de mayor venta: %d <ventas>\n", venta3);
	
	if(compra < compra2 && compra < compra3)
		printf("Operacion de menor compra: %d <compras>\n", compra);
	else if(compra2 < compra && compra2 < compra3)
		printf("Operacion de menor compra: %d <compras>\n", compra2);
	else
		printf("Operacion de menor compra: %d <compras>\n", compra3);
	
	
	printf("Monto total %d \n", capital_inicial);
	printf("Total de transacciones de compras %d, total de transacciones de ventas %d", i, j);
	



	}else{
		puts("Valor invalido para realizar operaciones");
}
	
		
	return 0;
}

