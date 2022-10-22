/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h 
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e 
M em m/s.*/

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