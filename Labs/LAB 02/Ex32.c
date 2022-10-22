/* Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu 
dobro. */

#include <stdio.h>
int main(){
    int n, s3, a2, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    s3 = n*3 + 1;
    a2 = n*2 - 1;
    soma = s3 + a2;
    printf("A soma eh %d", soma);
    return 0;
}