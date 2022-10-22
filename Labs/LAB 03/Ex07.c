/* 7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números 
forem iguais, imprima a mensagem: “Números iguais” */

#include <stdio.h>

int main(){

    float n1, n2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    if (n1 == n2){
        printf("Os numeros sao iguais");
    }

    else{
        if (n1 > n2){
            printf("O maior numero eh %.2f", n1);
        }
        else{
            printf("O maior numero eh %.2f", n2);
        }
    }

    return 0;
}