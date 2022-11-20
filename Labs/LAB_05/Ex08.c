/* 8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: 
hipotenusa = √𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor 
da hipotenusa através da equação. */

#include <stdio.h>
#include <math.h>

float Hipotenusa(float a, float b){
    float h = sqrt(pow(a, 2) + pow(b, 2));
    return h;
}

int main(){
    float a, b, h;

    printf("Digite o cateto a: ");
    scanf("%f", &a);
    printf("Digite o cateto b: ");
    scanf("%f", &b);

    h = Hipotenusa(a, b);

    printf("A hipotenusa eh %.2f", h);

    return 0;
}