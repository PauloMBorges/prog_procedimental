/* Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: 
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + b2. Faça um programa que receba os valores de a e b e calcule o valor da 
hipotenusa através da equação. Imprima o resultado dessa operação. */

#include <stdio.h>

int main(){
    float a, b, h;
    printf("Digite os catetos A e B: ");
    scanf("%f %f", &a,&b);
    h = sqrt(a*a + b*b);
    printf("O valor da hipotenusa eh %.2f", h);
    return 0;
}