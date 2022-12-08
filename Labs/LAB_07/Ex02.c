/* 2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo: 
“0011001” -> 3 */

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++){
        if (str[i] == '1') count++; 
    }

    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') str[len-1] = '\0';

    printf("%s -> %d", str, count);

    return 0;
}