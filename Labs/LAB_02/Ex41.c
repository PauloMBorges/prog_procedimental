/* Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas 
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor 
calculado. */

#include <stdio.h>
int main(){
    float valor_hora, horas, valor_pago;
    printf("Digite o valor da hora de trabalho em reais: ");
    scanf("%f", &valor_hora);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas);
    valor_pago = valor_hora * horas * 1.10;
    printf("O valor a ser pago ao funcionaro eh %.2f", valor_pago);
    return 0;
}