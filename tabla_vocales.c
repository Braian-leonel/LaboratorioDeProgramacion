/*
 Declare diez variables de tipo char. Asigne a cada una una vocal (Son 5 mayúsculas y 5 minúsculas).
Luego muestre en pantalla su caracter y su código ASCII, tal como en el siguiente cuadro:
(las columnas están separadas con un tabulador, y los números están alineados a la derecha)

-------------------------
COD. LETRA
-------------------------
65 A
97 a
69 E
101 e
 * 
 */


#include <stdio.h>

int main()
{
	char a = 'a', e = 'e', i = 'i', o = 'o', u = 'u';
	char A = 'A', E = 'E', I = 'I', O = 'O', U = 'U';
	
	puts(" -------------------");
	puts("COD LETRA   ");
	puts(" -------------------");
	printf("%d ", A);
	printf("%c\n", A);
	printf("%d ", a);
	printf("%c\n", a);
	printf("%d ", E);
	printf("%c\n", E);
	printf("%d ", e);
	printf("%c\n", e);
	printf("%d ", I);
	printf("%c\n", I);
	printf("%d ", i);
	printf("%c\n", i);
	printf("%d ", O);
	printf("%c\n", O);
	printf("%d ", o);
	printf("%c\n", o);
	printf("%d ", U);
	printf("%c\n", U);
	printf("%d ", u);
	printf("%c\n", u);
	
	
	return 0;
}

