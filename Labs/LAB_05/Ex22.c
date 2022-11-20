/* 22. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, 
a saída para n = 4 seria: 

* 
** 
*** 
**** 
*** 
** 
* 

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
    int i, j;

    for (i = 0; i < x; i++){        // vai desenhar a parte de cima do triangulo
        for (j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for (i = x - 1; i > 0; i--){    // vai desenhar a parte de baixo do triangulo
        for (j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    
}
