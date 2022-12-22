/* 9. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), 
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor 
que p. Repita este processo até que seja lido um valor p = 0. */

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

typedef struct {
    char marca[15];
    int ano;
    float preco;
} Carro;

int main(){

    Carro carros[5];
    float p;
    int i;

    printf("\nDigite um valor p: ");
    scanf("%f", &p);
    do{
        for (i = 0; i < 5; i++){
            printf("\n%do carro\n", i+1);
            printf("Marca: ");
            scanf("%s", &carros[i].marca);
            printf("Ano: ");
            scanf("%d", &carros[i].ano);
            printf("Preco: ");
            scanf("%f", &carros[i].preco);
        }

        printf("\n\nCarros com preco menor que %.2f:\n", p);
        for (i = 0; i < 5; i++){

            if (carros[i].preco < p){
                printf("\nCarro %d\n", i+1);
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %.2f", carros[i].preco);
                printf("\n");
            }

        }

        Sleep(6000);
        system("cls");
        printf("Digite outro valor de p: ");
        scanf("%f", &p);

    } while (p != 0);

    return 0;
}