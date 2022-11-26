/* 2. Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos
Escreva ao final a matriz obtida. */

#include <stdio.h>

int main(){

    int A[5][5], i, j;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (i == j) A[i][j] = 1;
            else A[i][j] = 0;
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}