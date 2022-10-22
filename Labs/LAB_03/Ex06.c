/* 6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim 
como a diferença existente entre ambos. */

#include <stdio.h>

int main(){

    int n1, n2, d;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2){
        printf("O maior numero eh %d", n1);
        d = n1 - n2;
        printf("\nA diferenca eh %d", d);
    }

    else{
        printf("O maior numero eh %d", n2);
        d = n2 - n1;
        printf("\nA diferenca eh %d", d);
    }

    return 0;
}