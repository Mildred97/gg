#include <stdio.h>
int main (){
 #define TAMANO 5
 int lista[TAMANO] = {10, 8, 5, 8, 7};

 int indice = 0;

 printf("\tLista\n");
 while (indice < 5 ){
 printf("\nCalificaci%cn del alumno %d es %d",162,indice+1, lista[indice]);
 indice += 1; // análogo a indice = indice + 1;
 }

 printf("\n");

 return 0;
}