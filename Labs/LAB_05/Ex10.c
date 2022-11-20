/* 10. Faça uma função que receba dois números e retorne qual deles é o maior. */

#include <stdio.h>

void Maior(float x, float y);

int main(){
    float x, y;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    Maior(x, y);

    return 0;
}

void Maior(float x, float y){
    if (x > y) printf("%.2f eh o maior", x);
    else if (x < y) printf("%.2f eh o maior", y);
    else printf("Os numeros sao iguais");
}