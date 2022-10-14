/* Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de 
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros. */

#include <stdio.h>

int main(){
    float j, m;
    printf("Digite um valor em metros: ");
    scanf("%f", &m);
    j = m / 0.91;
    printf("O valor em jardas eh %f", j);
    return 0;
}