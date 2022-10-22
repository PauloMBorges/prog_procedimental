/* 28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das 
seguintes médias de acordo com um valor numérico digitado pelo usuário: 

(a) Geométrica: ^3√𝑥∗𝑦∗𝑧
(b) Ponderada: ([(1∗𝑥)+(2∗𝑦)+(3∗𝑧)])/3
(c) Harmônica: 1/(1/𝑥)+(1/𝑦)+(1/𝑧)
(d) Aritmética: (𝑥+𝑦+𝑧)/3 */

// Raiz cúbica: cbrt ou pow(base, expoente) pow(1.0, 3.0)

#include <stdio.h>
#include <math.h>

int main(){
    
    int x, y, z, op;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    printf("Digite o terceiro numero: ");
    scanf("%d", &z);

    printf("Escolha uma das medias:\n\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n\n");
    printf("Opcao: ");
    scanf("%d", &op);

    switch(op){

        case 1:
        printf("A media geometrica eh: %f", cbrt(x*y*z));
        break;

        case 2:
        media = ((1 * x) + (2 * y) + (3 * z)) / 3.0;
        printf("A media ponderada eh: %f", media);
        break;

        case 3:
        media = 1 / ((1.0/x) + (1.0/y) + (1.0/z));
        printf("A media harmonica eh: %f", media);
        break;

        case 4:
        media = (x + y + z) / 3.0;
        printf("A media aritmetica eh: %f", media);
        break;

        default:
        printf("Opcao invalida");
        break;

    }
    
    return 0;
}