/* A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo 
que da quantia total: 
- O primeiro ganhador receberá 46%; 
- O segundo receberá 32%; 
- O terceiro receberá o restante; 
Calcule e imprima a quantia ganha por cada um dos ganhadores */

#include <stdio.h>
#define valor 780000
int main(){
    float primeiro, segundo, terceiro;
    primeiro = 0.46 * valor;
    segundo = 0.32 * valor;
    terceiro = 0.22 * valor;
    printf("A quantia recebida pelo primeiro sera %.2f reais, pelo segundo %.2f reais e pelo terceiro %.2f reais", primeiro, segundo, terceiro);
    return 0;
}