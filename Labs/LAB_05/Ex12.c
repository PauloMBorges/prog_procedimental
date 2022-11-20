/* 12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de 
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). 
Se o número lido não for maior do que zero, o programa terminará com a mensagem 
“Número inválido”. */

#include <stdio.h>

void SomaAlgarismos(int x);

int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    if (x <= 0) printf("O numero deve ser maior que zero");
    else SomaAlgarismos(x);

    return 0;
}

void SomaAlgarismos(int x){
    int soma = 0, algarismo;
    while (x > 0){
        algarismo = x % 10;
        soma = soma + algarismo;
        x = x / 10;
    }
    printf("A soma dos algarismos eh %d", soma);
}

   