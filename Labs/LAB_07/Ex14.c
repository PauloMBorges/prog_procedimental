/* 14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. 
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’. */

#include <stdio.h>
#include <string.h>

int main(){

    char str1[128], str2[128];
    int N;

    printf("Digite a string 1: ");
    gets(str1);
    printf("Diigite a string 2: ");
    gets(str2);
    printf("Digite N: ");
    scanf("%d", &N);

    // strncat(dest, fonte, N) => dest inalterado, fonte concatenado à dest, N caracteres
    // strncat(str1, str2, N);
    
    // com strcat:
    int len1 = strlen(str1);

    for (int i = 0; i < N; i++){
        str1[len1 + i] = str2[i]; // concatena os N primeiros caracteres de str2 à str1
    }
    str1[len1 + N] = '\0'; // termina str1 com '\0'
    
    printf("%s", str1);

    return 0;
}