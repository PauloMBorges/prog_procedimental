/* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido 
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que 
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do 
prêmio com base no valor investido. */

#include <stdio.h>

int main(){ 
    float apostador1, apostador2, apostador3, valor_premio, valor_aposta;

    printf("Digite o valor do premio: ");
    scanf("%f", &valor_premio);
    printf("Digite quanto o primeiro apostador investiu: ");
    scanf("%f", &apostador1);
    printf("Digite quanto o segundo apostador investiu: ");
    scanf("%f", &apostador2);
    printf("Digite quanto o terceiro apostador investiu: ");
    scanf("%f", &apostador3);

    valor_aposta = apostador1 + apostador2 + apostador3;
    apostador1 = apostador1 / valor_aposta;
    apostador2 = apostador2 / valor_aposta;
    apostador3 = apostador3 / valor_aposta;

    apostador1 = apostador1 * valor_premio;
    apostador2 = apostador2 * valor_premio;
    apostador3 = apostador3 * valor_premio;

    printf("O valor que o primeiro apostador ganharia eh %.2f\n", apostador1);
    printf("O valor que o segundo apostador ganharia eh %.2f\n", apostador2);
    printf("O valor que o terceiro apostador ganharia eh %.2f\n", apostador3);

    return 0;

    }