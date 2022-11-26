/* 2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores 
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá 
escrever a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>

int main(){

    int A[8], X, Y, soma;

    printf("Digite os valores do vetor: \n");

    for (int i = 0; i < 8; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite a primeira posicao para somar: ");
    scanf("%d", &X);
    printf("Digite a segunda posicao para somar: ");
    scanf("%d", &Y);

    soma = A[X] + A[Y];

    printf("\nA soma eh: %d", soma);

    return 0;
    
}