/* 14. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos) 
e A = 5 (aeroportos) e: 
-  Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de 
origem e um de destino; 
-  Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade 
de voos que saem e quantidade de voos que chegam. 
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite 
aeroportos de código inexistente. 
*/

#include <stdio.h>

typedef struct {
    int codigo;
    int qtdSai;
    int qtdChega;
} Aeroporto;

typedef struct {
    int codigoOrigem;
    int codigoDestino;
} Voo;

int main(){

    Aeroporto aeroportos[5];
    Voo voos[5];
    int i, j, codigo, qtdSai, qtdChega;

    for (i = 0; i < 5; i++){

        printf("\nAeroporto %d\n", i+1);
        printf("Codigo: ");
        scanf("%d", &aeroportos[i].codigo);
        printf("Quantidade de voos que saem: ");
        scanf("%d", &aeroportos[i].qtdSai);
        printf("Quantidade de voos que chegam: ");
        scanf("%d", &aeroportos[i].qtdChega);

    }

    for (i = 0; i < 5; i++){

        printf("\nVoo %d\n", i+1);
        printf("Codigo de origem: ");
        scanf("%d", &voos[i].codigoOrigem);
        printf("Codigo de destino: ");
        scanf("%d", &voos[i].codigoDestino);

    }

    for (i = 0; i < 5; i++){

        for (j = 0; j < 5; j++){

            if (voos[i].codigoOrigem == aeroportos[j].codigo){
                aeroportos[j].qtdSai++;
            }

            if (voos[i].codigoDestino == aeroportos[j].codigo){
                aeroportos[j].qtdChega++;
            }

        }

    }

    for (i = 0; i < 5; i++){

        printf("\nAeroporto %d\n", i+1);
        printf("Codigo: %d ", aeroportos[i].codigo);

        printf("Quantidade de voos que saem: %d ", aeroportos[i].qtdSai);
        printf("Quantidade de voos que chegam: %d ", aeroportos[i].qtdChega);

    }

    return 0;
}