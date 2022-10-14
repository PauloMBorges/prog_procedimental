/* Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem 
como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela. */

#include <stdio.h>

int main(){ 
    float c, l, p, perimetro;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &c);
    printf("Digite a largura do terreno: ");
    scanf("%f", &l);
    printf("Digite o preco do metro de tela p: ");
    scanf("%f", &p);

    perimetro = 2 * (c+l);
    p = p * perimetro;

    printf("O custo para cercar esse terreno com tela eh %.2f", p);

}