/* Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A 
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em 
hectares. */

#include <stdio.h>
int main(){
    float m2, h;
    printf("Digite um valor de area em m2: ");
    scanf("%f", &m2);
    h = m2 * 0.0001;
    printf("O valor em hectares eh %f", h);
    return 0;
}