#include <stdio.h>
#include <unistd.h>

void completacionmatriz (int m, int matriz_A [m][m]){
	int a, b; 
	
	for (a=0; a<m; a++){
	printf ("\n");
		for (b=0; b<m; b++){
			printf ("Ingrese el valor para la coordenada [%d][%d]: ", a+1, b+1);
			scanf ("%d", &matriz_A [a][b]);
		}
	}
}
void impresion (int m, int matriz_A [m][m]){
	int a, b;
	printf ("\n");
	for (a=0; a<m; a++){
		printf ("\t[%d]", a+1);
	}
	for (a=0; a<m; a++){
		printf ("\n");
		printf ("[%d]", a+1);
		for (b=0; b<m; b++){
			printf ("\t %d",matriz_A [a][b]);
		}
	}	
}

void simetria (int m, int matriz_A [m][m]){
	int a, b;
	int interruptorcito=0;
	
	for (a=0; a<m; a++){		
		for (b=0; b<m; b++){
			if (a!=b){
				if (matriz_A [a][b]== matriz_A [a][b]){
					interruptorcito=0;
				}
				else {
					interruptorcito = 1;

				}
			}
		}
	}

	if (interruptorcito==0){
		printf ("\n");
		printf("\nLa matriz SI es simétrica.");
	}
	
	else{
		printf ("\n");
		printf("\nLa matriz NO es simétrica.");
	}
		
}
	
int main(){
	int m;
	printf ("\tVerificador de matrices simétricas\n");
	printf ("\t\t	ICB\n");
	printf ("\n");
	sleep (1);
	
	printf ("Ingrese el tamaño de la matriz: ");
	scanf ("%d", &m);
	int matriz_A [m][m];
	
	completacionmatriz (m, matriz_A);
	impresion (m,matriz_A);
	simetria (m, matriz_A);
	return 0;
}
