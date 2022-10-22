/* Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em 
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, 
minuto e segundo) do termino da mesma. */

#include <stdio.h>

int main(){
    int hora, minuto, segundo, duracao, segundos_total, segundos_resto;
    printf("Digite o inicio em hora, minuto e segundo: ");
    scanf("%d%d%d", &hora, &minuto, &segundo);
    printf("Digite a duracao da experiencia em segundos: ");
    scanf("%d", &duracao);

    hora = hora * 3600;
    minuto = minuto * 60;
    segundos_total = hora + minuto + segundo + duracao;

    hora = segundos_total / 3600;
    segundos_resto = segundos_total - hora * 3600;
    minuto = segundos_resto / 60;
    segundos_resto = segundos_resto - minuto * 60;
    
    printf("O novo horario eh %d horas, %d minutos e %d segundos", hora, minuto, segundos_resto);

}