/* Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A 
fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros 
cúbicos. */

#include <stdio.h>
int main(){
    float m3, L;
    printf("Digite um valor de volume em m3: ");
    scanf("%f",&m3);
    L = 1000 * m3;
    printf("O valor em litros eh %f", L);
    return 0;
}