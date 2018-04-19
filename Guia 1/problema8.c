/* ESTE CÓDIGO PERMITE EVALUAR EL SIGUIENTE
 * POLINOMIO*/

#include <stdio.h>

int main ()
{
	int valordex;
	int calculofinal;
	int cubo;
	int cuadrado;
	int falta;
	
	printf ("===ALGORITMO PARA CALCULAR DISTINTOS VALORES DE 'X'===\n");
	printf ("Ingrese el valor de 'X': ");
	scanf ("%d", &valordex);
	
	cubo = (valordex * valordex * valordex);
	cuadrado = 2 * (valordex * valordex);
	falta = ((3 * valordex) + 5);
	
	calculofinal = cubo + cuadrado + falta;
	
	printf ("El resultado del valor asignado para 'X' es: %d", calculofinal);
	
	return 0;
}
