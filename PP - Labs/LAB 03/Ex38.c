/* 38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia, 
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia 
fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto), 
dia  30 em abril, junho, setembro e novembro, dia <= 31 nos outros meses. Teste a validade do 
mês: mês > 0 e mês < 13. Teste a validade do ano: ano <= ano atual (use uma constante definida 
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do 
programa. */

#include <stdio.h>
#define ano_atual 2022

int main(){
    
    int dia, mes, ano, bissexto;
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    bissexto = (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 100);

    if (ano > ano_atual){
        printf("Ano invalido");
    }
    else if (mes < 0 || mes > 12){
        printf("Mes invalido");
    }
    else if (dia > 31 || dia < 1){
        printf("Dia invalido");
    }

    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia < 30){
        printf("Data valida");
        }
        else{
            printf("Dia invalido");
        }
    }

    else if (mes == 2){
        if (bissexto == 1){
            if (dia <= 29){
                printf("Data valida");
            }
            else{
                printf("Dia invalido");
            }
        }
        else{
            if (dia <= 28){
                printf("Data valida");
            }
            else{
                printf("Dia invalido");
            }
        }
    }

    else{
        printf("Data valida");
    }
    
    return 0;
}