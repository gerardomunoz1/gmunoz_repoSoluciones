/*Algoritmo narrado.
 * 1.- Solicitar al usuario el peso y la edad del pequeño.
 * 2.- Se deja en claro que se debe administrar 0.2 mg por Kg al día.
 * 3.- Se sabe que 1 mL del medicamento son 25 gotas. Al aplicar regla
 * de 3, utilizando los 0.2 mg multiplicado por las 25 gotas, se obtiene
 * la dosis a aplicar.
 * 4.- Si el niño es menor de un año, la dosis obtenida se debe dividir
 * en 3 dosis. De lo contrario se debe aplicar la dosis completa.
 * 5.- Imprimir la dosis a aplicar.
 * 6.- Retornar a 0.
 * */


#include <stdio.h>

int main ()
{
	int peso, edad, gotas=5, dosis;
	
	
	printf ("+=====+Calculador de dosis diarias+=====+\n");
	
	printf ("Ingrese el peso del individuo: ");
	scanf ("%d", &peso);
	
	printf ("Ingrese la edad del individuo: ");
	scanf ("%d", &edad);
	
	
	dosis = gotas * peso;
		
	if (edad < 1){
		dosis = (dosis / 3);
		printf ("La dosis diaria es de %d gotas.", dosis);
		
	}
	else if (edad > 1){
		printf ("La dosis diaria es de %d gotas.", dosis);
	}
	return 0;
}
