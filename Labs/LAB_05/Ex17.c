/* 17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a 
soma dos N números inteiros existentes entre eles. */

#include <stdio.h>

int SomaN (int x, int y){
    int soma = 0;
    x += 1;
    for (x; x < y; x++){
        soma = soma + x;
    }
    return soma;
}

int main(){
    int x, y, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    soma = SomaN(x, y);

    printf("A soma entre os numeros existentes entre eles eh %d", soma);

    return 0;
}