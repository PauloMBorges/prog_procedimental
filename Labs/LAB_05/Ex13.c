/* 13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo 
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá 
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’ 
será efetuada uma divisão. */

#include <stdio.h>

float Operacao(float x, float y, char simbolo){
    float op;
    if (simbolo == '+') op = (x + y);
    else if (simbolo == '-') op = (x - y);
    else if (simbolo == '*') op = (x * y);
    else if (simbolo == '/') op = (x / y);
    else printf("Operacao invalida\n");

    return op;
}

int main(){
    float x, y, op;
    char simbolo;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);
    printf("Digite a operacao desejada [+] [-] [*] [/]: ");
    scanf(" %c", &simbolo);

    op = Operacao(x, y, simbolo);
    printf("O resultado eh %.2f", op);
    
    return 0;
}