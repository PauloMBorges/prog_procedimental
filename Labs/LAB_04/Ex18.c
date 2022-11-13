/* 18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário. */

// Fiz dobrando a taxa de 1.5%

#include <stdio.h>
#include <math.h>

int main(){

    double salario, aumento;

    salario = 2000;

    // 2022 - 1997 = 25
    // vai dobrar o aumento 25 vezes -> 2^25 * 0.015

    for (aumento = 0.015; aumento <= pow(2, 25) * 0.015; aumento *= 2) {
        salario += (salario * aumento);
    }

    printf("O salario em 2022 sera: %f", salario);
    return 0;
}
