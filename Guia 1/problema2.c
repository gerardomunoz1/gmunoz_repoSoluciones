#include <stdio.h>

int main()
{
	int numeropedido;
	int cuadrado;
	int cubo;
	
	printf ("Ingrese numero: ");
	scanf ("%d", &numeropedido);
	
	cuadrado = (numeropedido * numeropedido);
	cubo = (cuadrado * numeropedido);
	
	printf ("El numero ingresado al cuadrado es: %d \n", cuadrado);
	printf ("El numero ingresado al cubo es: %d \n", cubo);
	
	return 0;	
	
}
