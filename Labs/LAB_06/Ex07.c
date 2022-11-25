/* 7. Faça um programa que receba 6 números inteiros e mostre: 
- Os números pares digitados; 
- A soma dos números pares digitados; 
- Os números ímpares digitados; 
- A quantidade de números ímpares digitados; */

#include <stdio.h>

int main(){

    int A[6], i, soma = 0, qtd = 0;

    for(i = 0; i < 6; i++){
        printf("%do numero: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Numeros pares: ");
    for (i = 0; i < 6; i++){
        if (A[i] % 2 == 0){
            printf("%d ", A[i]);
            soma += A[i];
        }
    }

    printf("\nNumeros impares: ");
    for (i = 0; i < 6; i++){
        if (A[i] % 2 != 0){
            printf("%d ", A[i]);
            qtd++;
        }
    }

    printf("\nA soma dos numeros pares eh %d \n", soma);
    printf("A quantidade de numeros impares eh %d \n", qtd);

    return 0;
}
