#include <stdio.h>
int main ()
{
	char ao=162, ai=161;
	//Salto de linea
	printf ("Ejemplo salto de l%cnea\n",ai);
	printf ("Holaa\n");
	printf ("Adi%cs\n\n",ao);
	
	//Tab horizontal
	printf ("Ejemplo tabulador\n");
	printf ("Holaa\t");
	printf ("Adi%cs\n\n",ao);
	
	//Alarma
	printf ("Ejemplo alarma\n");
	printf ("Holaa\a");
	printf ("Adi%cs\n\n",ao);
	
	//Retroceso de carro
	printf ("Ejemplo retroceso de carro\n");
	printf ("Holaa\r");
	printf ("Adi%cs\n\n",ao);
	
	//Retroceso 
	printf ("Ejemplo retroceso\n");
	printf ("Holaa\b");
	printf ("Adi%cs\n\n",ao);
	
	return 0;
}