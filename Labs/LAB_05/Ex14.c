/* 14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina 
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma 
mensagem de acordo com a tabela abaixo: 

 CONSUMO        (Km/l)          MENSAGEM 
menor que          8            Venda o carro! 
entre            8 e 14         Econômico! 
maior que         14            Super econômico! 

 */

#include <stdio.h>

float Consumo (float km, float l){
    float consumo = km / l;
    return consumo;
}

int main(){
    float distancia, litros, consumo;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo = Consumo(distancia, litros);

    if (consumo < 8){ 
        printf("Venda o carro!\n");
    }else if (consumo <= 14){
        printf("Economico!\n");
    }else{ 
        printf("Super economico!");
    }
    return 0;
}