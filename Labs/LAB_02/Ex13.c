/* Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de 
conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas. */

#include <stdio.h>

int main()
{
    float km, ms;
    printf("Digite uma velocidade em ms: ");
    scanf("%f",&ms);
    km = ms * 3.6;
    printf("A velocidade em kmh eh %f", km);
    return 0;
}