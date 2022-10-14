// Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main()
{
    int n1, n2, n3, n;
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    n = n1 + n2 + n3;
    printf("A soma eh %d", n);
    return 0;

}