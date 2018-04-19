/* Algoritmo narrado.
 * 1.- Solicitar al usuario la cantidad de numeros primos que desea 
 * contar menor al numero.
 * 2.- Iniciar un ciclo donde 
*/


#include <stdio.h>

int main ()
{
	int primo=0, divisores=0, limite, i, nums;
	
	printf ("Contar primos menores que: ");
	scanf ("%d", &limite);
	
	for (nums = 2 ; nums <= limite ; nums++){
		divisores=0;
		for (i = 1 ; i<=nums ; i++){
			if (nums%i==0){
				divisores++;
			}
		}
		if (divisores == 2){
			primo++;
		}
	}
	printf ("Hay %d numeros primos.", primo);

	return 0;
}
