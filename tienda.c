#include <stdio.h>

int main() {

    int dep[20],n,i,con=0;
    char Ti[30];

    
        printf("Nombre de la tienda\t");
        scanf("%s", Ti);

        printf("\n%cCuantos departamentos hay en %s %c\n",168,Ti,63);
        scanf("%d", &n);

        for (i = 0; i < n; ++i) {
            printf(" Cantidad de articulos en departamento no. %d: ", i + 1);
            scanf("%d", &dep[i]);
        }
		
		 for (i = 0; i < n; ++i) {
			con=con+dep[i];
        }
		
	
        printf("La cantidad de articulos totales en %s es %d\n", Ti,con);

    return 0;
}