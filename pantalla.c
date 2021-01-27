#include <stdio.h>

int main ()
{
	int a,b;
	
	//Datos separados por enter
	printf ("Escribe dos valores separados con enter:");
	scanf ("%d%d",&a,&b);
	printf ("Los datos escritos son: %d y %d \n\n",a,b);
	
	//Datos separados por espacio
	printf ("Escribe dos valores separados con espacio:");
	scanf ("%d %d",&a,&b);
	printf ("Los datos escritos son: %d y %d \n\n",a,b);
	
	//Datos separados por coma
	printf ("Escribe dos valores separados con una coma:");
	scanf ("%d,%d",&a,&b);
	printf ("Los datos escritos son: %d y %d \n",a,b);
	
	return 0;
}