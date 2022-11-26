/* 3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior 
valor. */

#include <stdio.h>

int main(){

    int A[4][4], i, j, maior = 0, i_maior, j_maior;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Digite o valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);

            if (A[i][j] > maior){
                maior = A[i][j];
                i_maior = i;
                j_maior = j;
            }
        }
    }

    printf("O maior valor esta em %d x %d", i_maior, j_maior);

    return 0;
}