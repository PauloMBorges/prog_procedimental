/* Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A 
fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em 
acres. */

#include <stdio.h>
int main(){
    float m2, acres;
    printf("Digite um valor de area em acres: ");
    scanf("%f", &acres);
    m2 = acres * 4048.58;
    printf("O valor em m2 eh %f", m2);
    return 0;
}