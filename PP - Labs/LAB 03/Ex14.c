/* 14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias. */

#include <stdio.h>

int main(){
    float nota_final, lab, avaliacao, exame;
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &lab);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &avaliacao);
    printf("Digite a nota do exame final: ");
    scanf("%f", &exame);

    nota_final = (2 * lab + 3 * avaliacao + 5 * exame) / 10;

    if (nota_final >= 0 && nota_final <= 2.9){
        printf("A nota final foi %.2f. Aluno repovado.", nota_final);
    }
    else if (nota_final >= 3 && nota_final <= 4.9){
        printf("A nota final foi %.2f. Aluno de recuperação.", nota_final);
    }
    else if (nota_final > 4.9){
        printf("A nota final foi %.2f. Aluno aprovado.", nota_final);
    }
    else{
        printf("Notas invalidas");
    }

    return 0;
}