/* 18. Faça um programa que mostre ao usuário um menu com 4 opções de operações 
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa 
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo */

#include <stdio.h>

int main(){

    float n1, n2;
    int op;

    printf("Escolha a operacao matematica desejada:\n\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n\n");
    scanf("%d", &op);
    printf("\nDigite o primeiro valor numerico: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor numerico: ");
    scanf("%f", &n2);

    switch (op){

        case 1:
        printf("\nA adicao eh %.2f", n1 + n2);
        break;

        case 2:
        printf("\nA subtracao eh %.2f", n1 - n2);
        break;

        case 3:
        printf("\nA multiplicacao eh %.2f", n1 * n2);
        break;

        case 4:
        printf("\nA divisao eh %.2f", n1 / n2);
        
    }

    return 0;
}