/* 15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e 
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada 
de dados com um valor negativo ou zero. */

#include <stdio.h>
#include <math.h>

int main(){

    float n;
    n = 1;

    while (n > 0){
        printf("\nFinalize o programa digitando 0\n");
        printf("Digite um numero: ");
        scanf("%f", &n);

        if (n > 0){
            printf("\nQuadrado: %.2f\n", (n * n));
            printf("Cubo: %.2f\n", (n * n * n));
            printf("Raiz quadrada: %.2f\n", sqrt(n));
        }
    }

    printf("\nPrograma finalizado");
    return 0;
}