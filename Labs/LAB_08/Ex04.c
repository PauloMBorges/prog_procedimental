/* 4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matricula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovacao. */

#include <stdio.h>
#include <string.h>

typedef struct{
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
} Aluno;

int main(){

    Aluno alunos[5];
    int i, maiorNota = 0;

    for (i = 0; i < 5; i++){

        printf("\n%do aluno:\n", i+1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        setbuf(stdin, NULL);
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        setbuf(stdin, NULL);

        if (alunos[i].nota1 > alunos[maiorNota].nota1){
            maiorNota = i;
        }

    }

    float media = 0, maiorMedia = 0, menorMedia = 1000;
    int pos_maiorMedia, pos_menorMedia;
    for (i = 0; i < 5; i++){

        media = ((alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)) / 3.0;
        if (media > maiorMedia){
            maiorMedia = media;
            pos_maiorMedia = i;
        }
        if (media < menorMedia){
            menorMedia = media;
            pos_menorMedia = i;
        }
    }

    printf("\nMaior nota da primeira prova: %do aluno\n", maiorNota+1);
    printf("Maior media geral: %do aluno\n", pos_maiorMedia + 1);
    printf("Menor media geral: %do aluno\n", pos_menorMedia + 1);
    printf("\n");

    media = 0;
    for(i = 0; i < 5; i++){
        media = ((alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)) / 3.0;
        if (media >= 6){
            printf("%do aluno aprovado. Media: %.2f\n", i+1, media);
        }
        else{
            printf("%do aluno reprovado. Media: %.2f\n", i+1, media);
        }
    }
    return 0;
}