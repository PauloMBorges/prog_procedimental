/* 17. Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com os tipos 
básicos necessários e implementar o que se pede. 

O Cadastro é composto de: 
Nome        Endereço   Salário 
Identidade  CPF        Estado Civil 
Telefone    Idade      Sexo 

O Endereço é composto de: 
Rua         Bairro     Cidade 
Estado      CEP 

a) Crie um vetor Cadastro com 5 elementos; 
b) Permita ao usuário entrar com dados para preencher esses 5 cadastros; 
c) Encontre a pessoa com maior idade entre os cadastrados; 
d) Encontre as pessoas do sexo masculino; 
e) Encontre as pessoas com salario maior que 1000; 
f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo 
usuário. */

#include <stdio.h>

typedef struct {
    char rua[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char cep[50];
} Endereco;

typedef struct {
    char nome[50];
    Endereco end;
    float salario;
    char id[50];
    char cpf[50];
    char estadoCivil[50];
    char telefone[50];
    int idade;
    char sexo;
} Cadastro;

int main(){

    Cadastro cadastros[5];
    int i, maiorIdade = 0, posMaiorIdade = 0;

    for (i = 0; i < 5; i++){

        printf("\n\nCadastro %d\n" , i+1);
        printf("Nome: ");
        scanf("%s", cadastros[i].nome);
        printf("Rua: ");
        scanf("%s", cadastros[i].end.rua);
        printf("Bairro: ");
        scanf("%s", cadastros[i].end.bairro);
        printf("Cidade: ");
        scanf("%s", cadastros[i].end.cidade);
        printf("Estado: ");
        scanf("%s", cadastros[i].end.estado);
        printf("CEP: ");
        scanf("%s", cadastros[i].end.cep);
        printf("Salario: ");
        scanf("%f", &cadastros[i].salario);
        printf("Identidade: ");
        scanf("%s", cadastros[i].id);
        printf("CPF: ");
        scanf("%s", cadastros[i].cpf);
        printf("Estado Civil: ");
        scanf("%s", cadastros[i].estadoCivil);
        printf("Telefone: ");
        scanf("%s", cadastros[i].telefone);
        printf("Idade: ");
        scanf("%d", &cadastros[i].idade);
        printf("Sexo: ");
        scanf(" %c", &cadastros[i].sexo);
        
    }

    // Encontrar a pessoa com maior idade entre os cadastrados
    for (i = 0; i < 5; i++){
        if (cadastros[i].idade > maiorIdade){
            maiorIdade = cadastros[i].idade;
            posMaiorIdade = i;
        }
    }
    printf("\n\nPessoa com maior idade: %s\n", cadastros[posMaiorIdade].nome);

    // Encontrar as pessoas do sexo masculino
    printf("\n\nPessoas do sexo masculino: ");
    for (i = 0; i < 5; i++){
        if (cadastros[i].sexo == 'M'){
            printf("%s ", cadastros[i].nome);
        }
    }

    // Encontrar as pessoas com salario maior que 1000
    printf("\n\nPessoas com salario maior que 1000: ");
    for (i = 0; i < 5; i++){
        if (cadastros[i].salario > 1000){
            printf("%s ", cadastros[i].nome);
        }
    }

    // Imprimir os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário
    char id[50];
    printf("\n\nDigite a identidade da pessoa: ");
    scanf("%s", id);

    for (i = 0; i < 5; i++){
        if (strcmp(cadastros[i].id, id) == 0){
            printf("\n\nNome: %s", cadastros[i].nome);
            printf("\nRua: %s", cadastros[i].end.rua);
            printf("\nBairro: %s", cadastros[i].end.bairro);
            printf("\nCidade: %s", cadastros[i].end.cidade);
            printf("\nEstado: %s", cadastros[i].end.estado);
            printf("\nCEP: %s", cadastros[i].end.cep);
            printf("\nSalario: %.2f", cadastros[i].salario);
            printf("\nIdentidade: %s", cadastros[i].id);
            printf("\nCPF: %s", cadastros[i].cpf);
            printf("\nEstado Civil: %s", cadastros[i].estadoCivil);
            printf("\nTelefone: %s", cadastros[i].telefone);
            printf("\nIdade: %d", cadastros[i].idade);
            printf("\nSexo: %c", cadastros[i].sexo);
        }
    }

    return 0;

}
