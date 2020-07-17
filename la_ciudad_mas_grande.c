/*
 Declare tres variables de tipo string, y tres variables de tipo long int.
En estas variables, ingrese los nombres de 3 ciudades,
*  y la cantidad de habitantes de cada una.
Declare un puntero a char, y un puntero a long int. 
Use estos punteros para apuntar al nombre de la ciudad con más habitantes, 
* y la cantidad correspondiente.
Muestre los datos usando dichos punteros.

Finalmente, a través del puntero, 
* incremente la cantidad de habitantes de dicha ciudad en un 5% y muestre el nuevo valor.
 */
 
#include <stdio.h>

int main()
{
	char *puntero_string;
	int long long *puntero_ciudad = NULL;
	char string1[20];
	char string2[20];
	char string3[20];
	int long long ciudad1;
	int long long ciudad2;
	int long long ciudad3;
	
	puts("Digite el nombre de la cuidad 1:");
	scanf("%20[^\n]", string1);
	while(getchar()!= '\n');
	puts("Digite el nombre de la cuidad 2:");
	scanf("%20[^\n]", string2);
	while(getchar()!= '\n');
	puts("Digite el nombre de la cuidad 3:");
	scanf("%20[^\n]", string3);
	
	puts("digite la cantidad de habitante de tal ciudad:");
	scanf("%lld", &ciudad1);

	puts("digite la cantidad de habitante de tal ciudad:");
	scanf("%lld", &ciudad2);
	
	puts("digite la cantidad de habitante de tal ciudad ");
	scanf("%lld", &ciudad3);
	
	if(ciudad1 > ciudad2 && ciudad1 > ciudad3){
		puntero_string = string1;
		puntero_ciudad = &ciudad1;
		printf("%s la ciudad con mas habitante %lld \n", puntero_string, *puntero_ciudad);
		*puntero_ciudad = *puntero_ciudad * 5 / 100;
		printf("%s ciudad aumento la cantidad de habintante a un %%5 total: %lld", puntero_string, *puntero_ciudad);
	}
	else if(ciudad2 > ciudad1 && ciudad2 > ciudad3){
		puntero_string = string2;
		puntero_ciudad = &ciudad2;
		printf("%s la ciudad con mas habitante %lld\n", puntero_string, *puntero_ciudad);
		*puntero_ciudad = *puntero_ciudad * 5 / 100;
		printf("%s ciudad aumento la cantidad de habintante a un %%5 total: %lld", puntero_string, *puntero_ciudad);
	}
	else{
		puntero_string = string3;
		puntero_ciudad = &ciudad3;
		printf("%s la ciudad con mas habitante %lld\n", puntero_string, *puntero_ciudad);
		*puntero_ciudad = *puntero_ciudad * 5 / 100;
		printf("%s ciudad aumento la cantidad de habintante a un %%5 total: %lld", puntero_string, *puntero_ciudad);
	}
	
	return 0;
}

