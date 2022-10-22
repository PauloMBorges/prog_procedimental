/* Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos. */

#include <stdio.h>

int main(){
    int segundos, horas, minutos, segundos_restantes;
    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos_restantes = segundos - horas*3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes - minutos*60;
    printf("%d segundos equivale a %d horas, %d minutos e %d segundos", segundos, horas, minutos, segundos_restantes);
    return 0;

}