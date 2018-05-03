/* Algoritmo narrado.
 * Se declaran las variables (numero, final, x).
 * Se solicita al usuario que ingrese un número cualquiera
 * para luego ser invertido.
 * Se realiza el cálculo utilizando el módulo (%).
 * Se imprime el valor obtenido en el cálculo (resultado invertido).
 * Se retorna a 0.
*/

#include <stdio.h>
#include <stdlib.h>
void 
invertirNumero(int numero){
	int x, final;
	x=1;
	while (x==1){
		
		if(numero <= 9 ){
			x=0;
		}
		final = numero%10;
		printf ("%d", final);	
		numero = numero - final;
		numero = numero / 10;
	}
	
}

int main()
{
	int numero;
	
	
	printf ("Ingrese el numero que desea ser invertido: ");
	scanf ("%d", &numero);
	
	invertirNumero(numero);
	
	return 0;
}
