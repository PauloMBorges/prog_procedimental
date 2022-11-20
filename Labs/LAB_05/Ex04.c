/* 4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado 
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de 
outro número inteiro. Ex.: 1, 4, 9... */

#include <stdio.h>
#include <math.h>

int QuadradoPerfeito (int x){
    int y = sqrt(x);
    if (y*y == x) return 1;
    else return 0;
}

int main(){
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);

    y = QuadradoPerfeito(x);

    if (y == 1) printf("O numero eh um quadrado perfeito");
    else printf("O numero nao eh um quadrado perfeito");

    return 0;
}