/* Algoritmo narrado.
 * 1.- Ingresar un numero deseado para realizar la piramide.
 * 2.- El numero ingresado será el límite, posterior a este límite
 * la escala comenzará a bajar.
 * 3.- Imprimir pirámide.
 * 4.- Retornar a 0.
*/
#include <stdio.h>

int main ()
{
	int numero, i, p, q;
	
	printf ("Ingrese un numero para la piramide: ");
	scanf ("%d", &numero);
	
	for (i = 1 ; i <= numero ; i++){
		for (p = 1; p<=i ; p++){
			
			printf ("%d", p);
			
			if (i==p){
				for (q = p-1; q > 0; q--){
					printf ("%d", q);
	
	}
}
}
	printf ("\n");
}
		return 0;
}
