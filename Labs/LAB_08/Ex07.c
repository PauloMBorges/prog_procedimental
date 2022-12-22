/* 7. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e 
telefone de 5 pessoas e os imprima em ordem alfabética. */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char end[50];
    int tel;
} Pessoa;

int main(){

    Pessoa pessoas[5];
    int i;

    for (i = 0; i < 5; i++){

        printf("%do nome: ", i+1);
        fgets(pessoas[i].nome, 50, stdin);
        printf("%do endereco: ", i+1);
        fgets(pessoas[i].end, 50, stdin);
        printf("%do telefone: ", i+1);
        scanf("%d", &pessoas[i].tel);
        setbuf(stdin, NULL);
        printf("\n");   
        
    }

    // Ordenando os nomes (Bubble Sort)
    int j;
    char aux[50];
    for (i = 0; i < 5; i++){
        for (j = i+1; j < 5; j++){
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0){
                strcpy(aux, pessoas[i].nome);
                strcpy(pessoas[i].nome, pessoas[j].nome);
                strcpy(pessoas[j].nome, aux);
            }
        }
    }

    for (i = 0; i < 5; i++){
        printf("%do nome: %s", i+1, pessoas[i].nome);
        printf("%do endereco: %s", i+1, pessoas[i].end);
        printf("%do telefone: %d \n", i+1, pessoas[i].tel);
    }

    return 0;
}