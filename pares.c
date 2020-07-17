/*
 Ingresar dos números por teclado.
Si el segundo es mayor al primero mostrar todos los números pares que existen entre ellos.
De lo contrario, mostrar un error.
Ejemplo, ingresando 24 y 30: 24 - 26 - 28 - 30
  
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n, n2;
	
	puts("Digite dos numeros: ");
	scanf("%d %d", &n, &n2);
	if(n<n2){
		for(; n<n2; n+=2){
			printf("%5d ", n);
	}printf("%5d", n2);
	}else{
		puts("ERROR");
}
	

	
	return 0;
}

