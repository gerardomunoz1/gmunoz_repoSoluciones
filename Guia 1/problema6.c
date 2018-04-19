/*ESTE CÓDIGO ES PARA CALCULAR EL PRECIO FINAL
 * QUE SE COBRARÁ POR UNA CANTIDAD X DE GALONES
 * EN UNA GASOLINERA*/
 
 #include <stdio.h>
 
 int main()
 {
	 float galon = 3.785;
	 int precio_por_litro = 820;
	 int galones_recibidos;
	 float litros_galones_recibidos;
	 float preciofinal;
	 
	 printf ("==========CALCULADOR DEL MONTO FINAL A PAGAR=============\n");
	 printf ("==================GASOLINERAS GICB=======================\n");
	 
	 printf ("Ingrese la cantidad de galones: ");
	 scanf ("%d", &galones_recibidos);
	 
	 litros_galones_recibidos = (galones_recibidos * galon);
	 
	 preciofinal = (litros_galones_recibidos * precio_por_litro);
	 
	 printf ("El monto a pagar es un total de: %.3f", preciofinal);
	 printf (" pesos.");
	 return 0;
}
	 
	 
