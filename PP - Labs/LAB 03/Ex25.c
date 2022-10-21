/* 25. Calcule as raízes da equação de 2º grau. 

x = (-b +- sqrt(delta)) / 2*a
delta = b*b - 4*a*c
ax*x + b*x + c = 0

A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é 
equação de segundo grau”. 
- Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”. 
- Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”. 
- Se delta >= 0, imprima as duas raízes reais. */


#include <stdio.h>

int main(){

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0){
        printf("Nao eh equacao de segundo grau");
    }
    else{
        delta = b*b - (4*a*c);
        if (delta < 0){
            printf("Nao existe raiz");
        }
        else if (delta == 0){
            printf("A raiz unica eh: %f", (-b / (2*a)));
        }
        else{
            x1 = (-b + sqrt(delta))/ (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("As raizes sao: %f %f", x1, x2);
        }

    }

    return 0;
}