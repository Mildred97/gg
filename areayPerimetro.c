#include <stdio.h>

int main ()
{   //Declarar variables
	int n1,n2,a,fig,p,n3;
	char ai=161,aa=160,ao=162;
	
	printf ("\tCalculadora de %creas y per%cmetros \n\n",aa,ai);
	printf ("Opciones:\n\n 1)Tri%cngulo\n 2)Rect%cngulo\n 3)C%crculo\n\n",aa,aa,ai);
	
	//Figura a calcular
	printf ("Elige la figura a calcular \n\n");
	scanf ("%d",&fig);
	
	switch (fig)
	{
		case 1:
		 printf ("Escribe la base y altura del tri%cngulo \n\n",aa);
	     scanf ("%d %d",&n1,&n2);
		 //Calculo area
		 a= (n1*n2)/2;
		 printf ("Escribe los lados del tri%cngulo \n\n",aa);
		 scanf ("%d %d %d",&n1,&n2,&n3);
		 
		 //Calculo perimetro
		 p= n1+n2+n3;
		 printf ("El %crea es: %d \nEl perimetro es: %d",aa,a,p);
		 
		 break;
		
		case 2:
		 printf ("Escribe los 2 lados del rect%cngulo \n",aa);
	     scanf ("%d %d",&n1,&n2);
		 //Calculo area
		 a= n1*n2;
		 
		 //Calculo perimetro
		 p= n2+n2+n1+n1;
		 printf ("El %crea es: %d \nEl perimetro es: %d",aa,a,p);
		 break;
		
		
		case 3:
		 printf ("Escribe el radio del c%crculo \n\n",ai);
	     scanf ("%d",&n1);
		 //Calculo area
		 a= 3.1416*(n1*n1);
		 
		 //Calculo perimetro
		 p= 2*3.1416*n1;
		 printf ("El %crea es: %d \nEl perimetro es: %d",aa,a,p);
		 break;
		 
		 default:
		 printf ("Opci%cn no v%clida",ao,aa);
		 break;
	}
	
	return 0;
	
}