/* Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo-se que são descontados 8% para imposto de renda. */

#include <stdio.h>
int main(){ 
    int dias; float quantia;
    printf("Digite o numero de dias trabalhados pelo encanador: ");
    scanf("%d", &dias);
    quantia = dias*30;
    quantia = quantia - 0.08 * quantia;
    printf("A quantia liquida que devera ser paga eh %.2f", quantia);
    return 0;
}