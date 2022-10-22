/* Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha */

#include <stdio.h>

int main(){ 
    int n, d1, d2, d3, d4;
    printf("Digite um numero inteiro positivo de 4 digitos: ");
    scanf("%d", &n);

    printf("%d\n%d\n%d\n%d", (n/1000), (n/100%10), (n/10)%10, n%10); 
    return 0;
     
}

