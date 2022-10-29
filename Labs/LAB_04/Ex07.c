/* 7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua 
média. */

#include <stdio.h>

int main(){

    int n, i;
    float media;

    i = 0;

    while(i < 10){

        printf("\nDigite um numero inteiro positivo: \n");
        scanf("%d", &n);

        if (n > 0){
            media = media + n;
            i += 1;
        }

        else{
            printf("\nApenas numeros positivos!\n");
        }
    }

    media = media / 10;
    printf("A media eh %.2f", media);
    return 0;
}