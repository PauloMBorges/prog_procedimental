/* 21. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas 
com pontos de exclamação, conforme o exemplo abaixo (para n = 5): 

! 
!! 
!!! 
!!!! 
!!!!! */

#include <stdio.h>

void desenha_linha(int x);

int main(){

    int x;

    printf("Digite o numero de linhas: ");
    scanf("%d", &x);

    desenha_linha(x);
    return 0;
}

void desenha_linha(int x){
    int i, j;
    for (i = 0; i < x; i++){
        for (j = 0; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }
}
