/* 13. Faça um programa que gerencie o estoque de um mercado e: 
- Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15 
letras), preço e quantidade; 
- Leia um pedido, composto por um código de produto e a quantidade. Localize este 
código no vetor e, se houver quantidade suficiente para atender ao pedido 
integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um 
código igual a zero. 
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem 
informando qual erro ocorreu. */


#include <stdio.h>

typedef struct {
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
} Produto;

int main(){

    Produto produtos[5];
    int i, codigo, quantidade;

    for (i = 0; i < 5; i++){

        printf("\nProduto %d\n", i+1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        scanf("%s", &produtos[i].nome);
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

    }

    printf("\nCodigo do produto: ");
    scanf("%d", &codigo);
    fflush(stdin);

    do {

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        for (i = 0; i < 5; i++){

            if (produtos[i].codigo == codigo){
                if (produtos[i].quantidade >= quantidade){
                    produtos[i].quantidade -= quantidade;
                    printf("\nPedido realizado\n");
                } else {
                    printf("\nQuantidade insuficiente\n");
                }
            }
        }

        printf("\nCodigo do produto: ");
        scanf("%d", &codigo);

    } while (codigo != 0);

    return 0;

}