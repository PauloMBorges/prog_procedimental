/*  Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em 
dólares. */

#include <stdio.h>
int main(){
    float real, cotacao, dolar;
    printf("Digite o valor em real: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
    dolar = real / cotacao;
    printf("O valor em dolares eh %.2f", dolar);
    return 0;
}