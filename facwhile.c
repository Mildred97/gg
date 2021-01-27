#include <stdio.h>

int main (){
 int res,n,i;
FILE *fa;
fa= fopen("factorial.txt","w");
 
 printf("\n\n\t\tIngrese el n%cmero para calcular su factorial\n",163);
 scanf("%d",&n);
 
 res=1;
 i=1;
 while (i<=n) 
 {
	 fprintf(fa,"El factorial de %d es: ",n);
	 res= res*i;
	 i++;
	 fprintf(fa,"%d\n",res);
 }

 printf("El factorial de %d es: %d\n",n,res);
 fclose(fa);
 return 0;
}