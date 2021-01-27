#include <stdio.h>

int main (){
 int res,n;
FILE *fa;
fa= fopen("factorial.txt","w");
 
 printf("\n\n\t\tIngrese el n%cmero para calcular su factorial\n",163);
 scanf("%d",&n);
 
 res=1;
 for (int i=1; i<=n; i++)
 {
	 fprintf(fa,"El factorial de %d es: ",i);
	 for (int x=1; x<=i; x++)
{

	fprintf(fa,"(%d)",x);
	 
}
	 res= res*i;
	 fprintf(fa,"=%d\n",res);
 }

 printf("El factorial de %d es: %d\n",n,res);
  fclose(fa);
 return 0;
}
