/* 7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os 
espaços em branco do vetor e depois escrever o vetor resultante. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int i, j, len;

    printf("Digite uma frase: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    for (i = 0; i < len; i++){               // percorre a string
        if (str[i] == ' '){                 // se str[i] for um espaço em branco...
            for (j = i; j < len; j++){     // ...percorre a string a partir de i
                str[j] = str[j + 1];      // copia o caractere seguinte para o atual (desloca para esquerda)
            }
        }
    }

    printf("Frase sem espacos: %s", str);   // string sem espaços (lenght menor que antes)
    return 0;
}

