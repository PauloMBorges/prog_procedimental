/* 9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números 
naturais ímpares. */

#include <stdio.h>

int main(){

    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("\n%d primeiros numeros naturais impares: \n\n", n);

    i = 0;
    // impar = (n % 2 != 0)

    while (i < (n * 2)){        // (n * 2) porque a cada 10 números 5 são ímpares
        if (i % 2 != 0){
            printf("%d ", i);
            i = i + 1;
        }
        else{
            i = i + 1;
        }
    }


    return 0;
}