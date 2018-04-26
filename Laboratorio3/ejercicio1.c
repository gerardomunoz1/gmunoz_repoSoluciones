/*Algoritmo narrado.
 * 1.- Declarar variables.
 * 2.- Solicitar al usuario cuánto es el valor que pagan por cada
 * hora.
 * 3.- Solicitar al usuario cuántas horas trabajó durante 6 días por
 * cada día.
 * 4.- Calcular el pago, el cual es igual a la multiplicación de
 * el valor de la hora por las horas trabajadas. Sumar cada pago de los
 * días trabajados.
 * 5.- Llamar al procedimiento de "imprimirsueldo", el cual imprime
 * el sueldo obtenido al final de la semana.
 * 6.- Retornar a 0.
*/

#include <stdio.h>
#include <stdlib.h>


int 
calculasueldo(int valorhora, int horatrabajada){
	int pago;
	pago = valorhora * horatrabajada;
	return pago;
}
void imprimirsueldo (int totalsueldo){
	printf ("\n");
	printf ("El sueldo por haber trabajado los 6 días es: %d", totalsueldo);
}

int main()
{
	int valorhora, horatrabajada, i, total=0, totalsueldo;
	
	printf ("=================CALCULADOR DE SUELDO======================\n");
	printf ("\n");
	printf ("Ingrese el valor que pagan por hora: ");
	scanf ("%d", &valorhora);
	printf ("\n");
	
	for (i=1 ; i<=6 ; i++){
		printf ("Ingrese las horas trabajadas en el día %d: ",i);
		scanf ("%d", &horatrabajada);
		total=total+horatrabajada;
	}
	totalsueldo = calculasueldo(valorhora, total);
	imprimirsueldo(totalsueldo);
	return 0;
}
