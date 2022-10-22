/* 31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a 
seguir, verifique e mostra qual a classificação dessa pessoa. 

                                            Peso
Altura                           
                          Até 60    Entre 60 e 90 (inclusive)   Acima de 90
Menor que 1,20              A                D                      G                                      
De 1,20 a 1,70              B                E                      H 
Maior que 1,70              C                F                      I                                       
*/

#include <stdio.h>

int main(){

    float h, peso;
    printf("Digite a sua altura: ");
    scanf("%f", &h);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    if (h < 1.20){
        if (peso < 60){
            printf("Classificacao: A");
        }
        else if (peso >= 60 && peso <= 90){
            printf("Classificacao: D");
        }
        else{
            printf("Classificacao: G");
        }
    }

    else if (h >= 1.20 && h < 1.71){
        if (peso < 60){
            printf("Classificacao: B");
        }
        else if (peso >= 60 && peso <= 90){
            printf("Classificacao: E");
        }
        else{
            printf("Classificacao: F");
        }
    }

    else {
        if (peso < 60){
            printf("Classificacao: C");
        }
        else if (peso >= 60 && peso <= 90){
            printf("Classificacao: F");
        }
        else{
            printf("Classificacao: I");
        }
    }

    return 0;
}