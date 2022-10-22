/* 2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada 
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido. */

#include <stdio.h>

int main(){

    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0){
        n *= n;
        printf("A raiz do numero eh %.2f", n);
    }
    else{
        printf("O numero eh invalido");
    }

    return 0;
}