/* 5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar. */

#include <stdio.h>

int main(){

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n%2 == 0){
        printf("O numero eh par");
    }
    else{
        printf("O numero eh impar");
    }

    return 0;
}