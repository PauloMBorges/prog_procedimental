/* 8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na 
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o 
programa termina. */

#include <stdio.h>

int main(){

    float n1, n2, v, m;
    printf("Digite as duas notas do aluno: ");
    scanf("%f %f", &n1, &n2);

    v = (0 <= n1 && n1 <= 10) && (0 <= n2 && n2 <= 10);

    if (v == 1){
        m = (n1 + n2) / 2;
        printf("A media eh %.2f", m);
    }

    else{
        printf("A nota eh invalida");
    }

    return 0;
}