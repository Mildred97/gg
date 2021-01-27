#include <stdio.h>

int main (){
 int res,n;

 
 printf("\n\n\t\tIngrese el n%cmero para calcular su factorial\n",163);
 scanf("%d",&n);
 
 res=1;
 for (int i=1; i<=n; i++)
 {
	 res= res*i;
 }

 printf("El factorial de %d es: %d\n",n,res);
 return 0;
}