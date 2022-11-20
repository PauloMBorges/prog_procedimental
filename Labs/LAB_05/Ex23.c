/* 23. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a
saída para n = 6 seria: 
 
     * 
    *** 
   ***** 
  ******* 
 ********* 
*********** 

*/

#include <stdio.h>

void desenha_triangulo(int x);

int main(){
    int x;
    printf("Digite a altura: ");
    scanf("%d", &x);

    desenha_triangulo(x);
    return 0;
}

void desenha_triangulo(int x){
    int i, j, k;
    for (i = 0; i < x; i++){
        for (j = 0; j < x - i - 1; j++){
            printf(" ");
        }
        for (k = 0; k < 2*i + 1; k++){
            printf("*");
        }
        printf("\n");
    }
}