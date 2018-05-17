/* [EJERCICIO 3]
 * Algoritmo narrado.
 * 1.- Definir las variables a utilizar.
 * 2.- Solicitar al usuario que ingrese un número para obtener su 
 * número mayor y número menor.
 * 3.- Realizar el cálculo respectivo utilizando el módulo de 10 (%10).
 * 4.- LLamar a cada función y compararlas entre sí para verificar
 * que número se escribe primero.
 * 5.- Si todo sale bien, se retorna a 0.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int
calculo (int num){
	int resto1;
	resto1= num%10;
	
	
	return resto1;
}
	
int
calculo2 ( int num){
	int resto2;
	resto2=num%10;
	
	return resto2;
}

int
calculo3 (int num){
	int resto3;
	resto3 = num%10;
	
	return resto3;
}

int
calculo4 (int num){
	int resto4;
	resto4=num%10;
	
	return resto4;
}

void
mayor1 (int resto1, int resto2){
	
	if (resto1 > resto2){
		printf ("%d", resto1);
		
		return resto1;
	}
	
	else if (resto1 < resto2){
		printf ("%d", resto2);
		
		return resto2;
	}
}


void
numero_mayor (int num){

	int resto1, resto2, resto3, resto4;
	printf ("Numero ingresado: %d\n", num);
	
	
	resto1 = calculo(num);
	num = num - resto1;
	num = num / 10;
	
	resto2 = calculo2(num);
	num = num - resto2;
	num = num / 10;
	
	resto3 = calculo3(num);
	num = num - resto3;
	num = num / 10;
	
	resto4 = calculo4(num);
	num = num - resto4;
	num = num / 10;
	
}

int main ()
{
	int num, resto1, resto2;
	printf ("Ingrese un número para encontrar su número mayor y menor: ");
	scanf ("%d", &num);	
	
	numero_mayor (num);
	mayor1 (resto1, resto2);
	
	return 0;
}
