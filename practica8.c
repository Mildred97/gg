#include <stdio.h>

int main ()
{
	char aa=160;
    double a, b, res;

 printf("Calcular el error matem%ctico E = |a - b|\n\n",aa);
 printf("Ingrese el valor de a:\n");
 scanf("%lf",&a);
 printf("Ingrese el valor de b:\n");
 scanf("%lf",&b);

 res = a < b ? b-a : a-b;

 printf("El error matem%ctico de\n",aa);
 printf("| %lf - %lf | es %lf\n", a, b, res);
 
	return 0;
}
