/*ESTE CÓDIGO ES PARA CALCULAR
 * EL PRECIO FINAL DE UN BOLETO DE UNA
 * COMPAÑIA DE AUTOBUSES*/

#include <stdio.h>

int main()
{
	int precioboleto;
	int costoporkm;
	float kmxrecorrer;
	
	printf ("================COSTO DE BOLETOS===============\n");
	printf ("============AUTOBUSES CAMINO AL CIELO==========\n");
	printf ("_______________________________________________\n");
	
	printf ("Ingrese la cantidad de Km que recorrerá: ");
	scanf ("%f", &kmxrecorrer);
	
	printf ("El precio por Km es: ");
	scanf ("%d", &costoporkm);
	
	precioboleto = (costoporkm * kmxrecorrer);
	
	printf ("El precio final del Boleto es: %d\n", precioboleto);
	printf ("_______________________________________________\n");
	printf ("--->GRACIAS POR PREFERIRNOS<---");
	
	return 0;
}
	
