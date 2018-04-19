/*ESTE CÓDIGO ES PARA CALCULAR EL
 * DINERO TOTAL DE UN VENDEDOR A
 * FIN DE MES */

#include <stdio.h>

int main()
{
	float porcentaje_extra = 0.07;
	int sueldobase;
	float sueldototal;
	int ventas;	
	
	printf ("=======CALCULADOR DEL DINERO TOTAL A FIN DE MES=======\n");
	
	printf ("Ingrese el sueldo base: ");
	scanf ("%d", &sueldobase);
	
	printf ("Ingrese el sueldo de ventas: ");
	scanf ("%d", &ventas);
	
	porcentaje_extra = (porcentaje_extra * ventas);
	sueldototal = (ventas + porcentaje_extra);
	
	printf ("El sueldo total es: $%.2f CLP.", sueldototal);
	
	
	return 0;

}
	
	
	
