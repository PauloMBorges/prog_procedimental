/* 12. Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e: 
- Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em 
kW) e tempo ativo por dia (real, em horas); 
- Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo 
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo. 
Apresente este último dado em porcentagem. */

#include <stdio.h>

typedef struct {
    char nome[15];
    float potencia;
    float tempoAtivo;
} Eletrodomestico;

int main(){

    Eletrodomestico eletrodomesticos[5];
    int i;
    float t, consumoTotal = 0, consumoRelativo;

    for (i = 0; i < 5; i++){

        printf("\nEletrodomestico %d\n", i+1);
        printf("Nome: ");
        gets(eletrodomesticos[i].nome);
        printf("Potencia: ");
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Tempo ativo: ");
        scanf("%f", &eletrodomesticos[i].tempoAtivo);
        fflush(stdin);

    }

    printf("\nTempo: ");
    scanf("%f", &t);
    fflush(stdin);

    for(i = 0; i < 5; i++){

        consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * t;

    }

    printf("\nConsumo total: %f\n", consumoTotal);

    for(i = 0; i < 5; i++){

        consumoRelativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * t) / consumoTotal;
        printf("%s: %f%%\n", eletrodomesticos[i].nome, consumoRelativo * 100);

    }

    return 0;
}
