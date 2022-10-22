/* Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s 
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M 
em m/s.*/

#include <stdio.h>

int main()
{
    float km, ms;
    printf("Digite uma velocidade em kmh: ");
    scanf("%f",&km);
    ms = km/3.6;
    printf("A velocidade em ms eh %f", ms);
    return 0;
}