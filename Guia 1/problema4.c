/*ESTE CODIGO ES PARA CALCULAR
 * EL PERIMETRO Y LA SUPERFICIE DE UN RECTANGULO*/

#include <stdio.h>

int main()
{
	float base;
	float altura;
	float superficie;
	float perimetro;
	
	printf ("=======BIENVENIDO AL CALCULADOR=======\n");
	printf ("=DE PERIMETRO Y AREA DE UN RECTANGULO=\n");
	
	printf ("Ingrese el valor de la altura: ");
	scanf ("%f", &altura);
	
	printf ("Ingrese el valor de la base: ");
	scanf ("%f", &base);
	
	superficie = (base * altura);
	perimetro = 2 * (base + altura);
	
	printf ("El valor del perimetro es: %f\n", perimetro);
	printf ("El valor de la superficie: %f\n", superficie);
	
	printf ("===============ADIÓS===================");
	
	return 0;
}
