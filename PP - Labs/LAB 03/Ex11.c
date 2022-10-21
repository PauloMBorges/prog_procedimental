/* 11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a 
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem: 
“Número inválido” */

#include <stdio.h>

int main(){

    int n, soma, algarismo;
    soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n > 0){
        while (n > 0){
            algarismo = n % 10;
            soma = soma + algarismo;
            n = n / 10;
        }
    printf("A soma dos algarismos eh %d", soma);
    }

    else{
        printf("Numero invalido");
    }




   
   
   
   
    return 0;
}