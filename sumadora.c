#include <stdio.h>

int main ()
{   //Declarar variables
	int n1,n2,res;
	char au=163,ao=162;
	
	printf ("\tCalculadora \n\n");
	
	
	//Pedir variables
	printf ("Escribe los n%cmeros separados por espacio\n\n",au);
	scanf ("%d %d",&n1,&n2);

	
	//Resultado operaciones
	res=n1+n2;
	printf ("El resultado de la suma es: %d \n\n",res);
	
	res=n1-n2;
	printf ("El resultado de la resta es: %d \n\n",res);
	
	res=n1*n2;
	printf ("El resultado de la multiplicaci%cn es: %d \n\n",ao,res);
	
    res=n1/n2;
	printf ("El resultado de la divisi%cn es: %d \n\n",ao,res);
	
	res=n1%n2;
	printf ("El sobrante (m%cdulo) de la divisi%cn es: %d \n\n",ao,ao,res);
	
	return 0;
	
}