/* 10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */

#include <stdio.h>

int main(){

    int i, soma;

    i = 0;
    soma = 0;

    while (i < 50){
        i = i + 1;
        soma = soma + (i * 2);
    }

    printf("A soma dos 50 primeiros numeros pares eh %d", soma);
    return 0;
}

    