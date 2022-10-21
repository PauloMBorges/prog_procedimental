/* 9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for 
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima: 
“Empréstimo concedido” */

#include <stdio.h>

int main(){
    
    float s, e;
    printf("Digite o seu salario: ");
    scanf("%f", &s);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &e);

    if (e > (0.2 * s)){
        printf("Emprestimo nao concecido");
    }

    else{
        printf("Empresetimo concedido");
    }

    return 0;
}