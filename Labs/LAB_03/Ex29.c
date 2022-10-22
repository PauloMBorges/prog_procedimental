/* 29. Faça uma prova de matemática para crianças que estão aprendendo a somar números 
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a 
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça 
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de 
quantas vezes o aluno acertou. */

#include <stdio.h>
#include <stdlib.h>         /* rand() e srand() */
#include <time.h>          /*  time()          */

int main(){

    int a, b, resultado, correto, i, questao;
    correto = 0;
    questao = 1;

    srand(time(NULL));  // randomiza a seed para a sequência de números pseudo-aleatórios

    for (i = 0; i < 5; i++){ // 5 perguntas
    
        a = rand() % 100 + 1;   // rand() % N retorna um número inteiro no intervalo fechado [0, N-1]
        b = rand() % 100 + 1;

        printf("%d) Qual a soma de %d + %d? ", questao, a, b);
        scanf("%d", &resultado);
        questao++;

        if (resultado == a + b){
            correto++;
            printf("Voce acertou!\n");
        }
        else{
            printf("Voce errou!\n");
        }
    }

    printf("\nVoce acertou %d de %d questoes.", correto, questao - 1);

    return 0;
}
    
