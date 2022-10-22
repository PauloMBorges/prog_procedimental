/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A 
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento 
em polegadas. */

#include <stdio.h>
int main(){
    float pol, cm;
    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &pol);
    cm = pol * 2.54;
    printf("O valor em centimetros eh %f", cm);
    return 0;
}