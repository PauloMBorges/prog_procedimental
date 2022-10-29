/* 5. Faça um programa que peça ao usuário para digitar 10 valores e some-os. */

#include <stdio.h>

int main(){

int i;
float n, soma;
i = 0;

while (i < 10){
    printf("Digite um valor: ");
    scanf("%f", &n);
    soma = soma + n;
    i += 1;
}
    printf("Soma: %.2f", soma);
    return 0;

}