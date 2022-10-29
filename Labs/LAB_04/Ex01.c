/* 1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando 
números maiores que 0. */

#include <stdio.h>

int main(){
    // 3, 6, 9, 15, 18
    int n;
    
    n = 3;
    while (n <= 18){
        printf("%d\n", n);
        n +=3;
    }

    return 0;
}