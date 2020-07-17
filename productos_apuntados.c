/*
Declare un arreglo de 10 estructuras Producto, cada una conteniendo código (numérico), nombre y precio.
Solicite un código de producto (del 1 al 10), 
* e ingrese datos por teclado en la posición correspondiente del arreglo. En cada ingreso,
*  apunte con un puntero al último elemento ingresado en el arreglo. 
Salga al ingresar un código igual a cero, y muestre el contenido del puntero (los datos del último elemento cargado).
Finalmente, solicite al usuario un valor entero, 
* que se tomará como un porcentaje de descuento respecto del precio del producto. 
* Utilice la referencia (puntero) al producto, para modificar el precio (aplicando el porcentaje ingresado) 
* y mostrar el valor recalculado.

 */
#include <stdio.h>

typedef struct{
	int codigo;
	char nombre[20];
	float precio;
	
} producto;

int main(int argc, char **argv)
{
	int i, arreglo [10] = {0}, porcentaje = 0;
	producto productos;
	producto *puntero_productos = NULL;
	int *puntero_arreglo = arreglo;
	i = 0;
	do{
			i ++;
			puts("digite el codigo del producto 1-10");
			scanf("%i", &productos.codigo);
			i ++;
			while(getchar()!= '\n');
			puts("digite el nombre del producto: ");
			scanf("%20[^\n]", productos.nombre);
			puts("digite el precio del producto: ");
			scanf("%f", &productos.precio);
			
	}while(productos.codigo != 0);
	
	for(i = 0; i<10; i++){
		puntero_productos = &productos;
		printf("%d -> nombre %s\n ",*puntero_arreglo, puntero_productos->nombre);
		printf("%d-> codigo %d\n",*puntero_arreglo, puntero_productos->codigo);
		printf("%d-> precio %.2f\n", *puntero_arreglo, puntero_productos->precio);
		break;
	}
	puts("digite el porcentaje del producto:");
	scanf("%d", &porcentaje);
	puntero_productos->precio = porcentaje;
	printf("%.2f porcentaje del producto", puntero_productos->precio);
	
	return 0;
}

