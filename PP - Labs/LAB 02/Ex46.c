/* Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere 
outro número formado pelos dígitos invertidos do número lido. Exemplo: */

#include <stdio.h>

int main(){ 
    int n, d1, d2, d3;
    printf("Digite um numero inteiro positivo de 3 digitos: ");
    scanf("%d", &n);
    d3 = n % 10;        // pega o terceiro digito do numero
    n = n / 10;        // "tira" o digito anterior
    d2 = n % 10;      // pega o segundo
    n = n / 10;      // "tira" o segundo
    d1 = n % 10;    // pega o primeiro
    

    printf("%d%d%d", d3, d2, d1);
    return 0;
     
}