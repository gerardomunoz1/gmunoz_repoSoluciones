#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int randomtemp2(int n, int m){
	int gradoshora2;
	gradoshora2 = (rand() %n + m);
	
	return gradoshora2;
}
/*void burbuja (int semana [24]){
	
	int aux;
	
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			
			if (semana[j] > semana[j+1]) {
				aux = semana[j];
				semana[j] = semana[j+1];
				semana[j+1] = aux;
			}
		}
	}
	printf ("Orden Ascendente: \n");
	
	for (int i=0; i<24; i++){
		printf ("%d", semana[i+1]);
	}
	
	printf ("\n");
	
	printf ("Orden Descendente: \n");
	
	for (int i=23 ; i>=0; i--){
		printf ("%d", semana[i+1]);
	}
}*/

void mediapordia (int semana[7][24]){
	
	float sumadias = 0;
	float mediadia = 0;
	float mediasemana = 0;
	float sumaa=0;
	
	printf ("\n");
	for (int i=0; i<7; i++){
		
		sumadias =0;
		mediadia =0;
		
		for (int j=0; j<24; j++){
			sumadias= (sumadias + semana [i][j]);
			mediadia = (sumadias/24);			
		}
		sumaa = mediadia + sumaa;
		printf ("La media del día %d es: %.2f °C.\n", i+1, mediadia);
	}
	printf ("\n");
	mediasemana = sumaa / 7;
	printf ("La temperatura media de la semana fue de %.2f °C.\n", mediasemana);
}

void impresion (int semana [7][24]){
	
	for (int i=0 ; i<7 ; i++){
		for (int j=0; j<24 ; j++){
			
			semana [i][j]= randomtemp2 (25,10);
			printf ("[%d]", semana[i][j]);
		}
		printf ("\n");
	}
}

int main(){
	
	srand(time(NULL));
	int semana [7][24];
	
	
	/*for (int j=0 ; j<7; j++){
		printf ("En el dia %d, las temperaturas son: ", j);
		printf ("\n");
		printf ("\n");
		for (int i=0 ; i<24 ; i++){
			printf ("El grado de la hora %d es: ", i);
			printf ("\n");
		}
	printf ("\n");
	}*/
	
	impresion (semana);
	mediapordia (semana);
	
	
	//burbuja (semana[24]);
	
	return 0;
	
}
