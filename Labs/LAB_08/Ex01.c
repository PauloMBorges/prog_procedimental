/* 1. Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados conforme
solicitado abaixo:
• Horario: composto de hora, minutos e segundos.
• Data: composto de dia, mes e ano.
• Compromisso: composto de uma data, horario e texto que descreve o compromisso. */

#include <stdio.h>

typedef struct{
    int hora;
    int minuto;
    int segundo;
} Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    Data data;
    Horario horario;
    char texto[100];
} Compromisso;
