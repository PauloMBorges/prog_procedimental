/* Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua 
idade e do ano atual. */

#include <stdio.h>

int main(){ 
    int idade, ano_atual, nascimento;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    nascimento = ano_atual - idade;

    printf("O seu ano de nascimento eh %d", nascimento);
    return 0;
    
}