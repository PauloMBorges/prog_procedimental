/* 3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima 
o número ao quadrado. */

#include <stdio.h>

int main(){

    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0){
        n = sqrt(n);
        printf("%.2f", n);
    }
    else{
        n *= n;
        printf("%.2f", n);
    }

    return 0;
}