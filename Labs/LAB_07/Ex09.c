/* 9. Faça um programa que preencha uma matriz de string  com os modelos de cinco carros 
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo 
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.  
Calcule e mostre: 
(a) O modelo de carro mais econômico; 
(b) Quantos litros de combustível cada um dos carros cadastrados consome para 
percorrer uma distância de 1.000 quilômetros. */

#include <stdio.h>
#include <string.h>

int main(){

    char carros[5][64], carroMaisEconomico[64]; 
    float consumo[5], maisEconomico; 
    int i, j, i_maisEconomico; 

    for (i = 0; i < 5; i++){

        printf("Digite o modelo do %do carro: ", i+1);
        fgets(carros[i], 64, stdin);
        printf("Digite o consumo do %do carro (km/l): ", i+1);  // quantos km faz com 1 L
        scanf("%f", &consumo[i]);   // consumo[i] = km em 1 L
        setbuf(stdin, NULL);    

    }

    maisEconomico = 0;       // o mais economico vai ser o que faz MAIS km com 1 L

    for (i = 0; i < 5; i++){

        if (consumo[i] > maisEconomico){    // se faz mais km com 1 L...
            maisEconomico = consumo[i];    // ... entao o mais economico eh esse
            i_maisEconomico = i;          // guarda a posicao do mais economico
        }

    }

    strcpy(carroMaisEconomico, carros[i_maisEconomico]); // copia o modelo do mais economico

    printf("O carro mais economico eh: %s", carroMaisEconomico); 


    for (i = 0; i < 5; i++){
        printf("\n%do Modelo: %s", i+1, carros[i]); // escreve todos os modelos
        printf("Consumo (1000 km): %.2f litros\n", 1000 / consumo[i]); // escreve o consumo dos carros
    }

    return 0;
}