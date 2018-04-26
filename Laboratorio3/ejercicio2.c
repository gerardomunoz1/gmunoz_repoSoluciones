/*Algoritmo narrado.
 * 1.- Declarar las variables: la temperatura máxima y la temperatura
 * que desea marcar en la terminal.
 * 2.- Preguntar al usuario cuanto logra marcar el termómetro y cuanto
 * desea marcar en ella.
 * 3.- Crear 2 procedimientos. Uno de ellos dibujará el termómetro
 * con una temperatura máxima, mientras que el otro dibujará hasta
 * donde desea marcar el usuario.
 * 4.- Llamar a dichos procedimientos para imprimir y mostrar en pantalla
 * el termómetro generado.
 * 5.- Si el programa funciona bien, retornar a 0.
*/

#include <stdio.h>
#include <stdlib.h>

void
dibujo (int tmax){
	
	int num, raya;
	for (num=0 ; num <= tmax ; num++ ){
		if (num%10==0){
			printf ("%d", num);
		}
		else if (num%10==1){
			printf ("");
		}
		else {
			printf (".");
		}
	}
	printf ("\n");
	for (raya=0 ; raya <= tmax ; raya++){
		if (raya%10==0){
			printf ("|");
		}
		else{
			printf (" ");
		}
		
	}
		
}

void 
llenar (int gradosingresados){
	int guion;
	printf ("\n");
	for (guion=0 ; guion < gradosingresados ; guion++){
		printf ("-");
	}
	if (gradosingresados==guion){
		printf ("*");
	}
}

int main()
{
	int gradosingresados;
	int tmax;

	printf ("+==================+TERMÓMETRO DIGITAL+===================+\n");
	printf ("                   +------------------+                    \n");
	printf ("\n");
	printf ("Ingrese cuanto grados celsius muestra su termómetro: ");
	scanf ("%d", &tmax);
	
	printf ("Ingrese los grados que desea marcar: ");
	scanf ("%d", &gradosingresados);
	
	dibujo (tmax);
	llenar (gradosingresados);
	
	return 0;
}
