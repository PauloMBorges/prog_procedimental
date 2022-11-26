/* 8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um 
menu de opções: 
a) somar as duas matrizes 
b) subtrair a primeira matriz da segunda 
c) adicionar uma constante às duas matrizes 
d) imprimir as matrizes */

#include <stdio.h>

int main(){

    float A[2][2], B[2][2], Soma[2][2], Diferenca[2][2], constante;
    int i, j;
    char op;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Digite o valor de A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Digite o valor de B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    printf("\nMenu de opcoes\n");
    printf("a) somar as duas matrizes\n");
    printf("b) subtrair a primeira matriz da segunda\n");
    printf("c) adicionar uma constante aas duas matrizes\n");
    printf("d) imprimir as matrizes");
    printf("\nOpcao: ");
    scanf(" %c", &op);

    switch(op){

        case 'a':
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    Soma[i][j] = A[i][j] + B[i][j];
                }
            }

            printf("\nSoma das matrizes\n");
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    printf("%5.2f ", Soma[i][j]);
                }
            printf("\n");
            }
            break;

        case 'b':
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    Diferenca[i][j] = A[i][j] - B[i][j];
                }
            }

            printf("\nDiferenca das matrizes\n");
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    printf("%5.2f ", Diferenca[i][j]);
                }
            printf("\n");
            }
            break;

        case 'c':
            printf("\nDigite o valor da constante: ");
            scanf("%f", &constante);

            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    A[i][j] = A[i][j] + constante;
                    B[i][j] = B[i][j] + constante;
                }
            }

            printf("\nMatrizes com a constante %.2f adicionada\n", constante);
            printf("\nMatriz A\n");
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    printf("%5.2f ", A[i][j]);
                }
            printf("\n");
            }

            printf("\nMatriz B\n");
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    printf("%5.2f ", B[i][j]);
                }
            printf("\n");
            }
            break;

        case 'd':
            printf("\nMatriz A\n");
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    printf("%5.2f ", A[i][j]);
                }
            printf("\n");
            }

            printf("\nMatriz B\n");
            for (i = 0; i < 2; i++){
                for (j = 0; j < 2; j++){
                    printf("%5.2f ", B[i][j]);
                }
            printf("\n");
            }
            break;
        
        default:
            printf("\nOpcao invalida\n");
            break;
    }
    return 0;
}