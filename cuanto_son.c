/*
  Ingrese las calificaciones obtenidas por cada alumno, en un curso. Valide que cada calificación esté entre 1 y 10.
Finalice la carga al ingresar un -1 como calificación.
Entonces, muestre en pantalla cuántos alumnos tiene el curso, y cuál es el promedio del mismo

 * 
 */


#include <stdio.h>

int main()
{
	int calificacion, suma_total = 0;
	int i, prom = 0;
	
	puts("Digite la calificacion <-1 para salir> :");
	i = 0;
	calificacion = 0;	
	do{
		puts("Calificacion....");
		scanf("%i", &calificacion);
		if(calificacion >0){
			if(calificacion > 0 && calificacion <= 10){
				suma_total = suma_total + calificacion;
				i++;
				prom = suma_total / i;
		}else{
			puts("Error calificacion no valida");
		}
	}


	}while(calificacion != -1);

	printf("promedio de notas %d  cantidad de alumnos %d", prom,i);
	return 0;
}

