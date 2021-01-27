#include <stdio.h>

int main (){
 int op,res,n1,n2;
 char au=163,ao=162;

 
 printf("\n\n\t\tBienvenido a la calculadora\n");
 
 
 
 do 
 {
	 //Mostrar el menú
	 printf("1)Sumar\n2)Restar\n3)Multiplicar\n4)Dividir\n5)M%cdulo\n6)Factorial\n7)Suma hasta n n%cmero\n8)Salir \n",162,163);
	 
	 printf("\n\n\t\tSelecciona una opci%cn\n",162);
	 scanf ("%d",&op);
	 
	 switch (op)
	 {
		 case 1:
		 printf ("Escribe los n%cmeros separados por espacio\n\n",au);
		 scanf ("%d %d",&n1,&n2);
		 res=n1+n2;
		 printf ("El resultado de la suma es: %d \n\n",res);
		 break;
		 
		 case 2:
		 printf ("Escribe los n%cmeros separados por espacio\n\n",au);
		 scanf ("%d %d",&n1,&n2);
	     res=n1-n2;
		 printf ("El resultado de la resta es: %d \n\n",res);
		 break;
		 
		 case 3:
		 printf ("Escribe los n%cmeros separados por espacio\n\n",au);
		 scanf ("%d %d",&n1,&n2);
		 res=n1*n2;
		 printf ("El resultado de la multiplicaci%cn es: %d \n\n",ao,res);
		 break;
		 
		 case 4:
		 printf ("Escribe los n%cmeros separados por espacio\n\n",au);
		 scanf ("%d %d",&n1,&n2);
		 
		 if (n2==0) 
		 { printf ("El resultado de la divisi%cn es indeterminado \n\n",ao);
	 }
	else {
    res=n1/n2;
	printf ("El resultado de la divisi%cn es: %d \n\n",ao,res); 
	}
	    break;
		
		case 5:
		 printf ("Escribe los n%cmeros separados por espacio\n\n",au);
		 scanf ("%d %d",&n1,&n2);
		 if (n2==0) 
		 { printf ("El resultado del m%cdulo es indeterminado \n\n",ao);
	 }
	else {
    res=n1%n2;
	
		 printf ("El sobrante (m%cdulo) de la divisi%cn es: %d \n\n",ao,ao,res);
	}
	break;
	
	
	    case 6:
		printf("\n\n\t\tIngrese el n%cmero para calcular su factorial\n",163);
		scanf("%d",&n1);
		res=1;
		for (int i=1; i<=n1; i++)
		{
			res= res*i;
			}
			printf("El factorial de %d es: %d\n",n1,res);
		
		break;
		
		
		case 7:
		printf("\n\n\t\tIngrese el n%cmero a sumar\n",163);
		scanf("%d",&n1);
		res=0;
		for (int i=1; i<=n1; i++)
		{
			res= res+i;
			}
			printf("La suma es: %d\n",res);
		
		break;
		
		case 8: 
		printf("\n\n\t\tElegiste salir\n\n");
		break;
		
		default:
		printf("\n\n\t\tNO VALIDO \n\n");
		
		 
	 }
	 
	 
 }while(op!=8);
 printf("\n\n\tGracias por usar la calculadora\n\n");
 return 0;
}
 