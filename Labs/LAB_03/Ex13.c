/* 13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a 
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e 
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou 
superior a 60 pontos. */

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + 2 * nota3) / 4;

    if (media >= 60){
        printf("A media foi %.2f!\nAprovado!", media);
    }
    else{
        printf("A media foi %.2f\nReprovado!", media);
    }

    return 0;
}