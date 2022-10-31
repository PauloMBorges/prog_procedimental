/* 13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos 
de 3 ou 5. */

#include <stdio.h>

int main(){

    int i, n, soma;
    i = 0;
    soma = 0;

    while (i < 1000){
        if (i % 3 == 0 || i % 5 == 0){
            soma += i;
            i++;
        }
        else{
            i = i + 1;
        }
    }

    printf("A soma eh %d", soma);
    return 0;
}