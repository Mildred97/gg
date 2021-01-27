#include <stdio.h>
/*
* Este programa obtiene la suma de un LIMITE de números pares ingresados
* */
#define LIMITE 5
int main (){
 int enteroContador = 1;
 int enteroNumero = 0;
 int enteroSuma = 0;
 while (enteroContador <= LIMITE){
 printf("Ingrese n%cmero par %d:",163, enteroContador);
 scanf("%d",&enteroNumero);
 if (enteroNumero%2 != 0){
 printf("El n%cmero insertado no es par.\n",163);
 continue;
 }
 enteroSuma += enteroNumero;
 enteroContador++;
 }
 printf("La suma de los n%cmeros es: %d\n",163, enteroSuma);
 return 0;
}