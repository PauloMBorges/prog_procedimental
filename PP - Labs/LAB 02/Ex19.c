/* Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A 
fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros 
cúbicos */

#include <stdio.h>
int main(){
    float m3, L;
    printf("Digite um valor de volume em litros: ");
    scanf("%f",&L);
    m3 = L / 1000;
    printf("O valor em m3 eh %f", m3);
    return 0;
}