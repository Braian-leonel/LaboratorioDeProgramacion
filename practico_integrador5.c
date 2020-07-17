/*
Un comercio requiere un programa para controlar su operatoria interna.
Se requieren los siguientes módulos funcionales:
1) Gestión de mercaderías
2) Gestión de ventas
Al iniciar el programa, se deberá mostrar el menú de opciones correspondiente, más la opción salir.
Estos menús, y cada una de sus acciones, deberán implementarse como una FUNCIÓN distinta.
Acciones del módulo 1:
	a) Alta de mercadería
	b) Modificación de datos
	c) Auditoría
	d) Volver al menú principal
La mercadería deberá gestionarse en un arreglo de hasta 100 estructuras, 
* que se inicializará con una estructura 'vacía' (código de producto 0). 
* Los productos se guardan en el arreglo, en el orden que fueron cargados, 
* y se localizan mediante búsqueda lineal por código de producto.
Cada mercadería deberá contener código de producto (entre 1 y 100), 
* denominación, precio unitario (validar que sea mayor a cero) y fecha de vencimiento 
* (struct tm). El código de producto es único, NO puede repetirse.

a) El ALTA DE MERCADERIA, 
solicitará y validará los datos para una mercadería nueva, 
y registrará el ingreso en la próxima posición "vacía" del arreglo (código de producto 0).

b) La MODIFICACION DE DATOS, solicitará un código de producto (que debe existir registrado),
con él se localizará el producto correspondiente, y actualizará los datos para ESA mercadería 
(igual que en el alta, pero sólo para ESE producto particular).

c) la AUDITORÍA, recorrerá el arreglo completo,
 y mostrará los datos de aquellos productos que se encuentran vencidos al día de hoy, 
 junto con la cantidad de días transcurridos desde el vencimieno.
 
 Acciones del módulo 2:
	a) Carga de clientes
	b) Listado de clientes
	c) Promo sorteo
	d) Volver al menú principal 
 Para los clientes se guardará únicamente su nombre,
 en una matriz de caracteres de hasta 20 filas.
 La posición del arreglo +1 indicará su n° de cliente.
Se puede inicializar dicha matriz con caracteres \0 (null).
a) La CARGA DE CLIENTES ingresará los nombres de todos los clientes secuencialmente.
b) El LISTADO DE CLIENTES mostrará los nombres de los clientes,
 ordenados alfabéticamente y convertidos a mayúscula.
c) La PROMO SORTEO cambia su nombre dependiendo de la estación del año, la cual a su vez depende del mes actual
 (obtenido del reloj del sistema). Se debe determinar y mostrar dicho nombre en pantalla (ej. 
 PROMO SORTEO INVIERNO). Luego, el programa seleccionará un número de cliente al azar,
 mostrará su nombre en pantalla, junto con la leyenda: " has resultado ganador!" y la fecha actual.
 
 */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#define FILAS 5
#define LARGO 5

typedef struct{
	char producto[10];
	char denominacion[10];
	int precio_unitario;
	int codigo_producto;
	char clientes[10];
}productos;


const int cantidad_productos = 3;
const int ordenar_clientes = 3;

void gestion_de_mercaderia(productos mercado[]);
void gestion_de_ventas(productos mercado[],int clientes_numero[]);
time_t obtener_fecha_vencimiento(void);
int main(void)
{
	productos mercados[3];
	int menu_modulo, arreglo_clientes[LARGO];
	do{
		puts("digite un modulo 1-mercado 2-clientes");
		scanf("%d",&menu_modulo);
		switch(menu_modulo){
				case 1:
						gestion_de_mercaderia(mercados);
				break;
				case 2:
						gestion_de_ventas(mercados,arreglo_clientes);
				break;
				case 3:
						puts("salio");
				break;
				default:
						puts("opcion incorrecta");
		}
	}while(menu_modulo != 3);
	return 0;
}

void gestion_de_mercaderia(productos mercado[]){
	int opc,i,num,x;
	
	do{
		puts("digite una opcion");
		puts("1- alta mercaderia");
		puts("2- modificacion de datos");
		puts("3- auditoria");
		puts("4- volver al menu principal");
		puts("5- salir");
		scanf("%d", &opc);
		switch(opc){
				case 1:
					puts("*** ALTA DE MERCADERIA ***");
					for(i = 0; i<cantidad_productos; i++){
						mercado[i].codigo_producto = 0; 		//datos vacios
					}
					//ingreso los datos
					for(i=0; i<cantidad_productos; i++){
							puts("digite los codigos de producto");
							scanf("%d", &mercado[i].codigo_producto);
						if(mercado[i].codigo_producto >= 1 && mercado[i].codigo_producto <= 100 
								&& mercado[i].codigo_producto != mercado[i+1].codigo_producto){							
							puts("Los codigos del producto ingresado son correctos");
						}
						else{
							puts("los codigos son incorrectos");
							break;
						}
						puts("digite la demoninacion: ");
						scanf("%s", mercado[i].denominacion);
						while(getchar()!= '\n');
						puts("digite el precio unitario: ");
						scanf("%d", &mercado[i].precio_unitario);							
						puts("digite el nombre de los productos: ");
						scanf("%s", mercado[i].producto);	
						while(getchar()!= '\n');
						
					}
				break;
			case 2:
					puts("*** LA MODIFICACION DE DATOS ***");
					puts("digite un codigo de producto existente: ");
					scanf("%d", &num);
					for(x = 0; x<cantidad_productos; x++){
						if(mercado[x].codigo_producto==num){
								puts("Nombre del producto: " );
								scanf("%s", mercado[x].producto);
								puts("Precio del producto: " );
								scanf("%d", &mercado[x].precio_unitario);
								puts("Denominacion: " );
								scanf("%s", mercado[x].denominacion);
						}else{
							puts("codigo no existe");
						}
					}
			break;
			case 3:
					puts("*** AUDITORIA ***");
					setlocale(LC_ALL,"");
					time_t hora = time(NULL), limite = obtener_fecha_vencimiento();
					time_t diferencia = difftime(hora, limite);
					bool es_hoy = (int)diferencia / 86400 == 0;
					for(i = 0; i<cantidad_productos; i++){
						if(es_hoy){
							puts("estamos en fecha");
						}else if(hora > limite){
							printf("ya han pasado tanto %d dias de vencimiento para el producto %s, con el codigo %d, del precio %d, y la denominacion %s ",
									(int)diferencia/86400, mercado[i].producto, mercado[i].codigo_producto, mercado[i].precio_unitario, mercado[i].denominacion);
							break;
						}else if(hora < limite){
							printf("Todabia falta %d dias para su fecha de vencimiento", (int)diferencia/86400);
						}
					}
				break;
				case 4:
						puts("VUELVE AL MENU PRINCIPAL");
				break;
				case 5:
						puts("Gracias por visitarnos");
				break;
				default:
						puts("OPCION INCORRECTA!!!");
		
		} 
	  }while(opc != 5);

}
void gestion_de_ventas(productos mercado[],int clientes_numero[]){
	int i,j, menu,k;
	char ordenar_alfabeticamente [ordenar_clientes][FILAS];
	char aux[FILAS];
	do{
		puts("digite una opcion: ");
		puts("1- carga de clientes");
		puts("2- el listado de clientes");
		puts("3- promocion del sorteo");
		puts("4- volver al menu principal");
		puts("5- salir");
		scanf("%d", &menu);
		switch(menu){
			case 1:
					for(i = 0; i<cantidad_productos; i++){
						puts("digite los nombres de los clientes: ");
						scanf("%s", mercado[i].clientes);	
						while(getchar()!= '\n');	
					}
					while(getchar()!= '\n');
			break;
			case 2:
					for(i = 0; i<ordenar_clientes; i++){
						strcpy (ordenar_alfabeticamente[i],mercado[i].clientes);
					}
					for(i = 0; i<ordenar_clientes-1; i++){
						for(j= 0; j<ordenar_clientes-i-1; j++){
							if (strcmp(ordenar_alfabeticamente[j], ordenar_alfabeticamente[j+1])>0){
								strcpy (aux, ordenar_alfabeticamente[j]);
								strcpy (ordenar_alfabeticamente[j], ordenar_alfabeticamente[j+1]);
								strcpy (ordenar_alfabeticamente[j+1], aux);
							}
						}
					}
					for (i=0; i<ordenar_clientes; i++){
						printf ("%s\n", ordenar_alfabeticamente[i]);
					}
			break;
			case 3:
				   srand(time(NULL));		
				   int ganador = rand()%5;
				   setlocale(LC_ALL, "");
				   time_t hora = time(NULL);
				   struct tm *la_hora = localtime(&hora);
				   char fechaText[30];
				   strftime(fechaText,50," PROMO SORTEO INVIERNO %A, %d de %B\n", la_hora);
				   puts(fechaText);
				   for(k= 0;k<LARGO;k++){
					   printf("digite los numeros de los clientes posicion[%i]", k);
					   scanf("%d", &clientes_numero[k]);
					   clientes_numero[k] = ganador;
				   }
				   printf("ganador cliente numero %d nombre %s\n", clientes_numero[ganador],mercado[i].clientes);
				
			break;
			case 4:
				   puts("vuelve al menu principal");
			break;
			case 5:
				   puts("Gracias por visitarnos");
			break;
			default:
				   puts("opcion incorrecta");
		}	
	}while(menu != 5);
}

time_t obtener_fecha_vencimiento(void){
	setlocale(LC_ALL, "");
	struct tm fecha = {}, fecha_orig = {};
	int dia,mes,anio;
	char fechaText[50];
	puts("digite al fecha de vencimiento, en formato fecha: ");
	scanf("%d/%d/%d", &dia,&mes,&anio);
	fecha.tm_mday = dia;
	fecha.tm_mon = mes - 1;
	fecha.tm_year = anio - 1900;
					 
	fecha_orig.tm_mday = fecha.tm_mday;
	fecha_orig.tm_mon = fecha.tm_mon;
	fecha_orig.tm_year = fecha.tm_year;
	mktime(&fecha);
	if(fecha_orig.tm_mday != fecha.tm_mday || fecha_orig.tm_mon != fecha.tm_mon || fecha_orig.tm_year != fecha.tm_year){
		  puts("error la fechar de vencimiento es invalido");
		  strftime(fechaText, 50, "%A, %d de %B del año %Y\n", &fecha_orig); //convertir en formato string
		  printf("original %s\n", fechaText);
						
		  strftime(fechaText, 50, "%A, %d de %B del año %Y\n", &fecha);
		  printf("nueva %s\n", fechaText);
	} 
	else{
		puts("fecha de vencimiento esta OK!");
		}
	time_t fecha_vencimiento = mktime(&fecha);
			
	return fecha_vencimiento;
}
