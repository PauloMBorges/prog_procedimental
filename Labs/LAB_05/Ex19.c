/* 19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!. */

#include <stdio.h>

int Fatorial(int x){
    if (x == 0) return 1;
    else return (x * Fatorial (x - 1));
}

int main(){
    int x, fat;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);

    fat = Fatorial(x);

    printf("O fatorial do numero eh %d", fat);

    return 0;
}