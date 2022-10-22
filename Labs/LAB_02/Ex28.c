/* Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três 
valores lidos */

#include <stdio.h>
int main(){
    float n1, n2, n3, somaq;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f",&n2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);
    somaq = n1*n1 + n2*n2 + n3*n3;
    printf("A soma dos quadrados dos tres valores eh %.2f", somaq);
    return 0;
}