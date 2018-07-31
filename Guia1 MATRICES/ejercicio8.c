#include <stdio.h>
#include <stdlib.h>

int aleatorio(int n, int m){
	int azar = 0;
	azar = (rand() %n + m);
	
	return azar;
}

void impresion (int numero, int matris[numero][numero]){
	
	for (int i=0; i<numero; i++){
		for (int j=0; j<numero; j++){
			
			matris[i][j] = aleatorio(50,1);
			
			printf ("[%d]", matris[i][j]);
		}
		printf ("\n");
	}	
	
}

void impresioninversa (int numero, int matris [numero][numero]){
	printf ("\n\nImpresion inversa\n");
	for (int i=numero-1; i>=0; i--){
			for (int j=0; j<numero; j++){
				printf ("[%d]", matris[i][j]);
			
			}
			printf ("\n");
	}
}

int main(){
	
	int numero;
	
	printf ("Ingrese su matriz: ");
	scanf ("%d", &numero);
	
	int matris[numero][numero];
	
	impresion (numero, matris);
	
	impresioninversa (numero, matris);
	
	return 0;
}
