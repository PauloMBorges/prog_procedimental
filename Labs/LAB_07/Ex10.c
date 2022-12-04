/* 10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto 
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever 
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista. */

#include <stdio.h>
#include <string.h>

int main(){

    char produto[64];
    float valor, valor_desconto, valor_a_pagar;

    printf("Digite o nome da mercadoria: ");
    gets(produto);
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    valor_desconto = valor * 0.1;
    valor_a_pagar = valor - valor_desconto;


    printf("Nome: %s\n", produto);
    printf("Valor total: %.2f\n", valor);
    printf("Valor do desconto: %.2f\n", valor_desconto);
    printf("Valor a ser pago aa vista: %.2f\n", valor_a_pagar );

    return 0;
}