/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula 
de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin. */

#include <stdio.h>

int main()
{
    float C, K;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&C);
    K = C + 273.15;
    printf("A temperatura %f C em Kelvin eh %f",C, K);
    return 0;

}