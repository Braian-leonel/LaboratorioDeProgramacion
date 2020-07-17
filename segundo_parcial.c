/*
Una cadena de heladerías requiere gestionar las ventas de su elaboración (cremas heladas) en sus 3
sucursales: Trelew, Puerto Madryn y Rawson. La cadena cuenta con una variedad de 10 gustos. Las
ventas se miden en cantidad de baldes. Cada balde tiene un costo de $1200 cada uno.
Realice un programa en C, que realice lo siguiente:

1. Declarar una matriz de 3 filas (sucursales) x 10 columnas (gustos). Inicializar todos los
elementos de la matriz en cero. Ingrese toda la matriz en cero.

2. Solicitar al usuario una sucursal y variedad, e ingresar la cantidad de baldes que se
vendieron. Sumar dicha cantidad al valor existente en la matriz. Repetir esta operación
hasta que se ingrese un cero en el código de sucursal.

3. Declare una función mostrar_ventas, que reciba como parámetro la matriz de ventas
completa. La función recorrerá la matriz y mostrará el número de sucursal, y las ventas de
cada gusto, es decir, los datos de la matriz completa. (la función no retorna ningún valor).

4. Solicitar al usuario un número de sucursal. Declare un puntero que apunte al primer
elemento de la fila (sucursal) correspondiente. Declare una función llamada
"calcular_rendicion", que reciba dicho puntero, y devuelva un valor entero. Usando el
contenido del puntero, calcular y devolver como resultado la rendición de caja
correspondiente (sumar el costo de todos los baldes vendidos en dicha sucursal). Capturar
este valor de retorno en el main, y mostrar el resultado. 
 */
//alumno: Braian Leroyer

#include <stdio.h>
#define SUCURSAL 3
#define GUSTOS 10

int matriz[SUCURSAL][GUSTOS];
void mostrar_ventas(int matriz[SUCURSAL][GUSTOS]);
int calcular_rendicion(int *calcular);
int total_baldes = 1200;
	
int main()
{
	int sucursales,cantidad_baldes;
	int *apunta = NULL, i,j;
	
	for(i = 0; i<SUCURSAL; i++){
		for(j=0; j<GUSTOS; j++){
		}	
		do{
			puts("digite el codigo de sucursal y la variedad de gusto: ");
			scanf("%d", &matriz[i][j]);
			puts("digite la cantidad de balde vendido: ");
			scanf("%d", &cantidad_baldes);
			for(i = 0; i<SUCURSAL; i++){
				cantidad_baldes += matriz[i][j];
			}
		}while(matriz[i][j] != 0);
	}
	mostrar_ventas(matriz);
	
	puts("digite el codigo de sucursal: ");
	scanf("%d", &sucursales);
	for(i=0;i<SUCURSAL;i++){
		apunta = matriz[i];
		for(j=0;j<GUSTOS;j++){
			printf("%d | \n", apunta[j]);
		}
		puts(" ");
	}
	calcular_rendicion(apunta);
	return 0;
}
void mostrar_ventas(int matriz[SUCURSAL][GUSTOS]){
	int i, j;
	for(i=0; i<SUCURSAL; i++){
		for(j = 0; j<GUSTOS; j++){
			printf("datos completo de la matriz: %d| ",matriz[i][j]);
		}
		puts(" ");
	}
}
int calcular_rendicion(int *calcular){
	
	int cantidad_baldes_vendidos;
	puts("digite la cantidad de baldes vendido en dicha sucursal: ");
	scanf("%d", &cantidad_baldes_vendidos);
	calcular = &cantidad_baldes_vendidos;
	total_baldes += cantidad_baldes_vendidos;
	return total_baldes;
}
