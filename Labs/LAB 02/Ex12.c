/* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de 
conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas. */

#include <stdio.h>

int main()
{
    float m, km;
    printf("Digite uma distancia em milhas: ");
    scanf("%f", &m);
    km = 1.61 * m;
    printf("A distancia em km eh %f", km);
}