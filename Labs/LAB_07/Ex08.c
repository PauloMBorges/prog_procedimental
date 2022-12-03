/* 8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em 
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário. */

#include <stdio.h>
#include <string.h>

int main(){

    char letra1, letra2, str[128];

    printf("Digite a primeira letra: ");
    scanf("%c", &letra1);
    printf("Digite a segunda letra: ");
    scanf(" %c", &letra2);
    setbuf(stdin, NULL);
    printf("Digite a frase: ");
    fgets(str, 128, stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++){
        if (str[i] == letra1){
            str[i] = letra2;
        }
    }

    printf("Nova frase: %s", str);

    return 0;
}