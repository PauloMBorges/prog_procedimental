// Leia um número real e imprima a quinta parte deste número.

#include <stdio.h>

int main()
{
    float n, q;
    printf("Digite um numero: ");
    scanf("%f", &n);
    q = n / 5;
    printf("A quinta parte do numero eh %f", q);

    return 0;

}