/*ESTE ES UN PROGRAMA PARA MOSTRAR LA MATRICULA
 * Y CALIFICACIONES DE LOS ALUMNOS*/

#include <stdio.h>	

int main ()
{
	int matricula=2018430023;
	float calificacion1, calificacion2, calificacion3;
	float promedio;
	
		
	printf ("==================Bienvennido=======================\n");
	printf ("Esto permite calcular el promedio de 3 calificaciones\n");
	printf ("El número de matricula del alumno es: %d\n", matricula);
	
	printf ("Ingrese su calificacion n1:");	
	scanf ("%f", &calificacion1);
	
	printf ("Ingrese su calificacion n2: ");
	scanf ("%f", &calificacion2);
	
	printf ("Ingrese su calificacion n3: ");
	scanf ("%f", &calificacion3);
	
	promedio= ((calificacion1+calificacion2+calificacion3) / 3);
	
	printf ("El promedio de las calificaciones del alumno es: %f  \n", promedio);
	
	
	
return 0;	
}
