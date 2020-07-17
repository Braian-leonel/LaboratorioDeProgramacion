/*
 Diseñe una estructura animal, que contenga raza, edad y origen.
Diseñe una estructura mascota, que contenga los datos del animal (anidados), más el dni del dueño.
Declare un arreglo de 5 mascotas e ingrese datos en ellos.
Luego solicite un dni, y muestre los datos de la mascota asociados.
 */


#include <stdio.h>
#define CANTIDAD 5

typedef struct{
	char raza[50];
	int edad;
	char origen[50];
}animal;
typedef struct{
	animal datos;
	int dni_duenio;
}mascota;

int main()
{
	mascota masc[CANTIDAD];
	int  i, asociado = 0;
	for(i = 0; i<CANTIDAD; i++){
	puts("digite la raza del animal: ");
	scanf("%50[^\n]", masc[i].datos.raza);
	puts("digite la edad del animal: ");
	scanf("%d", &masc[i].datos.edad);
	while(getchar()!= '\n');
	puts("digite el origen del animal: ");
	scanf("%50[^\n]", masc[i].datos.origen);
	puts("Digite el DNI de la persona: ");
	scanf("%d", &masc[i].dni_duenio);
	while(getchar()!= '\n');
}
	printf("Digite el asociado de tal animal:\n");
	scanf("%d", &asociado);
	printf(
		"Animal %d con el dni %d, es asociado a la mascota %s de raza, con la edad %d, y el origen %s",i, masc[asociado-1].dni_duenio, masc[asociado-1].datos.raza, masc[asociado-1].datos.edad, masc[asociado-1].datos.origen);
	
	
	
	
	return 0;
}

