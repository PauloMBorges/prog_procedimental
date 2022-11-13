/* 19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de 
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com 
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real. */

#include <stdio.h>

int main(){

    int saque, nota, n_notas_100, n_notas_50, n_notas_20, n_notas_10, n_notas_5, n_notas_2, n_notas_1;
    n_notas_100 = n_notas_50 = n_notas_20 = n_notas_10 = n_notas_5 = n_notas_2 = n_notas_1 = 0;

    printf("Digite o valor do saque: R$");
    scanf("%d", &saque);

    do{
        if (saque >= 100){            
            saque = saque - 100;
            n_notas_100 += 1;
        }

        else{

            if (saque >= 50){
            saque = saque - 50;
            n_notas_50 += 1;
            }

            else{

                if (saque >= 20){
                    saque = saque - 20;
                    n_notas_20 += 1;
                }

                else{

                    if (saque >= 10){
                        saque = saque - 10;
                        n_notas_10 += 1;
                    }

                    else{

                        if (saque >= 5){
                            saque = saque - 5;
                            n_notas_5 += 1;
                        }

                        else{

                            if (saque > 2){
                                saque = saque - 2;
                                n_notas_2 += 1;
                            }

                            else{

                                if (saque >= 1){
                                    saque = saque - 1;
                                    n_notas_1 += 1;
                                }
                            }
                        }
                    }
                }
            }

        }
    } while (saque > 0);

    if (n_notas_100 > 0){
        printf("%d notas de R$100\n", n_notas_100);
    }

    if (n_notas_50 > 0){
        printf("%d notas de R$50\n", n_notas_50);
    }

    if (n_notas_20 > 0){
        printf("%d notas de R$20\n", n_notas_20);
    }

    if (n_notas_10 > 0){
        printf("%d notas de R$10\n", n_notas_10);
    }

    if (n_notas_5 > 0){
        printf("%d notas de R$5\n", n_notas_5);
    }

    if (n_notas_2 > 0){
        printf("%d notas de R$2\n", n_notas_2);
    }

    if (n_notas_1 > 0){
        printf("%d notas de R$1\n", n_notas_1);
    }

    return 0;
}