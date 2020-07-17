/*
 4) Tres empresarios se asociaron para formar Nueva Hotesur S.A.
Ingresar el monto correspondiente al capital que aporta cada socio.
Calcular y mostrar:
- el capital total de la empresa,
- el monto y porcentaje de participación de cada socio.
- el aporte promedio de los 3 socios.

Ejemplo:

CERTIFICADO DE ACCIONES - LOS SAUCES III S.A.
Capital total declarado: $ 901137.9
Socio Importe % Participación
A 123452.60 13%
B 234562.70 26%
C 543122.60 60% 
 */


#include <stdio.h>

int main()
{
	int porcentaje = 0, porcentaje2 = 0, porcentaje3 = 0;
	float socio1, socio2, socio3, cap_total = 0;
	float promedio = 0;
	puts("digite el monto correspondiente que aporta cada socio: ");
	scanf("%f", &socio1);
	puts("digite el monto correspondiente que aporta cada socio: ");
	scanf("%f", &socio2);
	puts("digite el monto correspondiente que aporta cada socio: ");
	scanf("%f", &socio3);
	cap_total = socio1 + socio2 + socio3;
	promedio = cap_total /3;
	porcentaje = socio1 *100 / cap_total;
	porcentaje2 = socio2 *100 / cap_total;
	porcentaje3 = socio3 *100 / cap_total;
	
	puts("CERTIFICADO DE ACCIONES - LOS SAUCES III S.A.");
	printf("capital total declarado: $%.3f\n", cap_total);
	puts("-----SOCIO IMPORTE % POR PARTICIPACION------");
	printf("A %.3f %%%d\n",socio1, porcentaje);
    printf("B %.3f %%%d\n",socio2, porcentaje2);
	printf("C %.3f %%%d\n",socio3, porcentaje3);
	puts("----------------------------------------");
	printf("Aporte promedio:  $%.3f", promedio);
	return 0;
}

