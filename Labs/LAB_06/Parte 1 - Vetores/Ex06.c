/* 6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que 
são primos e suas respectivas posições no vetor. */

#include <stdio.h>

int main(){

    int A[10], i;

    for(i = 0; i < 10; i++){
        printf("%do numero: ", i+1);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 10; i++){
        if (A[i] == 2 || A[i] == 3 || A[i] == 5 || A[i] == 7 && A[i] != 1){
            printf("%d na posicao %d eh primo\n", A[i], i);
        }

        else if (A[i] % 2 != 0 && A[i] % 3 != 0 && A[i] % 5 != 0 && A[i] % 7 != 0 && A[i] != 1){
            printf("%d na posicao %d eh primo\n", A[i], i);
        }
    } 
    
    return 0;
}
