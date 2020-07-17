/*
 * Declarar una estructura llamada Carta, con dos miembros, 
 * "número" (entero) y "palo" (char, puede ser "E" (espada), "B" (basto), "O" (oro), o "C" (copa)).
Declare una función "cargar_datos_carta", 
* que no reciba parámetros, y devuelva una Carta.
*  Esta función realizará el ingreso de datos en una variable local de tipo Carta,
*  y la devolverá una vez que se ingresen los datos correctos (número de 1 a 12, palo con valor correcto).
Declare una función "mostrar_carta", que no devuelva ningún valor,
*  y reciba una carta como parámetro. Esta función mostrará los datos de la carta, 
* en una frase, como palabras. Ej.: "doce de espadas".
Declarar en el main una variable de tipo Carta, vacía.
*  Invoque a las dos funciones previas dentro del main, para cargar y mostrar los datos, respectivamente.
 */


#include <stdio.h>

typedef struct{
	int numero;
	char palo;
}cartas;

int cargar_datos_cartas();
void mostrar_carta(cartas una_carta);
cartas mano;

int main()
{
	cartas la_carta;
	la_carta.numero = 0;
	cargar_datos_cartas();
	mostrar_carta(la_carta);
	
	return 0;
}

int cargar_datos_cartas(){
	
		puts("digite el numero de carta");
		scanf("%d", &mano.numero);
		while(getchar()!= '\n');
		puts("digite el palo de la carta");
		scanf("%c", &mano.palo);
		if(mano.numero >= 1 && mano.numero <= 12){
			return mano.numero;
		}
		if(mano.palo == 'O' || mano.palo == 'B' || mano.palo == 'C' || mano.palo == 'E'){
			return mano.palo;
		}else{
			return puts("Error de validacion");
		}
}

void mostrar_carta(cartas una_carta){
	
		if(mano.numero==1)
		   printf("Uno ");
		else if(mano.numero==2)
			printf("Dos");
		else if(mano.numero==3)
			printf("Tres");
		else if(mano.numero==4)
			printf("Cuatro");
		else if(mano.numero == 5)
			printf("Cinco");
		else if(mano.numero == 6)
			printf("seis");
		else if(mano.numero == 7)
			printf("siete");
		else if(mano.numero == 8)
			printf("ocho");
		else if(mano.numero == 9)
			printf("nueve");
		else if(mano.numero == 10)
			printf("diez");
		else if(mano.numero == 11)
			printf("once");
		else if(mano.numero == 12)
			printf("doce");
		
		if(mano.palo == 'E')	
			printf(" de Espadas");
		else if(mano.palo == 'B')
			printf(" de Basto");
		else if(mano.palo == 'O')
			printf(" de Oro");
		else if(mano.palo == 'C')
			printf(" de Copa");
	
}
