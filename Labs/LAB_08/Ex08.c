/* 8. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe 
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores, 
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos 
jogadores recebeu. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definindo a estrutura Carta
typedef struct {
    char naipe[8];
    char valor[50];
} Carta;

// Função para inicializar o baralho
void inicializaBaralho(Carta baralho[52]){
    int i, j;
    char naipes[8][8] = {"Ouro", "Paus", "Espadas", "Copas"};
    char valores[13][50] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
    for (i = 0; i < 4; i++){
        for (j = 0; j < 13; j++){
            strcpy(baralho[i*13+j].naipe, naipes[i]);
            strcpy(baralho[i*13+j].valor, valores[j]);
        }
    }
}

// Função para embaralhar o baralho
void embaralhaBaralho(Carta baralho[52]){
    int i, j;
    Carta aux;
    srand(time(NULL));
    for (i = 0; i < 52; i++){
        j = rand() % 52;
        aux = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = aux;
    }
}

int main(){
    
        Carta baralho[52];
        Carta jogador1[3];
        Carta jogador2[3];
        int i;
    
        inicializaBaralho(baralho);
        embaralhaBaralho(baralho);

        for (i = 0; i < 3; i++){
            jogador1[i] = baralho[i];
            jogador2[i] = baralho[i+3];
        }

        printf("Jogador 1:\n");
        for (i = 0; i < 3; i++){
            printf("%s de %s \n", jogador1[i].valor, jogador1[i].naipe);
        }
        printf("\n");

        printf("Jogador 2:\n");
        for (i = 0; i < 3; i++){
            printf("%s de %s \n", jogador2[i].valor, jogador2[i].naipe);
        }
        printf("\n");

        return 0;
}
