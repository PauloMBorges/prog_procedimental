/* 11. Faça um programa que seja uma agenda de compromissos e: 
- Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e 
data. A data deve ser outra estrutura de dados contendo dia, mês e ano; 
- Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o 
procedimento até ler M = 0. */

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char compromisso[60];
    Data data;
} Compromisso;

int main(){

    Compromisso compromissos[5];
    int i, mes, ano;

    printf("\nMes e ano: ");
    scanf("%d %d", &mes, &ano);
    fflush(stdin);

    do{
        for (i = 0; i < 5; i++){

            printf("\nCompromisso %d\n", i+1);
            printf("Compromisso: ");
            gets(compromissos[i].compromisso);
            printf("Dia: ");
            scanf("%d", &compromissos[i].data.dia);
            printf("Mes: ");
            scanf("%d", &compromissos[i].data.mes);
            printf("Ano: ");
            scanf("%d", &compromissos[i].data.ano);
            fflush(stdin);

        }

        for(i = 0; i < 5; i++){

            if (mes == compromissos[i].data.mes && ano == compromissos[i].data.ano){
                printf("\n%s\n", compromissos[i].compromisso);
                printf("%d\n", compromissos[i].data.dia);
                printf("%d\n", compromissos[i].data.mes);
                printf("%d\n", compromissos[i].data.ano);

            }

        }

        printf("\nMes e ano: ");
        scanf("%d %d", &mes, &ano);
        fflush(stdin);
        
    } while (mes != 0);

    return 0;

}

