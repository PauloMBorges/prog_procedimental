/* 5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo 
que o raio é passado por parâmetro */

#include <stdio.h>
#include <math.h>

#define pi 3.14

float Volume(float x){
    float y = (4 * pi * pow(x, 3)) / 3;
    return y;
}

int main(){
    float x, y;
    printf("Digite o raio da esfera: ");
    scanf("%f", &x);

    y = Volume(x);

    printf("O volume da esfera eh %.2f", y);
    return 0;
}