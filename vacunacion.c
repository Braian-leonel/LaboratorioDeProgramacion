/*
 Comenzó la campaña de vacunación, que abarca a:
- menores de 5 años
- mayores de 65
- mujeres embarazadas
- personas con factor de riesgo (enfermos, trabajadores de salud, etc.).

Para una persona, ingrese por teclado la edad , género (M/F), si está embarazada (sólo a las mujeres)
y si pertenece a un factor de riesgo (ingrese 1 o 0 como respuesta a cada pregunta).

Con los datos ingresados, determine si dicha persona debe vacunarse, y muestre el mensaje correspondiente.
 */


#include <stdio.h>
#include <stdbool.h>
int main()
{
	char genero;
	int embarazo, riesgo, edad;
	
	puts("digite la edad: ");
	scanf("%d", &edad);
	while(getchar() != '\n');
	puts("ingrese el genero: ");
	scanf("%c", &genero);
	puts("si es femenina y estas embarazada 1-SI/2-NO: ");
	scanf("%d", &embarazo);
	puts("perteneces a un factor de riesgo? 1-SI/2-NO: ");
	scanf("%d", &riesgo);
	
	if(edad <= 5 && edad >= 65){
		puts("Si tiene menos de 5 años y mas de 65- Tiene que vacunarse");
	}else{
		puts("No debe vacunarse");
	}
	if(embarazo == true && genero == 'F'){
		puts("mujeres embarazada- Tiene que vacunarse");
	}else{
		puts("No debe vacunarse");
	}
	if(riesgo == true){
		puts("Esta en el factor de riesgo- Tiene que vacunarse");
	}
	else{
		puts("No debe vacunarse");
	}

	return 0;
}

