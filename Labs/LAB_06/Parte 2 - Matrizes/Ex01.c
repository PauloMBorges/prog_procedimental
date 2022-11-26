/* 1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui. */

#include <stdio.h>

int main(){

    int A[4][4], i, j, count = 0;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Digite o valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);

            if (A[i][j] > 10) count++;
        }
    }

    printf("A matriz 4 x 4 possui %d valores maiores que 10", count);
    return 0;
}