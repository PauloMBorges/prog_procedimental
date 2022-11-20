/* 3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de 
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0. */

#include <stdio.h>

int ChecaPos (int x){
    if (x > 0) return 1;
    else if (x < 0) return -1;
    else return 0;
}

int main(){
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);

    y = ChecaPos(x);

    if (y == 1) printf("O numero eh positivo");
    else if (y == -1) printf("O numero eh negativo");
    else printf("O numero eh zero");

    return 0;
 }