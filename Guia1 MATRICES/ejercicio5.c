#include <stdio.h>
#include <unistd.h>


void trasponedor (int R, int T, matriz[R][T]){
	int i;
	int j;
	
	for (i=0; i<T;i++){
		for (j=0; j<R; j++){
			printf("%d  ", matriz [j][i]);
		}
		printf("\n");
	}
	for(i=0; i<R; i++){
		for (j=0; j<T; j++){
			printf( "Ingrese un valor: ");
			scanf("%d",& matriz [i][j]);
		} 
	}
	for(i=0; i<R; i++){
		for (j=0; j<T; j++){
		printf("%d  " , matriz [i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La matriz traspuesta final es: \n");
}

int main(){

	int R, T;
	printf ("*Transformación de matrices online*\n");
	sleep (1);
	printf ("INICIANDO...");
	sleep (1);
	printf("Introduzca el número de filas (entre 1 y 50): ");
	scanf("%d", &R);
	printf("Introduzca el número de columnas(entre 1 y 30): ");
	scanf("%d", &T);
	
	
	int matriz [R][T];
	
		
	trasponedor (matriz);		
	return 0;
}
