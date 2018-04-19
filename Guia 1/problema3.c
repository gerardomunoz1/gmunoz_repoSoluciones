/*ESTE CÓDIGO ES PARA CALCULAR LA
 * HIPOTENUSA DE UN TRIANGULO DE MEDIDAS
 * A Y B*/


#include <stdio.h>

int main()
{
	float catetoA;
	float catetoB;
	float hipotenusa;
	
	printf ("=======BIENVENIDO AL CALCULADOR DE HIPOTENUSAS=========\n");
	
	printf ("Ingrese el valor del cateto A: ");
	scanf ("%f", &catetoA);
	
	printf ("Ingrese el valor del cateto B: ");
	scanf ("%f", &catetoB);
	
	hipotenusa= (catetoA*catetoA) + (catetoB*catetoB);
	
	printf ("El valor de la hipotenusa al cuadrado es: %f\n", hipotenusa);
	
	printf ("===================HASTA PRONTO========================");
	
	return 0;
	
}
	
	
	

