//############## funcEstatica.c ##############
#include <stdio.h>
/*
Este programa contiene las funciones de una calculadora básica: suma, resta, producto y
cociente.
*/
int suma(int,int);
static int resta(int,int);
int producto(int,int);
static int cociente (int,int);
int suma (int a, int b){
 return a + b;
}
static int resta (int a, int b){
 return a - b;
}
int producto (int a, int b){
 return (int)(a*b);
}
static int cociente (int a, int b){
 return (int)(a/b);
}