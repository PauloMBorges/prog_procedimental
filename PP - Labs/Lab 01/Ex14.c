/* Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: 
R = G*/180, sendo G o ângulo em graus e R em radianos e  = 3.141592. */

#include <stdio.h>

pi = 3.141592;
int main()
{
    float g, r;
    printf("Digite o angulo em graus: ");
    scanf("%f",&g);
    r = g * pi / 180;
    printf("O angulo em radiano eh %f", r);
    return 0;
}