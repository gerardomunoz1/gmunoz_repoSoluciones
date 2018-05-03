#include <stdio.h>
#include <stdlib.h>

float
calculo (){
	float poblacion, poblacion10, porcentajefinal, personas;
	poblacion = 1000000;
	poblacion10 = 1000000 * 0.01;
	personas = poblacion10 * 0.99;
	porcentajefinal = ((100 * 990) / 100000);
	return porcentajefinal;
}

int main ()
{
	float porcentaje;
	
	printf ("Primero el 10 de la población total es 1.000 personas.\n");
	printf ("El 99,99 si o sí estará infectada.\n");
	printf ("Mientras que el 0,01 se encontrará en duda.\n");
	printf ("El 99,99 de 1.000 personas, es igual a 990 personas.\n");
	printf ("Entonces, 990 personas equivalen al 9,09 de la población total.\n");
	
	printf ("CÁLCULO:\n");
	
	porcentaje = calculo ();
	
	printf ("%f", porcentaje);
	
	return 0;
}
	
