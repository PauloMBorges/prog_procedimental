/* Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de 
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras. */

#include <stdio.h>

int main(){
    float kg, libras;
    printf("Digite um valor em libras: ");
    scanf("%f", &libras);
    kg = libras * 0.45;
    printf("A massa em quilogramas eh %f", kg);
    return 0;
}