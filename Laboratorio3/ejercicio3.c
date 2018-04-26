/* Algoritmo narrado.
 * 1.- Se declaran las variables. La cuota inicial se inicia en $10 y el
 * total inicia en 0.
 * 2.- Dentro de un ciclo, se calcula siempre la cuota por 2 y se suma
 * en el total.
 * 3.- Se llama al procedimiento "imprimirtotal", el cual imprime el valor
 * final a pagar luego de los 20 meses.
 * 4.- Si el programa funciona correctamente, se retorna a 0.
*/
#include <stdio.h>
#include <stdlib.h>

void
imprimirtotal (int total){
	printf ("\n");
	printf ("La cuota final será de: $%d CLP.", total);
	printf ("\n");
	printf ("\n");
	printf ("No se endeude más...");
}

int main()
{
	int mes, cuota, total;
	
	printf ("+================+CALCULADOR DE CUOTAS+================+\n");
	printf ("\n");
	
	cuota = 10;
	total = 0;
	
	for (mes=1 ; mes <= 20 ; mes++){
		
		total = total + cuota;
		cuota = cuota * 2;
		printf ("El total a pagar en la cuota %d es de: $%d CLP.\n", mes, cuota);
		
	}
	imprimirtotal(total);
	
	return 0;
}


		
