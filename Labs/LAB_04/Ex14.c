/* 14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como 
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento. */

#include <stdio.h>
#include <time.h>

int main(){

    int d1, d2, n, i;

    srand(time(NULL));

    printf("Numero de vezes que os dados serao lancados: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() & 6;

        printf("\nDado 1: %d\n", d1);
        printf("Dado 2: %d\n", d2);

        if (d1 > d2) printf("%do Lancamento: %d > %d\nO primeiro dado eh maior\n", i, d1, d2);
        else if (d1 < d2) printf("%do Lancamento: %d < %d\nO segundo dado eh maior\n", i, d1, d2);
        else printf("%do Lancamento: %d = %d\nOs dados possuem o mesmo valor\n", i, d1, d2); 
    }

    return 0;
}