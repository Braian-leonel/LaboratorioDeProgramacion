/*
 ingrese dos números, cantidad de pisos, y cantidad de departamentos.
Con estos dos números, muestre en pantalla las combinaciones de pisos 
* y departamentos posibles, arrancando desde la letra "A" 
* (Utilice un doble for, con el código ASCII para incrementar el valor de la letra).

Ejemplo: para 2 pisos y 3 departamentos:

Piso 1, Departamento A
Piso 1, Departamento B
Piso 1, Departamento C
Piso  2, De partamento A
Piso 2, Departamento B
Piso 2, Departamento C
 */


#include <stdio.h>

int main()
{
	int piso, departamento,i;
	int x= 1,a = 1;
	char ch = 'A';
	puts("digite el piso:");
	scanf("%d", &piso);
	puts("digite el departamento");
	scanf("%d", &departamento);
	for(i = 0; i<piso*departamento; ++i){	
		 	printf("piso %d - Departamento %c\n", x,ch);
		 	ch ++;
			if(a==departamento){
				ch = 'A';
			}
	
			if(a==departamento){
				x+=1;
				a=0;
			}
			a++;
	}
	
	return 0;
}

