#include <stdio.h>

int main (){

    char ch;
    int n, i, j;

    printf("Digite um caractere: \n");
    scanf("%c", &ch);
    printf("Digite o numero de vezes e de linhas: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            printf("%c ", ch);
        }
    printf("\n");
    }

    return 0;
}