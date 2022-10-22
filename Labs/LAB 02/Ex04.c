// Leia um número real e imprima o resultado do quadrado desse número. 

#include <stdio.h>

int main()
{
    float n, q;
    printf("Digite um numero: ");
    scanf("%f", &n);
    q = n * n;
    printf("O quadrado do numero eh %.2f", q);

    return 0;

}