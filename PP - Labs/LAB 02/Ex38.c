/* Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele 
recebeu um aumento de 25% */

#include <stdio.h>
int main(){
    float salario, novo;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    novo = salario + (0.25 * salario);
    printf("O novo salario eh %.2f", novo);
    return 0;
}