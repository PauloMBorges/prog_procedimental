/* 20. Escreva uma função para determinar a quantidade de números primos abaixo de N. */

#include <stdio.h>

int EhPrimo (int N){
    int i;

    if (N <= 1) return 0;               // 0 e 1 não são primos

    for (i = 2; i * i <= N; i++){      // checa se o número N tem algum divisor
        if (N % i == 0) return 0;     //  se tiver, não é primo
    }

    return 1;                       // se não tiver, é primo
}

int ContaPrimo (int N){
    int i, contador = 0;

    for (i = 2; i < N; i++){     // checa do 2 (primeiro primo) até N - 1
        if (EhPrimo(i) == 1){   // se o numero for primo
            contador++;        // adiciona 1 no contador
        }   
    }

    return contador;
}

int main(){
    int N, quantidade;
    printf("Digite um numero ");
    scanf("%d", &N);

    quantidade = ContaPrimo(N);

    printf("A quantidade de numeros primos abaixo de %d eh %d", N, quantidade);

    return 0;
 
}