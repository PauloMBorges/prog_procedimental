/* Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo 
em vista que o desconto foi de 12% */

#include <stdio.h>

int main(){
    float valor, desconto;
    printf("Digite o valor original do produto: ");
    scanf("%f", &valor);
    desconto = valor - (0.12 * valor);
    printf("O valor do produto com desconto eh %.2f", desconto);
    return 0;
}