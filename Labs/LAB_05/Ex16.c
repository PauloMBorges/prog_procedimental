/* 16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma 
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos 
sinais de igual serão mostrados. */

#include <stdio.h>

void desenha_linha(int quantidade);

int main(){
    int quant;
    printf("Digite a quantidade de sinais: ");
    scanf("%d", &quant);

    desenha_linha(quant);

    return 0;
}

void desenha_linha(int quantidade){
    int i;
    for (i = 0; i < quantidade; i++){
        printf("=");
    }
}