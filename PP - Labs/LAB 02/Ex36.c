/* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um 
cilindro circular é calculado por meio da seguinte fórmula: V =  * raio2 * altura, onde  = 
3.141592. */

#include <stdio.h>
#define pi 3.141592

int main(){
    float h, r, v;
    printf("Digite a altura do cilindro circular: ");
    scanf("%f", &h);
    printf("E o raio: ");
    scanf("%f", &r);
    v = pi * r*r * h;
    printf("O volume do cilindro eh %.2f", v);
    return 0;
}