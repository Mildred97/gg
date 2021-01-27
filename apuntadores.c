#include <stdio.h>
/*
  manejo de cadenas en lenguaje C.
*/
int main(){
	//Crea un arreglo unidimensional de tamaño 20 para almacenar caracteres
 char palabra[20]={0};
 int i;
 printf("Ingrese una palabra: ");
 scanf("%s",palabra);
 printf("La palabra ingresada es: %s\n", palabra);
 /*En el ciclo se busca acceder al contenido del arreglo, valor por valor que hayamos ingresado
 para formar la palabra, empezando desde el elemento 0 hasta el 19
 
 */
 for (i = 0 ; i < 20 ; i++){
 printf("%c\n", palabra[i]);
 }
 return 0;
}