/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula 
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin. */

#include <stdio.h>

int main()
{
    float C, K;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f",&K);
    C = K - 273.15;
    printf("A temperatura %f K em Celsius eh %f",K, C);
    return 0;

}