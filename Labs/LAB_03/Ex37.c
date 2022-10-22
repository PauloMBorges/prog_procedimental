/* 37. As tarifas de certo parque de estacionamento são as seguintes: 
- 1a e 2a hora - R$1,00 cada; 
- 3a e 4a hora - R$1,40 cada; 
- 5a hora e seguintes - R$2,00 cada 
O número de tempo a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas tempo, que é o mesmo que pagaria se tivesse 
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando tempo e minutos. Por exemplo, o 
par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos 
pelo teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo 
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 
tempo. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação 
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/

#include <stdio.h>

int main(){

    int h_chegada, min_chegada, h_partida, min_partida;
    int horario_chegada, horario_partida;
    int tempo;
    float pagamento;

    printf("Digite o momento de chegada (horas e minutos): ");
    scanf("%d %d", &h_chegada, &min_chegada);
    printf("Digite o momento de partida (horas e minutos): ");
    scanf("%d %d", &h_partida, &min_partida);

    // horários de chegada e partida em minutos
    horario_chegada = h_chegada * 60 + min_chegada;
    horario_partida = h_partida * 60 + min_partida;

    // tempo de permanência no estacionamento em horas
    if (horario_chegada < horario_partida){
        tempo = horario_partida - horario_chegada;
        tempo /= 60;
    }
    else{
        horario_partida = horario_partida + 24*60;
        tempo = horario_partida - horario_chegada;
        tempo /= 60;
    }

    // pagamento da tarifa
    if (tempo == 1 || tempo == 2){
        pagamento = tempo * 1;
    }
    else if (tempo == 3 || tempo == 4){
        pagamento = tempo * 1.40;
    }
    else{
        pagamento = tempo * 2.00;
    }

    printf("Preco cobrado: R$%.2f", pagamento);
    return 0;
}

