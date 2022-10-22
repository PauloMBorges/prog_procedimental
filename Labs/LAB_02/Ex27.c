/* Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A 
fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em 
hectares. */

#include <stdio.h>
int main(){
    float m2, h;
    printf("Digite um valor de area em hectares: ");
    scanf("%f", &h);
    m2 = h * 10000;
    printf("O valor em m2 eh %f", m2);
    return 0;
}