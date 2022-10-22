/* 33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule 
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a 
segunda tabela). 

PREÇO ANTIGO              PERCENTUAL DE AUMENTO   |  PRECO NOVO                             MENSAGEM
até R$ 50                           5%            |  até R$ 80                              Barato
entre R$ 50 e R$ 100                10%           |  entre R$ 80 e R$ 120 (inclusive)       Normal
acima de R$ 100                     15%           |  entre R$ 120 e R$ 200 (inclusive)      Caro
                                                  |  acima de R$ 200                        Muito caro
*/

#include <stdio.h>

int main(){
    
    int precoA;
    float precoN;
    printf("Digite o preco antigo: ");
    scanf("%d", &precoA);

    if (precoA < 50){
        precoN = precoA * 1.05;
    }
    else if (precoA >= 50 && precoA <= 100){
        precoN = precoA * 1.10;
    }
    else{
        precoN = precoA * 1.15;
    }

    if (precoN < 80){
        printf("O preco novo eh %.2f. Barato!", precoN);
    }
    else if (precoN >= 80 && precoN <= 120){
        printf("O preco novo eh %.2f. Normal.", precoN);
    }
    else if (precoN > 120 && precoN <= 200){
        printf("O preco novo eh %.2f. Caro.", precoN);
    }
    else{
        printf("O preco novo eh %.2f. Muito caro!", precoN);
    }

    return 0;

}