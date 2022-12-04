/* 13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando 
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita 
para a esquerda como da esquerda para a direita.  
Exemplo: 
ovo 
arara 
Socorram-me, subi no ônibus em Marrocos 
Anotaram a data da maratona */

#include <stdio.h>
#include <string.h>

int main(){

    char str[128], str_original[128];
    int i, len;

    printf("Digite uma frase (sem caracteres especiais): ");
    gets(str);
    strcpy(str_original, str);

    len = strlen(str);

    // remove os espaços da string:
    for (i = 0; i < len; i++){
        if (str[i] == ' '){
            for (int j = 0; j < len; j++){
                str[j + i] = str[j + i + 1];
            }
        }
    }

    len = strlen(str); // atualiza o tamanho da string (sem espaços)

    // remove as letras maiúsculas da string:
    for (int i = 0; i < len; i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }

    len = strlen(str); // atualiza o tamanho da string (sem espaços e maiúsculas)

    // checa se str nova é palindromo:
    int palindromo = 1;
    for (i = 0; i < len; i++){
        if (str[i] != str[len - i - 1]){
            palindromo = 0;     //palindromo = falso
            break;
        }
    }

    if (palindromo){
        printf("\"%s\" eh um palindromo", str_original);
    }
    else{
        printf("\"%s\" nao eh um palindromo", str_original);
    }

    return 0;
}