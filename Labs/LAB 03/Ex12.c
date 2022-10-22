/* 12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número 
inválido”. Se o número for positivo, calcular o logaritmo deste número. */

#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Numero invalido");
    }
    
    else{
      printf("O logartimo do numero eh %.2f", log10(n));  
    }

    return 0;
}