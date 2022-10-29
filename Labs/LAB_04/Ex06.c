/* 6. Faça um programa que leia 10 inteiros e imprima sua média. */

#include <stdio.h>

int main(){

    int n, i;
    float media;

    i = 0;

    while (i < 10){
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);
        media = media + n;
        i += 1;
    }

    media = (media / i);
    printf("A media eh: %.2f", media);

    return 0;
}