#include <stdio.h>
/*
 Este programa contiene dos funciones: la función main y la función
llamarFuncion. La función main manda llamar a la función llamarFuncion dentro
de un ciclo for. La función llamarFuncion crea una variable estática e imprime
su valor.
*/
void llamarFuncion();
int main (){
 for (int j=0 ; j < 5 ; j++){
 llamarFuncion();
 }
}
void llamarFuncion(){
 static int numVeces = 0;
 printf("Esta funcion se ha llamado %d veces.\n",++numVeces);
}