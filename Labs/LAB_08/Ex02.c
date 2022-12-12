/* 2. Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
} Dados;

int main(){
    Dados pessoa;

    printf("Digite o nome da pessoa: ");
    fgets(pessoa.nome, 50, stdin);

    setbuf(stdin, NULL);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    setbuf(stdin, NULL);

    printf("Digite o endereco da pessoa: ");
    fgets(pessoa.endereco, 50, stdin);
    
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d anos \n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);
    return 0;
}