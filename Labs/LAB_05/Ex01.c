/* 1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. */

#include <stdio.h>

int dobro(int x){
    x *= 2;
    return x;
}

int main(){
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    y = dobro(x);
    printf("\nO dobro de %d eh %d", x, y);
    return 0;
}