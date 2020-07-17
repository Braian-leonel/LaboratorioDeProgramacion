/*
 Un supermercado vende productos relacionados con las siguientes categorías: almacén, limpieza,
refrigerados y verdulería. Los productos tienen un código numérico, una descripción y un precio. Se
desea un programa para inventariar los productos existentes en una sucursal y calcular la valuación
del stock.
Ingrese en forma repetida los datos de un producto: código numérico (rango entre 10 y 500),
descripción, código de categoría (un carácter: ej. 'A' para almacén), y precio (mayor a cero). Una vez
ingresados y validados los datos, mostrarlos en pantalla. Ejemplo:
ARROZ_RISOTTO_1_KG - ALMACEN - $96.50
Solicitar las unidades disponibles en stock, validando que sean mayores a cero. Preguntar al usuario
si desea continuar la carga de productos, o continuar.
Al elegir continuar, calcular y mostrar: la cantidad de unidades y valuación de stock por categoría, y
los datos del producto más caro (de cualquier categoría). Ejemplo:
* 
* ALMACEN: 25 unidades - $ 443.45
LIMPIEZA: 12 unidades - $ 320.00
REFRIGERADOS: 9 unidades - $ 875.25
VERDULERÍA: 32 unidades - $ 751.35

PRODUCTO MAS CARO:
COD. 213
PRODUCTO: PECETO_2_KG (REFRIGERADOS)
PRECIO: $ 225.00
 * 
 */
// Alumno: Braian Leroyer

#include <stdio.h>
int main()
{
	char descripcion[50], categoria, opcion, opc;
	int codigo;
	int  unidad_almacen = 0, unidad_refrigerio = 0, unidad_limpieza = 0, unidad_verduleria = 0;
	float precio ,total_unidad_refrigerio= 0, total_unidad_limpieza = 0, total_unidad_almacen = 0, total_unidad_verduleria = 0;
	printf("Digite el codigo numerico:");
	scanf("%d", &codigo);
	do{
		puts("Digite la descripcion del producto: ");
		scanf("%s", descripcion);
		while(getchar()!= '\n');
		puts("Digite la categoria: ");
		scanf("%c", &categoria);
		puts("Digite el precio del producto: ");
		scanf("%f", &precio);
		if(precio > 0){
			printf("%s ", descripcion);
			if(categoria == 'A'){
				puts("Almacen");
			}else if(categoria == 'L')
				puts("Limpieza");
			else if(categoria == 'R')
				puts("Refrigeracion");
			else if(categoria == 'V')
				puts("Verduleria");
		}else{
			puts("Error en eleguir categoria");
		}
		printf("El precio del producto %.2f\n", precio);
		while(getchar() != '\n');
		printf("Digite si tiene stock en cada seccion (A/L/R/V)");
		scanf("%c", &opcion);
		switch(opcion){
			case 'A':
						printf("Digite cuantas unidad tiene en el almacen: ");
						scanf("%d" ,&unidad_almacen);
						if(unidad_almacen > 0 && categoria == 'A'){
							total_unidad_almacen = (float) unidad_almacen * precio;
						}else{
							printf("Error!!!");
						}
						while(getchar()!= '\n');
						puts("Desea salir continuar y mostrar C/N");
						scanf("%c", &opc);
			
			break;
			case 'L': 
						printf("Digite cuantas unidad tiene de limpieza: ");
						scanf("%d" ,&unidad_limpieza);
						if(unidad_limpieza > 0 && categoria == 'L'){
							total_unidad_limpieza = (float) unidad_limpieza * precio;
						}else{
							puts("ERROR");
						}
						while(getchar()!= '\n');
						puts("Desea salir continuar y mostrar C/N");
						scanf("%c", &opc);			
			break;
			case 'R':
						printf("Digite cuantas unidad tiene: ");
						scanf("%d" ,&unidad_refrigerio);
						if(unidad_refrigerio > 0 && categoria == 'R'){
							total_unidad_refrigerio = (float) unidad_refrigerio * precio;
						}else
							puts("Error!!");
						while(getchar()!= '\n');
						puts("Desea salir continuar y mostrar C/N");
						scanf("%c", &opc);
			break;
			case 'V':
						printf("Digite cuantas unidad tiene: ");
						scanf("%d" ,&unidad_verduleria);
						if(unidad_verduleria > 0 && categoria == 'V'){
							total_unidad_verduleria = (float) unidad_verduleria * precio;
						}else{
							puts("Error");	
						}
						while(getchar()!= '\n');
						puts("Desea salir continuar y mostrar C/N");
						scanf("%c", &opc);
			break;
			default: 
						printf("Opcion incorrecta");
			break;
		}	
		
	}while(codigo > 10 && codigo < 500 && opc != 'C');
	printf("ALMACEN  %d UNIDADES - PRECIO %.2f\n",  unidad_almacen, total_unidad_almacen );
	printf("LIMPIEZA  %d UNIDADES - PRECIO %.2f\n",  unidad_limpieza, total_unidad_limpieza);
	printf("REFIGERACION %d UNIDADES - PRECIO %.2f\n", unidad_refrigerio, total_unidad_refrigerio);
	printf("VERDULERIA %d UNIDADES - PRECIO %.2f\n",  unidad_verduleria, total_unidad_verduleria);
	puts("****PRODUCTO MAS CARO****");
	if(total_unidad_almacen> total_unidad_limpieza && total_unidad_almacen > total_unidad_refrigerio && total_unidad_almacen > total_unidad_verduleria){
		printf("CODIGO: %d\n",codigo);
		printf("PRODUCTO %s\n", descripcion);
		printf("PRECIO: %.2f", total_unidad_almacen);
	}else if(total_unidad_limpieza> total_unidad_almacen && total_unidad_limpieza > total_unidad_refrigerio && total_unidad_limpieza > total_unidad_verduleria){
		printf("CODIGO: %d\n",codigo);
		printf("PRODUCTO %s\n", descripcion);
		printf("PRECIO: %.2f", total_unidad_limpieza);
	}else if(total_unidad_refrigerio> total_unidad_limpieza && total_unidad_refrigerio > total_unidad_almacen && total_unidad_refrigerio > total_unidad_verduleria){
		printf("CODIGO: %d\n",codigo);
		printf("PRODUCTO %s\n", descripcion);
		printf("PRECIO: %.2f", total_unidad_refrigerio);
	}else{
		printf("CODIGO: %d\n",codigo);
		printf("PRODUCTO %s\n", descripcion);
		printf("PRECIO: %.2f", total_unidad_verduleria);
	}
	
	return 0;
}

