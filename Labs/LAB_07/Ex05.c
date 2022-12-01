/* 5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras 
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[64];

    printf("Digite uma cadeia de letras maiusculas: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++){
        str[i] += 32;
    }

    printf("%s", str);

    return 0;
}