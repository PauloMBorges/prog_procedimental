/* 24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui 
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um 
programa em que o usuário entre com o valor e o estado destino do produto e o programa 
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o 
estado digitado não for válido, mostrar uma mensagem de erro. */

#include <stdio.h>

int main(){
    
    float valor;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Escolha seu estado:\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n\nOpcao: ");
    scanf("%d", &estado);

    switch(estado){

        case 1:
        printf("O valor do produto sera %.2f", valor + valor * 0.07);
        break;

        case 2:
        printf("O valor do produto sera %.2f", valor + valor * 0.12);
        break;

        case 3:
        printf("O valor do produto sera %.2f", valor + valor * 0.15);
        break;

        case 4:
        printf("O valor do produto sera %.2f", valor + valor * 0.08);
        break;

        default:
        printf("Erro. Opcao de estado invalida.");
        break;

    }
    
    return 0;
}