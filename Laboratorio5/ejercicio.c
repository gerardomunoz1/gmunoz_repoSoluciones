/* [EJERCICIO 1]
 * Algoritmo narrado.
 * 1.- Definir las variables de los votos A y B.
 * 2.- Solicitar el voto del usuario mediante la terminal. Si el numero
 * ingresado es 1, significa que votó por A; mientras que si el numero
 * es 2, significa que votó por B. Si el numero ingresado es distinto
 * de 1 y 2, se imprime que el valor ingresado es inválido.
 * 3.- Hacer el cálculo y verificar quien ganó, en base al número aleatorio
 * generado anteriormente.
 * 4.- Llamar a la función e imprimir la cantidad de veces ganadas y
 * cantidad de veces perdidas. Preguntar si el usuario desea continuar
 * apostando.
 * 5.- Si todo sale bien, retornar a 0.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
randoom (){
	int opca, opcb, opcion;
	int resultadorandoma, resultadorandomb, ganaA, ganaB, total, pierdeA, pierdeB;
	char fin = "v";
	
	
	opca=0;
	opcb=0;
	
	while (fin!='f'){
			
			srand(time(0));
			
			resultadorandoma = (rand() %10);
			resultadorandomb = (rand() %10);
			
			total=0;
			ganaA=0;
			ganaB=0;
			pierdeA=0;
			pierdeB=0;
	
			if (resultadorandoma > resultadorandomb){ //ganó A.
				ganaA++;
				printf ("Gano A\n");
			}
			
			else if (resultadorandoma < resultadorandomb){ //pierde B.
				pierdeA++;
				printf ("Pierde B\n");			
			}
			
			else if (resultadorandoma == resultadorandomb){ //empate.
				printf ("Es un empate!\n");//hacer printf empate
			}
			
			printf ("El valor de A es [%d] y el valor de B es [%d].\n", resultadorandoma, resultadorandomb);	

			if (resultadorandomb > resultadorandoma){ //ganó B.
				ganaB++;
				printf ("Gano B\n");
			}
			
			else if (resultadorandoma < resultadorandomb){ //pierde A.
				pierdeB++;
				printf ("Pierde A\n");			
			}
			
			else if (resultadorandoma == resultadorandomb){ //empate.
				printf ("Es un empate!\n"); //hacer printf empate
			
			}	
			printf ("El valor de A es [%d] y el valor de B es [%d].\n", resultadorandoma, resultadorandomb);	
			
			printf ("¿Desea continuar? (v = Sí / f = No)\n");
			scanf ("%c", &fin);
	}
			
}



int main()
{
	int opca, opcb;
	int opcion;
	//char fin="v";
	
	opca= 0;
	opcb= 0;
	
	printf ("MENÚ\n");
	printf ("¿Apuestas por A o por B?");
	printf ("\n");
	
	printf ("Si apuesta por A, presione 1.\n");	
	printf ("Si apuesta por B, presione 2.\n");
	printf ("Opción deseada: ");
	scanf ("%d", &opcion);
	
	switch (opcion){
			case 1:
				opca++;
				break;
			case 2:
				opcb++;
				break;
			default:
				printf ("El número ingresado no es válido.\n");
		}
	printf ("A: %d\n", opca);
	printf ("B: %d\n", opcb);
			
	randoom(opcion);
	
	return 0;
}
