/* 17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico. */

#include <stdio.h>


int main(){

    int anos, chico, ze;

    chico = 150;
    ze = 110;
    anos = 0;

    while (chico >= ze){

        chico += 2;
        ze += 3;
        anos++;

    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico.", anos);
    return 0;

}