/* 8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido. */

#include <stdio.h>

int main(){

    int i;
    float n, maior, menor;

    printf("Digite o 1o numero: ");
    scanf("%f", &n);
    maior = n;
    menor = n;

    i = 2;

    while (i <= 10){
        printf("Digite o %do numero: ", i);
        scanf("%f", &n);

        if (n > maior){
            maior = n;
        }
        else{
            if (n < menor){
                menor = n;
            }
        }

        i = i + 1;

    }

    printf("Maior: %.2f\nMenor: %.2f", maior, menor);
    return 0;
}