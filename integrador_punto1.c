/* 
 * Con la función puts, y las secuencias de escape, realizar un programa que muestre en pantalla las siguientes figuras:

- un cuadrado relleno
- un recuadro
- un triángulo rectángulo
- un ascii art. Puede inventar uno o usar alguno del enlace proporcionado. 
* Atención con los ascii arts que contengan caracteres reservados (barra invertida \ o comilla doble "). 
* Cada uno de ellos debe escaparse anteponiendo una barra invertida para evitar errores de compilación. 
* Ejemplo: doble barra invertida \\, barra-comilla \
 */


#include <stdio.h>

int main()
{
	puts("*******");
	puts("*******");
	puts("*******");
	puts("*******\n");
	puts("");
	puts("*****************");
	puts("*               *");
	puts("*               *");
	puts("*               *");
	puts("*****************\n");
	puts("");
	puts("*");
	puts("*  *");
	puts("*    *");
	puts("*      *");
	puts("*        *");
	puts("************\n");
	
	puts("$$$$$$$$$$$$$$$$ $o$o$o$o$o$oo$$$$$$$$$$$$$$$$$");
	puts("$$$$$$$$$$$$ o$$$$$$$$$$ $ $$$$$$$o$ $$$$$$$$$$$$");
	puts("$$$$$$$$$ $o$$$$  $oo $          $$$oo $$$$$$$$$" );
	puts("$$$$$$$ o$$$$     o  $oo o o        $$$o $$$$$$$");
	puts("$$$$$ o$$$        oo$$$$$$$$$$o       $$$o $$$$$");
	puts("$$$$ o$$$  $  o$$$$$$$$$$$$$$ $$oo        $$$ $$$$");
	puts("$$$ $$$     $$$$$$$$$$$$$$$$o$o$$$         $$$o$$$");
	puts("$$ $$$    o$$$$$$$$$$$$$$$$$$$$$$$$o o   o   $$o $");
	puts("$ $$$     o$$$$$$$$$ $$$$$$    $$$$$$ $$$$$  $$$ $");
	puts("$o$$     o$$$$$$$$$$o""$$$""""ooo $$$$$$$$    $$$");
	puts("$o$$     o$$$$$$$$$$              oo $ $o     $$$o");
	puts("o$$$     o$$$$$$$$$$                    $    o$$o");
	puts("o$$$    o$$$$$$$$$$$$o                    o  oo$$o");
	puts("o$$$  oo$$$$$$$$$$$$$$$$ooooooo$$$$$oo    $ $  $$o");
	puts("o$$$       $$$$$$$$$$$$$$$$$$$$$$$$$$$$o      $$$");
	puts("$ $$$        $$$$$$$$$$$$$$$$$$$$$$$$$$$o    o$$ $");
	puts("$$ $$o        $$$$$$$$$$$$$$$$$$$$$$$$$$$o   $$$o$");
	puts("$$o$$$o       $$  $$$$$$$$$$$$$$$$$$$$$$$o  $$$ $$");
	puts("$$$o $$o     $     $  $$$$$$$$$$$$$$$$$$$oo$$$ $$$");
	puts("$$$$o $$$o              $$$$$$$$$$$$$$$$$o$$ o$$$$");
	puts("$$$$$$o $$$o         oo$$$$$$$$$$$$$$$$$$$$ o$$$$$");
	puts("$$$$$$$$o $$$$ooooo$$$$$$$$$$$$$$$$$$$$$$ o$$$$$$$");
	puts("$$$$$$$$$$o $$$$$$$$$$$$$$$$$$$$$$$$$ oo$$$$$$$$$");
	puts("$$$$$$$$$$$$$o$  $$$$$$$$$$$$$$$$$  oo$$$$$$$$$$$$");
	puts("$$$$$$$$$$$$$$$$$$o$o$ $ $ $ $oo$o$$$$$$$$$$$$$$$$");
		
			
	return 0;
}

