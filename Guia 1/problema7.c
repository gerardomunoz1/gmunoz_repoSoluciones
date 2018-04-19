/* ESTE CÓDIGO ES UN CONVERSOR
 * DE DÍAS A SEGUNDOS*/
 
 #include <stdio.h>
 
 int main()
 {
	 int numero_de_dias;
	 int hora = 24;
	 int minuto;
	 int segundo;
	
	 printf ("===========CONVERSOR DE DIAS A SEGUNDOS===============\n");
	 
	 printf ("Ingrese el numero de días: ");
	 scanf ("%d", &numero_de_dias);
	 
	 minuto = ((numero_de_dias * hora) * 60);	 
	 segundo = (minuto * 60);
	 
	 printf ("El número de días dio como resultado: %d segundos.", segundo);
	 
	 return 0;
}
	 
	 
	 

