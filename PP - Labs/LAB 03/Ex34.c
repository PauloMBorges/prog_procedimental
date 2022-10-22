/* 34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela 
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito. 

NOTA                    CONCEITO (ATÉ 20 FALTAS)            CONCEITO (MAIS DE 20 FALTAS) 
9.0 até 10.0                        A                                   B 
7.5 até 8.9                         B                                   C 
5.0 até 7.4                         C                                   D 
4.0 até 4.9                         D                                   E 
0.0 até 3.9                         E                                   E 

*/

#include <stdio.h>

int main(){

    int faltas;
    float nota;
    char conceito;

    printf("Digite a nota: ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <=10.0){
        conceito = 'A';
    }
    else if (nota >= 7.5 && nota < 9.0){
        conceito = 'B';
    }
    else if (nota >= 5.0 && nota < 7.5){
        conceito = 'C';
    }
    else if (nota >= 4.0 && nota < 5.0){
        conceito = 'D';
    }
    else if (nota >= 0.0 && nota < 4.0){
        conceito = 'E';
    }
    else{
        printf("Nota invalida");
        return 0;
    }

    if (faltas > 20){
        if (conceito == 'E'){
            conceito == 'E';
        }
        else{
            conceito++;
        }
    }

    printf("O conceito do aluno eh %c", conceito);
    return 0;
    
}







  

