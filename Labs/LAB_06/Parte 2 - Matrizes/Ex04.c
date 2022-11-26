/* 4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse 
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não 
encontrado”. */

#include <stdio.h>

int main(){

    int A[5][5], i, j, X, i_x = 123, j_x = 123;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite o valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite um valor X: ");
    scanf("%d", &X);

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            
            if (A[i][j] == X){
                i_x = i;
                j_x = j;
                break;
            }

        }
    }

    if (i_x == 123 && j_x == 123) printf("O valor X (%d) nao foi encontrado", X);
    else printf("O valor X (%d) esta em %d x %d", X, i_x, j_x);

    return 0;
}