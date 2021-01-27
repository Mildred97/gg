#include <stdio.h> 
int main ()
{
	char l = 'a';
	printf("El caracter es: %c \n",l);
	printf("El caracter en decimal es: %d \n",l);
	printf("El caracter en decimal es: %i \n",l);
	printf("El caracter en octal es: %o \n",l);
	printf("El caracter en hexadecimal es: %x \n",l);
	
	//Variable en numeros enteros
	short lm = 500;
	printf("Entero corto: %i \n",lm);
	printf("Entero corto: %d \n",lm);
	printf("Entero corto en octal: %o \n",lm);
	printf("Entero corto en hexadecimal: %x \n",lm);
	
	int lm2 = -2000;
	printf("Entero corto: %i \n",lm2);
	
	//Entero largo
	signed long sl = 67000030;
	printf("Entero largo: %ld \n",sl);
	printf("Entero largo: %li \n",sl);
	
	//Reales cortos
	float x = 2.71828;
	printf("Real corto: %f \n",x);
	printf("Real corto: %e \n",x);
	printf("Real corto: %g \n",x);
	
	//Reales largos
	double xl =25.8760356427825748965;
	printf("Real largo: %lf \n",xl);
	printf("Real largo: %.19lf \n",xl);
	
	return 0;
	

}