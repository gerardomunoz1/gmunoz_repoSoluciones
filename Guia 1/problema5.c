/*ESTE CÓDIGO ES PARA TRANSFORMAR
 * LOS DATOS DE UN DINOSAURIO*/
 
#include <stdio.h>

int main()
{
	char nombredino[1000];
	float librasdino;
	float piedino;
	float kilogramos;
	float metros;
	float libra = 0.45;
	float pie = 0.3048;
	
	printf ("=========BIENVENIDO A LA CONVERSION DE DATOS============\n");
	printf ("==================DE UN DINOSAURIO======================\n");
	
	printf ("Ingrese el nombre de su dinosaurio: ");
	scanf ("%s", nombredino);
	
	printf ("Ingrese el peso del dinosaurio en libras: ");
	scanf ("%f", &librasdino);
	
	printf ("Ingrese la longitud del dinosaurio en pies: ");
	scanf ("%f", &piedino);
	
	kilogramos = ((librasdino * libra) / 1);
	metros = ((piedino * pie) / 1);
	
	printf ("El peso de: %s ", nombredino);
	printf ("es de %f Kilogramos", kilogramos);
	printf (" y la longitud es de %.3f Metros\n", metros);
	printf ("===============CUIDE A SU DINOSAURIO=====================");
	
	return 0;
	
}
