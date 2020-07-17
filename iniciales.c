/*
  */


#include <stdio.h>

int main(int argc, char **argv)
{
	char *nombre1 = "Braian";
	char *nombre2 = "Leonel";
	char *apellido = "Leroyer";
	char n = 'B';
	char n2 ='L';
	char a ='L';
	
	puts("Mi nombre es:");
	printf("%s %s %s\n", nombre1, nombre2, apellido);
	putchar(n);putchar('.');putchar(n2);putchar('.');putchar(a);
	return 0;
}

