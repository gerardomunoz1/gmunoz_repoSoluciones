#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void inicializacion(int largo, int matris [largo][largo]){
	
	int i;
	int j;
	
	for (i=0; i<largo; i++){
		for (j=0;j<largo;j++){
			
			printf ("Ingrese el valor en la posición [%d][%d]: ", i, j);
			scanf ("%d", &matris[i][j]);			
		}
	}
}
void impresion (int largo, int matris[largo][largo]){
	int j, i;
	
	printf ("Su matriz de [%d x %d] es: ", largo, largo);
	printf ("\n");
	for (i=0; i<largo; i++){
		for (j=0;j<largo;j++){
			printf ("[%d]", matris[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");
}
void sumas(int largo, int matris[largo][largo]){
	
	int arreglo [largo];
	int total=0;
	int i, j;
	
	for (i=0; i<largo; i++){
		arreglo[i]=0;
	}
	for (i=0;i<largo;i++){
		for (j=0;j<largo;j++){
			arreglo [i]= arreglo [i] + matris[i][j];
		}
		printf ("La suma de la fila %d es: %d", i, arreglo[i]);
		printf ("\n");
	}
	for (i=0; i<largo; i++){
		total= total + arreglo[i];
		
	}
	printf ("La suma total es: %d", total);	
}
int main(){
	int largo;
	
	
	printf ("\t==Bienvenido al creador de matrices 3.000==\n");
	sleep (1);
	printf ("\n");
	printf ("Ingrese el número de filas y columnas que desea: ");
	scanf ("%d", &largo);
	
	int matris[largo][largo];
	inicializacion(largo, matris);
	system("clear");
	sleep (1);
	
	impresion (largo, matris);
	sumas (largo, matris);
	
	return 0;
}
