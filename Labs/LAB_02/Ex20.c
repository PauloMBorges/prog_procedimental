/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de 
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras. */

#include <stdio.h>

int main(){
    float kg, libras;
    printf("Digite um valor em kg: ");
    scanf("%f", &kg);
    libras = kg / 0.45;
    printf("A massa em libras eh %f", libras);
    return 0;
}