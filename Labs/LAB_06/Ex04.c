/* 4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram 
o maior e o menor valor. 
*/

#include <stdio.h>

int main(){

    int A[5], maior, menor, i;

    for (i = 0; i < 5; i++){
        printf("%do valor: ", i + 1);
        scanf("%d", &A[i]);
    }

    maior = A[0];
    menor = A[0];

    for (i = 0; i < 5; i++){

        if (A[i] > maior){
            maior = i;
        }
        else if (A[i] < menor){
            menor = i;
        }
    }

    printf("Posicao do maior valor: %d\n", maior);
    printf("Posicao do menor valor: %d\n", menor);

    return 0;
}