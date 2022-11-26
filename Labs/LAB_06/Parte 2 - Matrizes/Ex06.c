/*
6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a 
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos 
acima da diagonal principal. Imprima a matriz original e a matriz transformada. 
*/

#include <stdio.h>
#include <time.h>


int main(){

    int A[4][4], i, j;

    srand(time(NULL));

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            A[i][j] = (rand() % 20) + 1;
        }
    }

    printf("Matriz original: \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%4d ", A[i][j]);
        }
    printf("\n");
    }

    printf("\nMatriz transformada: \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (i < j){
                A[i][j] = 0;
            }
            printf("%4d ", A[i][j]);
        }
    printf("\n");
    }

    return 0;
}