/* 2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez 
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while. */

#include <stdio.h>

int main(){

    printf("\nFor: \n\n");
    int i;
    for (i = 1; i <= 100; i++){
        printf("%d ", i);
    }

    printf("\nWhile: \n\n");
    i = 1;
    while (i <= 100){
        printf("%d ", i);
        i += 1;
    }

    printf("\nDo-while: \n\n");
    i = 1;
    do{
        printf("%d ", i);
        i += 1;
    } while (i <= 100);

    return 0;
}