/* 4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere. */

#include <stdio.h>
#include <string.h>


int main(){

    char palavra[64], vogal, caractere;
    int ContaVogais = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 64, stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    for (int i = 0; i < strlen(palavra); i++){
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            ContaVogais++;
            palavra[i] = caractere;
        }
    }

    printf("Numero de vogais: %d\n", ContaVogais);
    printf("Palavra substituida: %s", palavra);
    
    return 0;
}

