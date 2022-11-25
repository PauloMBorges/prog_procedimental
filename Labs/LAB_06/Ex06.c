/* 6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que 
são primos e suas respectivas posições no vetor. */

#include <stdio.h>

int main(){

    int A[10], i;

    for(i = 0; i < 10; i++){
        printf("%do numero: ", i+1);
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 10; i++){
        if (A[i] > 2 && A[i] % 2 != 0) printf("%d na posicao %d eh primo\n", A[i], i);
    }
    
    return 0;
}
