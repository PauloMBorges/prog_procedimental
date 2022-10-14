/* Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A 
área do círculo é *raio2, considere  = 3.141592.*/

#include <stdio.h>
#define pi 3.141592

int main(){
    float raio, area;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("A area do circulo eh %.2f", area);
    return 0;
}