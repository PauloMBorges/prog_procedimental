/* 1. Faça um programa que receba dois números e mostre qual deles é o maior. */


#include <stdio.h>

int main(){

    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("%.2f", n1);
    }
    
    else{
        printf("%.2f", n2);
    }

    return 0;
}

