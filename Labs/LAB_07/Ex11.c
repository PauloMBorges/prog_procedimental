/* 11. Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o 
segmento S[I..J]. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[128];
    int comeco, fim;

    printf("Digite uma string: ");
    gets(str);
    printf("Digite um inteiro nao-negativo: ");
    scanf("%d", &comeco);
    printf("Digite outro inteiro nao-negativo: ");
    scanf("%d", &fim);

    for (int i = comeco; i <= fim; i++){
        printf("%c", str[i]);
    }

    return 0;
}