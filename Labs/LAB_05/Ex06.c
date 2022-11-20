/* 6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, 
minutos e segundos, e os converta em segundos. */

#include <stdio.h>

int Tempo(int horas, int minutos, int segundos){
    int total;
    total = (horas * 3600) + (minutos * 60) + segundos;
    return total;
}

int main(){
    int horas, minutos, segundos, total;

    printf("Horas: ");
    scanf("%d", &horas);
    printf("\nMinutos: ");
    scanf("%d", &minutos);
    printf("\nSegundos: ");
    scanf("%d", &segundos);

    total = Tempo(horas, minutos, segundos);
    printf("\nO total de segundos eh %d", total);

    return 0;
}
