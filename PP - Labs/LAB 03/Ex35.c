/* 35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e 
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em 
anos não bissextos */

#include <stdio.h>

int main(){

    int mes, dia, ano, bissexto;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    bissexto = (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 100);

    if (mes < 1 || mes > 12){           // checar se mês é válido
        printf("Data invalida");
    }
    else if (dia > 31 || dia < 1){       // checar se número geral de dias é válido
        printf("Data invalida");
    }

    else{
        if (mes == 2){                  // fevereiro (bissexto ou não)
            if (bissexto == 1){
                if (dia <= 29){
                    printf("Data valida");
                }
                else{
                    printf("Data invalida");

                }
            }
            else{
                if (dia <= 28){
                    printf("Data valida");
                }
                else{
                    printf("Data invalida");
                }
            }
        }

        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){       // meses com 30d
            if (dia < 30){
                printf("Data valida");
            }
            else{
                printf("Data invalida");
            }
        }

        else{                           // meses com 31 dias (maioria) - Não precisa checar dia > 31
            printf("Data valida");   
        }

        return 0;

    }

}
