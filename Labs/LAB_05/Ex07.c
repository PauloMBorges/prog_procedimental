/* Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em 
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0 / 5,0) + 32,0, sendo F a temperatura 
em Fahrenheit e C a temperatura em Celsius. */

#include <stdio.h>

float Conversao(float C){
    float F = C * (9.0 / 5.0) + 32.0;
    return F;
}

int main(){
    float c, f;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &c);

    f = Conversao(c);

    printf("A temperatura em Fahrenheit eh %.2f", f);

    return 0;
}
