/* 15. Faça um programa que contenha um menu com as seguintes opções: 
(a) Ler uma string S1 (tamanho máximo 20 caracteres); 
(b) Imprimir o tamanho da string S1; 
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o 
resultado da comparação; 
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da 
concatenação; 
(e) Imprimir a string S1 de forma reversa; 
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse 
ser informado pelo usuário; 
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os 
caracteres C1 e C2 serão lidos pelo usuário; 
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo 
usuário; 
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual 
posição deve ser criada a substring e qual é o tamanho da substring. */

#include <stdio.h>
#include <string.h>

int main(){

    char S1[20], S2[128], op, C1, C2;

    do{
        printf("\n(a) Ler uma string S1 (tamanho maximo 20 caracteres) \n");
        printf("(b) Imprimir o tamanho da string S1\n");
        printf("(c) Comparar a string S1 com uma nova string S2\n");
        printf("(d) Concatenar a string S1 com uma nova string S2\n");
        printf("(e) Imprimir a string S1 de forma reversa\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
        printf("(h) Verificar se uma string S2 eh substring de S1\n");
        printf("(i) Retornar uma substring da string S1 (a partir de pos e tam)\n");
        printf("(j) Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &op);
        printf("\n");
    
        switch (op){
            case 'a':
                printf("Digite a string S1: ");
                scanf("%s", S1);
                break;

            case 'b':
                int len = strlen(S1);
                printf("O tamanho da string S1 eh: %d \n", len);
                break;

            case 'c':
                printf("Digite a string S2: ");
                scanf("%s", S2);
                int compara = strcmp(S1, S2);
                if (compara == 0) printf("Strings iguais \n");
                else printf("Strings diferentes \n");
                break;

            case 'd':
                printf("Digite a nova string S2: ");
                scanf("%s", S2);
                printf("String concatenada: %s \n", strcat(S1, S2));
                break;

            case 'e':
                for (int i = strlen(S1) - 1; i >= 0; i--){
                    printf("%c", S1[i]);
                }
                printf("\n");
                break;

            case 'f':
                printf("Digite um caractere: ");
                scanf(" %c", &C1);
                int contador = 0;
                for (int i = 0; i < strlen(S1); i++){
                    if (S1[i] == C1){
                        contador++;
                    }
                }
                printf("O caractere \"%c\" aparece %d vezes na string \n", C1, contador);
                break;

            case 'g':
                printf("Digite o primeiro caractere: ");
                scanf(" %c", &C1);
                printf("Digite o segundo caractere: ");
                scanf(" %c", &C2);
                for (int i = 0; i < strlen(S1); i++){
                    if (S1[i] == C1){
                        S1[i] = C2;
                        break;
                    }
                }
                printf("String com caractere trocado: %s \n", S1);
                break;

            case 'h':
                printf("Digite a nova string S2: ");
                scanf("%s", S2);
                if (strstr(S1, S2) != NULL){ // strstr retorna um ponteiro para a primeira ocorrencia de S2 em S1 ou NULL se nao encontrar 
                    printf("A string S2 eh substring de S1 \n");
                }
                else{
                    printf("A string S2 nao eh substring de S1 \n");
                }
                break;

            case 'i':
                int pos, tam;
                printf("Digite a posicao: ");
                scanf("%d", &pos);
                printf("Digite o tamanho: ");
                scanf("%d", &tam);
                
                char S3[20];
                strncpy (S3, S1 + pos, tam);    // S3 recebe uma substring de S1 a partir da posicao pos e com tamanho tam
                S3[tam] = '\0';
                printf("A substring eh: %s \n", S3);
                break;

            case 'j':
                break;

            default: 
                printf("Opcao invalida");
                break;
        }
    } while (op != 'j');
    
    return 0;
}