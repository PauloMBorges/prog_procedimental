/* 3. Faça um programa que receba uma palavra e a imprima de trás-para-frente. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[64];

    printf("Digite uma palavra: ");
    fgets(str, 64, stdin);

    for (int i = strlen(str); i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
}