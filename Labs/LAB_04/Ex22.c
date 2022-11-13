/* 22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois 
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois 
dígitos é 9009 = 91*99. */

/* Palíndromo é uma palavra, frase ou número que permanece igual quando lida de trás para diante. */
/* Resposta: 906609 */

#include <stdio.h>

int main(){

    int x, y, i, j, produto, palindromo, n, n_reverso, xprint, yprint;
    x = 999;
    y = 100;
    palindromo = xprint = yprint = 0;

    for (i = x; i >= y; i--){
        for (j = i; j >= y; j--){
            // começa com 999 * 999
            produto = i * j;

            n = produto;
            n_reverso = 0;

            while (n != 0){         
                n_reverso = (n_reverso * 10) + (n % 10);   /* pega o digito mais a direita e soma com o numero do momento vezes 10 */
                n /= 10;    
            }

            if ((produto == n_reverso) && (produto > palindromo)){
                palindromo = produto;
                xprint = i;
                yprint = j;
            }  
        }  
    }

    printf("Maior palindromo: %d x %d = %d", xprint, yprint, palindromo);

    return 0;
}