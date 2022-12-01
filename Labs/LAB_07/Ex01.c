/*  1. Faça um programa que leia uma string e a imprima. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("String digitada: %s", str);

    return 0;
}