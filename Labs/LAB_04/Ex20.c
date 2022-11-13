/* 20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões. */

#include <stdio.h>
#include <math.h>

int main(){

    int soma, i, EhPrimo, j, raiz;
    soma = 0;

    for (i = 3; i < 2000000; i += 2){   // passa pelos impares de 3 a 2000000 (primeiro primo impar é 3)
        EhPrimo = 1;                   // considera o numero como primo até que se prove o contrario 
        raiz = sqrt(i);
                                      
        for(j = 3; j <= raiz; j+= 2){    // testando se é primo (p/ ver se tem divisor só precisa dividir ate a sqrt do numero)
            if (i % j == 0){            // se for divisivel por j alguma vez, o número não é primo
                EhPrimo = 0;           
                break;                // para de dividir desnecessariamente (já checou que é primo)
            }
        }

        if (EhPrimo){            // se o numero for primo (EhPrimo == 1)
            soma = soma + i;
        }

    }

    printf("Soma: %d", soma + 2);   // + 2 na soma para considerar o 2 (unico primo par)

    return 0;
}