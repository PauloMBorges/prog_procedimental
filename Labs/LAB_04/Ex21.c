/* 21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são 
números informados pelo usuário. */

#include <stdio.h>

int main(){

    int a, b, EhPrimo, i, j, raiz, ContaPrimo;
    ContaPrimo = 0;

    printf("(a) Inicio: ");
    scanf("%d", &a);
    printf("(b) Fim: ");
    scanf("%d", &b);

    if (a > 0 && a < b){

        for (i = a + 1; i < b; i++){        // nao conta o A e o B
            EhPrimo = 1;
            raiz = sqrt(i);
            
            for(j = 2; j <= raiz; j++){
                if (i % j == 0){
                    EhPrimo = 0;
                    break;
                }
            }

            if(EhPrimo){
                ContaPrimo += 1;
            }
        }

    }

    else{
        printf("Erro! Numeros invalidos");
        return 0;
    }

    printf("O numero de primos entre %d e %d (exceto eles mesmos) eh %d", a, b, ContaPrimo);

    return 0;
}