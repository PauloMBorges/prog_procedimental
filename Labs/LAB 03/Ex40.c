/* 40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do 
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, 
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor. 

 

CUSTO DE FÁBRICA                    % DO DISTRIBUIDOR       % DOS IMPOSTOS 
até R$12.000,00                         5                       isento 
entre R$12.000,00 e R$25.000,00         10                      15 
acima de R$25.000,00                    15                      20 

*/

#include <stdio.h>

int main(){

    float custo_fabrica, custo_consumidor, comissao, impostos;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000){
        comissao = 0.05;
        impostos = 0;
    }
    else if(custo_fabrica <= 25000){
        comissao = 0.10;
        impostos = 0.15;
    }
    else{
        comissao = 0.15;
        impostos = 0.20;
    }

    comissao *= custo_fabrica;
    impostos *= custo_fabrica;
    custo_consumidor = custo_fabrica + comissao + impostos;

    printf("O custo ao consumidor sera %.2f", custo_consumidor);
    return 0;
}