/* Algoritmo narrado.
* Se entregan los datos, los cuales dice que Juan entregó 5 huevos,
* Manuel entregó 5 huevos, y Antonio no entregó nada para el desayuno
* compartido.
* Se sabe que son 8 huevos en total, entonces cada uno comerá (8/3) huevos,
* que es aproximadamente 2.6 periódico.
* Se realiza el cálculo respectivo para obtener cuánto come Antonio de
* Juan y Manuel.
* Se imprime el valor que se debe pagar a cada uno.
* Se retorna a 0.
*/
#include <stdio.h>
#include <stdlib.h>

float
division_dinero (float persona){
	int pago;
	pago = ((persona-(8.0/3.0)) * 10);
	return pago;
}

int main()
{
	
	float juan=5.0, manuel=3.0, pagoJuan, pagoManuel;
	
	printf ("Un desayuno equitativo.\n");
	printf ("\n");
	printf ("Juan entregó 5 huevos para la paila.\n");
	printf ("Manuel entregó 3 huevos para la paila.\n");
	printf ("Antonio no entregó ningún huevo.\n");
	printf ("Se llega a un acuerdo y se vota que Antonio pague $80 pesos y");
	printf (" debe ser justo para los tres.\n");
	printf ("\n");


	pagoJuan = division_dinero (juan);
	pagoManuel = division_dinero (manuel);
	
	printf ("Antonio le debe pagar a Juan: $%2.f pesos.\n", pagoJuan);
	printf ("Antonio le debe pagar a Manuel: $%2.f pesos.\n", pagoManuel);
	
	return 0;
}
