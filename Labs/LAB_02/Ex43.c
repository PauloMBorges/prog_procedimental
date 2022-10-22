/* Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre: 
- o total a pagar com desconto de 10%; 
- o valor de cada parcela, no parcelamento de 3x sem juros; 
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto); 
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total). */

#include <stdio.h>
int main(){ 
    float valor_total, desc, parcela, comissao_avista, comissao_parc;
    printf("Digite o valor total: ");
    scanf("%f", &valor_total);
    desc = valor_total - valor_total * 0.10;
    parcela = valor_total / 3;
    comissao_avista = desc * 0.05;
    comissao_parc = valor_total * 0.05;
    printf("O total a pagar com desconto sera: %.2f \n", desc);
    printf("O valor de cada parcela sera: %.2f \n", parcela);
    printf("A comissao da venda a vista sera: %.2f \n", comissao_avista);
    printf("A comimissao da venda parcelada sera: %.2f \n", comissao_parc);
    return 0;
}