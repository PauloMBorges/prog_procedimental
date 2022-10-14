/* Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela 
ASCII para resolver o problema. */

#include <stdio.h>

int main(){
    char letra, letra_min;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);
    letra_min = letra + 32;
    printf("A letra minuscula eh %c", letra_min);
    return 0;
}