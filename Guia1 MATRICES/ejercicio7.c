#include <stdio.h>

void relleno (int matris [4][5]){
	
	int i, j;
	
	for (i=0; i<4; i++){
		for (j=0;j<5;j++){
			
			printf ("Ingrese el valor en la posición [%d][%d]: ", i, j);
			scanf ("%d", &matris[i][j]);			
		}
		printf ("\n");
	}
}

void impresion (int matris [4][5]){
	int j, i;
	int sumas =0;
	
	printf ("Su matriz de [4 x 5] es: ");
	printf ("\n");
	for (i=0; i<4; i++){
		
		sumas =0;
		
		for (j=0;j<5;j++){
			
			sumas += matris[i][j];
			
			printf ("[%d]", matris[i][j]);			
			
		}
		
		printf ("	=> La suma de la fila %d es: %d.", i, sumas);
		printf ("\n");
	}
}

int main(){
	
	int matris [4][5];
	
	relleno (matris);
	
	impresion (matris);
	
}
