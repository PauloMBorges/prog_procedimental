/* Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: 
G = R*180/, sendo G o ângulo em graus e R em radianos e  = 3.141592. */

#include <stdio.h>
#define pi 3.141592
int main()
{
    float g, r;
    printf("Digite o angulo em radianos: ");
    scanf("%f",&r);
    g = r * 180 / pi;
    printf("O angulo em graus eh %f", g);
    return 0;
}
