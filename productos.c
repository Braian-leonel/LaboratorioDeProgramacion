/*
 Diseñe una estructura "producto", con descripción, precio unitario y stock disponible.
Declare dos productos, e ingrese los datos en ambos. 
* Luego muestre los datos del producto más caro
 */

#include <stdio.h>
#include <stdbool.h>
typedef struct{
	char descripcion[50];
	float precio_unitario;
	int stock_disponible;
}producto;

int main()
{
	producto pr;
	producto pr2;

	puts("Digite el primer producto la descripcion");
	scanf("%s", pr.descripcion);
	puts("Digite el primer producto precio unitario:");
	scanf("%f" ,&pr.precio_unitario);
	puts("Digite el primer producto 1-stock disponible 0-no disponible");
	scanf("%d", &pr.stock_disponible);
	
	puts("Digite el segundo producto la descripcion");
	scanf("%s", pr2.descripcion);
	puts("Digite el segundo producto precio unitario:");
	scanf("%f" ,&pr2.precio_unitario);
	puts("Digite el segundo producto 1-stock disponible 0-no disponible");
	scanf("%d", &pr2.stock_disponible);
	if(pr.stock_disponible && pr2.stock_disponible == true){
		if(pr.precio_unitario > pr2.precio_unitario){
			printf("producto %s  mas caro con el precio unitario $%f", pr.descripcion, pr.precio_unitario);
		}else if(pr2.precio_unitario > pr.precio_unitario){
			printf("producto %s  mas caro con el precio unitario $%f", pr2.descripcion, pr2.precio_unitario);
		}else{
			puts("Ninguno de los dos es mayor");
		}
	}else
		puts("Stock No disponible");
	return 0;
}

