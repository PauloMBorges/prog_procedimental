/* Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A 
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento 
em polegadas */

#include <stdio.h>
int main(){
    float pol, cm;
    printf("Digite um comprimento em centimetros: ");
    scanf("%f", &cm);
    pol = cm/2.54;
    printf("O valor em polegadas eh %f", pol);
    return 0;
}