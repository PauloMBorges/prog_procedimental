/* Leia um número inteiro e imprima o seu antecessor e o seu sucessor */

#include <stdio.h>
int main(){
    int n, a, s;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    a = n - 1;
    s = n + 1;
    printf("O antecessor do numero eh %d e o sucessor eh %d", a, s);
    return 0;
}