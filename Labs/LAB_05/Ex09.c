/* 9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do 
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 =
pi ∗ 𝑟𝑎𝑖𝑜2 ∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde pi = 3.141592. */

#include <stdio.h>

#define pi 3.141592

float VolumeCilindro(float altura, float raio){
    float V = (pi * raio * raio * altura);
    return V;
}

int main(){
    float raio, altura, volume;
    printf("---- Calculadora - Volume cilindro circular ---\n");
    printf("\nDigite o raio: ");
    scanf("%f", &raio);
    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    volume = VolumeCilindro(altura, raio);

    printf("\nO volume do cilindro circular eh %.2f", volume);
    return 0;
}