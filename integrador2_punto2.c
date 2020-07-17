/*
 Se vienen las elecciones...
Hay tres candidatos posibles. Ingrese los nombres de los tres candidatos por teclado.
Ingrese el número de mesa actual, y muestre si corresponde a 
* mujeres (número par) u hombres (número impar). (Pista: investigue sobre el operador de MÓDULO).

Entonces, para cada votante:
- ingresar su edad, y VALIDAR que sea mayor de edad.
- ingresar el género (M/F), y VALIDAR que sea el correspondiente al número de mesa.
- ingresar el voto (número de 1 a 3). VALIDAR que el valor del voto sea correcto.
- una vez que los datos son correctos, contabilizar el voto. Solicitar al usuario si desea una nueva carga o salir.
Al finalizar la carga, mostrar una estadística de:
- Cuántos votantes asistieron al comicio,
- Cuál fue la edad promedio,
- Y, por supuesto... quién fue el candidato ganador, y con cuántos votos ganó...

 * 
 */


#include <stdio.h>

int main()
{
	int edad, mesa, rest, rest2, i, voto, seguir, voto1, voto2, voto3 ;
	char candidato1 [30],candidato2 [30],candidato3 [30], genero;
	
	puts("*****Candidatos a votar: ******");
	puts("Digite el nombre del primer candidato: ");
	scanf("%s", candidato1);
	puts("Digite el nombre del segundo candidato: ");
	scanf("%s", candidato2);
	puts("Digite el nombre del tercer candidato: ");
	scanf("%s", candidato3);
	
	i = 0;
	voto = 0;
	voto1 = 0;
	voto2 = 0;
	voto3 = 0;
	
	do{
	
		puts("Digite la mesa de votacion:");
		scanf("%d", &mesa);
		rest = mesa % 2 == 0;
		if(rest){
			puts("par Mujeres");
		}
		rest2 = mesa % 2 != 0;
		if(rest2){
			puts("impar Hombres\n");
		}
		puts("************Votantes: *************");
		puts("Digite su edad: ");
		scanf("%d", &edad);
		while(getchar() != '\n');
		puts("Digite su genero: ");
		scanf("%c", &genero);
		if(edad > 18 && genero == 'F' && rest){
			printf("genero le toca mesa par\n");
			printf("ingrese el voto: 1-%s 2-%s 3-%s \n", candidato1,candidato2,candidato3);
			scanf("%d", &voto);
			if(voto >= 1 && voto <=3 ){
				if(voto == 1){
						printf("Votacion: %s\n", candidato1);
						voto1++;
					}if(voto == 2){
						printf("Votacion: %s\n", candidato2);
						voto2++;
					}if(voto == 3){
						printf("Votacion: %s\n", candidato3);
						voto3++;
					}
				}else{ puts("Valor incorrecto");}
			
	}	
	     if(edad > 18 && genero == 'M' && rest2){
			printf("genero le toca mesa impar\n");
			printf("ingrese el voto: 1-%s 2-%s 3-%s \n", candidato1,candidato2,candidato3);
			scanf("%d", &voto);
			if(voto >= 1 && voto <=3 ){
				if(voto == 1){
					printf("Votacion: %s\n", candidato1);
					voto1++;
				}if(voto == 2){
					printf("Votacion: %s\n", candidato2);
					voto2++;
				}if(voto == 3){
					printf("Votacion: %s\n", candidato3);
					voto3++;
				}
			}else{
				puts("Valores incorrecto");
			}	
		}
	i++;
	printf("\nSeguir votando 1 si/0 salir: ");
	scanf("%d", &seguir);
	

	}while(seguir != 0);
	
	if(voto1 > voto2 && voto1 > voto3)
		printf("\nel candidato ganador %s, cantidad de voto que obtuvo %d ", candidato1, voto1);
	else if(voto2 > voto1 && voto2 > voto3)
		printf("\nel candidato ganador %s, cantidad de voto que obtuvo %d ", candidato2, voto2);
	else if(voto == voto2 && voto == voto3)
		puts("Empate entre candidatos");
	else
		printf("\nel candidato ganador %s, cantidad de voto que obtuvo %d ", candidato3, voto3);
	
	printf("La edad promedio es %d, cantidad de votantes %d", edad /= voto, i);
	
	return 0;
}

