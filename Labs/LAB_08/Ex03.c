/* 3. Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario
a informacao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    char curso[50];
} aluno;

int main(){
    aluno alunos[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o nome do %do aluno: ", i+1);
        fgets(alunos[i].nome, 50, stdin );
        printf("Digite o numero de matricula do %do aluno: ", i+1);
        scanf("%d", &alunos[i].matricula);
        setbuf(stdin, NULL);
        printf("Digite o curso do %do aluno: ", i+1);
        fgets(alunos[i].curso, 50, stdin);

    }

    for (i = 0; i < 5; i++){
        printf("\n%do aluno:\n", i+1);
        printf("Nome: %s", alunos[i].nome);
        printf("Numero de matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
    }

    return 0;
}