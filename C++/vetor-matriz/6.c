/*
6. Construa um algoritmo que leia duas 
matrizes 3x3 e gere uma terceira matriz
com a soma dos elementos correspondentes de 
a e b.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a[3][3],b[3][3], c[3][3],i,j;

    printf("Dados da matriz A:\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite A[%i][%i]: ",i+1,j+1);
            scanf("%i", &a[i][j]);
            fflush(stdin);
        }
    }

        printf("Dados da matriz B:\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite B[%i][%i]: ",i+1,j+1);
            scanf("%i", &b[i][j]);
            fflush(stdin);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nDados da matric C: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}