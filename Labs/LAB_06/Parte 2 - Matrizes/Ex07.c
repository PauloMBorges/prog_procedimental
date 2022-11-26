/*
7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de 
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de 
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a 
cartela gerada. 
*/

#include <stdio.h>
#include <time.h>

int main(){

    int bingo[5][5], i, j, k, l;

    srand(time(NULL));

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            bingo[i][j] = (rand() % 99) + 1;
        }

        for (k = 0; k < i; k++){
            for (l = 0; l < 5; l++){
                if (bingo[i][j] == bingo[k][l]){
                    bingo[i][j] = (rand() % 99) + 1;
                }
            }
        }
    }

    printf("\t CARTELA\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%4d ", bingo[i][j]);
        }
    printf("\n");
    }

    return 0;
}
