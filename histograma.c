/*
 Ingrese tres números del 1 al 100 (porcentajes).
Para cada número, muestre una línea del largo correspondiente a las decemas del mismo,
de acuerdo a los siguientes ejemplos:

===== 57%
======= 72%
=== 32%
 */


#include <stdio.h>

int main()
{
	int n,n1,n2, i;
	puts("digite un numero:");
	scanf("%d", &n);
	
	puts("digite un numero:");
	scanf("%d", &n1);
	
	puts("digite un numero:");
	scanf("%d", &n2);
	for(i =0; i<n/10; ++i)
		printf("=");
	printf("%d%%\n", n);
	for(i =0; i<n1/10; ++i)
		printf("=");
	printf("%d%%\n", n1);
	for(i =0; i<n2/10; ++i)
		printf("=");
	printf("%d%%", n2);
	
	return 0;
}

