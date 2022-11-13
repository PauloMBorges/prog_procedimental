/* 12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores 
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 
6 + 11 +22 + 33 = 78  */

#include <stdio.h>

int main(){

    int n, i, soma_divisor;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    i = 1;
    soma_divisor = 0;

    while (i < n){
        if (n % i == 0){
            soma_divisor = soma_divisor + i;
            i = i + 1;
        }
        else{
            i = i + 1;
        }
    }

    printf("A soma dos divisores de %d (exceto ele mesmo) eh: %d", n, soma_divisor);
    return 0;
}