/* Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se 
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% 
de imposto sobre o salário-base. */

#include <stdio.h>
int main(){ 
    float salario_base, salario;
    printf("Digite o salario-base do funcionaro: ");
    scanf("%f", &salario_base);
    salario = salario_base - 0.02 * salario_base;
    printf("O valor do salario a receber eh %.2f", salario);
    return 0;

}