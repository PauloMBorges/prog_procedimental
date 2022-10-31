/* 11. Faça um programa que leia um número inteiro positivo N e imprima todos os números 
naturais de 0 até N em ordem crescente */

#include <stdio.h>

int main(){

    int n, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("\nNumeros naturais de 0 ate %d em ordem crescente: \n\n", n);

    for (i = 0; i < (n + 1); i++){
        printf("%d ", i);
    }

    return 0;
}