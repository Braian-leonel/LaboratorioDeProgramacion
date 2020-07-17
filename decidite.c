/*
 * declare una variable de tipo cadena, y asigne el nombre de destino turistico ej:(Bariloche)
 * muestre por pantalla la pregunta a donde vas a viajar este año? y muestre el valor
 * de la variable. Luego asigne el valor de otro destino(Ej. carlo paz). haga la misma pregunta, muestre la nueva 
 * respuesta. Haga la misma pregunta/respuesta una vez mas.
 * finalice el programa con una frase de cierre.
 */


#include <stdio.h>

int main()
{
	char *nombre = "Las grutas";
	char *nombre2 = "Puerto Madryn";
	
	puts("¿Donde vas a viajar este anio?");
	puts(nombre);
	puts("");
	puts("¿Donde vas a viajar este anio?");
	puts(nombre2);
	puts("");
	puts("Decidite de una vez");
	
	return 0;
}

