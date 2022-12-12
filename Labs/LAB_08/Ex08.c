/* 8. Faca um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionario de uma empresa,
compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string
de ate 30 caracteres) e Salario. Os dados devem ser digitados pelo usuario, armazenados na estrutura e exibidos na tela. */

#include <stdio.h>
#include <string.h>

typedef struct {
    int dia, mes, ano;
} DataNascimento;

typedef struct {
    char Nome[50];
    int Idade;
    char Sexo;
    char CPF[13];
    DataNascimento data;
    int CodigoSetor;
    char Cargo[30];
    float Salario;
} Funcionario;

int main(){

    Funcionario funcionario;

    printf("Digite seu nome: ");
    fgets(funcionario.Nome, 50, stdin);
    setbuf(stdin, NULL);
    printf("Digite sua idade: ");
    scanf("%d", &funcionario.Idade);
    printf("Digite seu sexo: ");
    scanf(" %c", &funcionario.Sexo);
    setbuf(stdin, NULL);
    printf("Digite seu CPF (apenas numeros): ");
    fgets(funcionario.CPF, 13, stdin);
    printf("Digite sua data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &funcionario.data.dia, &funcionario.data.mes, &funcionario.data.ano);
    printf("Digite o codigo do setor (0-99): ");
    scanf("%d", &funcionario.CodigoSetor);
    setbuf(stdin, NULL);
    printf("Digite seu cargo: ");
    fgets(funcionario.Cargo, 30, stdin);
    
    printf("Digite seu salario (apenas numeros): ");
    scanf("%f", &funcionario.Salario);
    
    printf("\nDados:\n");
    printf("Nome: %s", funcionario.Nome);
    printf("Idade: %d\n", funcionario.Idade);
    printf("Sexo: %c\n", funcionario.Sexo);
    printf("CPF: %s", funcionario.CPF);
    printf("Data de nascimento: %d/%d/%d\n", funcionario.data.dia, funcionario.data.mes, funcionario.data.ano);
    printf("Codigo do setor: %d\n", funcionario.CodigoSetor);
    printf("Cargo: %s", funcionario.Cargo);
    printf("Salario: %.2f\n", funcionario.Salario);

    return 0;
}

