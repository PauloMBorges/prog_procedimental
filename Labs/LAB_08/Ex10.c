/* 10. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor 
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título 
deseja buscar. Mostre os dados de todos os livros encontrados. */

#include <stdio.h>

typedef struct {
    char titulo[30];
    char autor[15];
    int ano;
} Livro;

int main(){

    Livro livros[5];
    int i;
    char tituloLivro[30];

    for (i = 0; i < 5; i++){

        printf("\nLivro %d\n", i+1);
        printf("Titulo: ");
        gets(livros[i].titulo);
        printf("Autor: ");
        gets(livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        fflush(stdin);

    }

    printf("\nTitulo que deseja: ");
    gets(tituloLivro);

    for(i = 0; i < 5; i++){

        if (strcmp(tituloLivro, livros[i].titulo) == 0){
            printf("\n%s\n", livros[i].titulo);
            printf("%s\n", livros[i].autor);
            printf("%d\n", livros[i].ano);

        }

    }

    return 0;

}