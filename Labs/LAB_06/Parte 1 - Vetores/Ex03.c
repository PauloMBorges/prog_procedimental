/* 3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na 
ordem inversa. */

#include <stdio.h>

int main(){

    int A[6];

    printf("Digite os valores inteiros: \n");
    for (int i = 0; i < 6; i++){
        printf("%do valor: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nValores lidos na ordem inversa: \n");
    for (int i = 5; i >= 0; i--){
        printf("%d ", A[i]);
    }
    
    return 0;
    
}