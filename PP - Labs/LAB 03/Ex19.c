/* 19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, 
mas, não simultaneamente pelos dois. */

#include <stdio.h>

int main(){
    
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0){
        printf("O numero eh divisivel por 3 e por 5");
    }
    
    else if (n % 5 == 0){
        printf("O numero eh divisivel por 5");
    }

    else if (n % 3 == 0){
        printf("O numero eh divisivel por 3");
    }

    else{
        printf("O numero nao eh divisivel nem por 3 nem por 5");
    }

    return 0;
}