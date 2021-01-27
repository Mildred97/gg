#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int num,i,*articulos;
	char *dep;
	printf("\n\t Ingrese la cantidad de departamentos\n");
	scanf("%d",&num);
	
	dep = (char *)calloc (num,sizeof(char));
	articulos = (int *)calloc (num,sizeof(int));
	
	printf("\n\t Ingrese la inicial de cada departamento.\n");
	for (i = 0 ; i <num ; i++){
      scanf("%c\n",&dep[i]);   
    }
printf("%c%\n",dep[1]);
 /*
    for (i = 0 ; i < num ; i++){
	printf("%cCuantos articulos hay en %c%c\n",168,dep[i],63);
	 /*for (i = 0 ; i < num ; i++){
	 scanf("%d\n",&articulos[i]);   
	 } 
	 int a=0;
	 for (i = 0 ; i <num ; i++){
      a= a+articulos[i];   
    }
	printf ("La cantidad total de articulos es: %d",a);
	 

 }
*/


	
	return 0;
}