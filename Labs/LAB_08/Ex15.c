/* 15. Faça um programa para armazenar um livro de receitas e: 
- Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de 
ingredientes e ingredientes; 
- Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor 
de ingredientes, sendo que cada ingrediente contém nome e quantidade; 
- Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar, 
informe ao usuário. Repita o processo até digitar uma string vazia. */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[25];
    int qtd;
} Ingrediente;

typedef struct {
    char nome[25];
    int qtdIngredientes;
    Ingrediente ingredientes[5];
} Receita;

int main(){

    Receita receitas[5];
    int i, j;
    char receita[25];

    for (i = 0; i < 5; i++){

        printf("\n\nReceita %d\n", i+1);
        printf("Nome: ");
        fgets(receitas[i].nome, 25, stdin);
        printf("Quantidade de ingredientes: ");
        scanf("%d", &receitas[i].qtdIngredientes);
        fflush(stdin);

        for (j = 0; j < receitas[i].qtdIngredientes; j++){

            printf("\nIngrediente %d\n", j+1);
            printf("Nome: ");
            fgets(receitas[i].ingredientes[j].nome, 25, stdin);
            printf("Quantidade: ");
            scanf("%d", &receitas[i].ingredientes[j].qtd);
            fflush(stdin);
        }
    }

    printf("\n\nDigite o nome da receita que deseja procurar: ");
    fgets(receita, 25, stdin);

    do {

        for (i = 0; i < 5; i++){

            if (strcmp(receita, receitas[i].nome) == 0){

                printf("\n\nReceita: %s", receitas[i].nome);
                printf("Ingredientes: \n");

                for (j = 0; j < receitas[i].qtdIngredientes; j++){

                    printf("%d - %s", receitas[i].ingredientes[j].qtd, receitas[i].ingredientes[j].nome);

                }
            }
        }
        
        printf("\n\nDigite o nome da receita que deseja procurar: ");
        fgets(receita, 25, stdin);

    } while (strcmp(receita, "\n") != 0);

    return 0;
}