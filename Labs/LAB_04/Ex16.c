/* 16. Faça um programa que apresente um menu de opções para o cálculo das seguintes 
operações entre dois números: 
- Adição (opção 1) 
- Subtração (opção 2) 
- Multiplicação (opção 3) 
- Divisão (opção 4). 
- Saída (opção 5) 
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado 
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída 
(opção 5). */

#include <stdio.h>

int main(){

    int op;
    float n1, n2;

    do{
        do{
            printf("\nCalculadora\n");
            printf("1. Adicao\n");
            printf("2. Subtracao\n");
            printf("3. Multiplicacao\n");
            printf("4. Divisao\n");
            printf("5. Saida\n");

            printf("Opcao: ");
            scanf("%d", &op);

            if (op < 1 || op > 5){
                printf("Opcao invalida\n");
            }
            
            if (op >= 1 && op <= 4){
                printf("Digite o primeiro numero: ");
                scanf("%f", &n1);
                printf("Digite o segundo numero: ");
                scanf("%f", &n2);
            }

        } while (op < 1 || op > 5);

        switch (op){
            
            case 1:
                printf("A soma eh %.2f", n1 + n2);
                break;
            case 2:
                printf("A subtracao eh %.2f", n1 - n2);
                break;
            case 3:
                printf("A multiplicacao eh %.2f", n1 * n2);
                break;
            case 4:
                printf("A divisao eh %.2f", n1 / n2);
                break;
        }    

    } while (op != 5);

    return 0;
}