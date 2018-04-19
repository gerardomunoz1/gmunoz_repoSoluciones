/* Algoritmo narrado.
 * 1.- Pedir los goles del equipo y del equipo contrario.
 * 2.- Comparar goles. 
 * 3.- Si gana, suma 3 puntos. Si pierde no suma nada y si empata
 * suman 1 punto al puntaje total.
 * 4.- Imprimir el valor del puntaje total.
 * 5.- Retornar a 0.
 * */

#include <stdio.h>

int main()
{
	int puntaje = 0;
	int i=1;
	int equipo, otro;
	
	printf ("=Contador de puntaje Liga de Fútbol=\n");
	printf ("==============Equipo================\n");
	printf ("==========LOS GLORIOSOS=============\n");
	
	while (i<=5){
		printf ("Cuantos goles hizo los gloriosos en la fecha %d: ", i);
		scanf ("%d", &equipo);
		
		printf ("Cuantos goles hizo el otro equipo en la fecha %d: ", i);
		scanf ("%d", &otro);
		
	if (equipo > otro){
		puntaje = puntaje + 3; 
	}
	else if (equipo < otro){
		puntaje = puntaje + 0;
	}
	else if ( equipo == otro){
		puntaje = puntaje + 1;
	}	
	i++;
	equipo = 0;
	otro = 0;
}
	
	printf ("------------------------------------------------\n");
	printf ("Hasta la fecha, LOS GLORIOSOS llevan: %d puntos.", puntaje);

	return 0;
}

