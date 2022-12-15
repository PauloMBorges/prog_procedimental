/* 18. Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma 
data válida, e calcule o número de dias que decorreram entre as duas datas. 

struct dma { 
    int dia; 
    int mes; 
    int ano; 
}; */

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} dma;

int main(){
    
    dma data1, data2;
    int dias = 0;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    if (data1.ano == data2.ano){
        if (data1.mes == data2.mes){
            dias = data2.dia - data1.dia;   // se tiver no mesmo mes e no mesmo ano, basta subtrair o maior do menor
        }
        else {                            // se não tiver no mesmo mes
            dias = (data2.mes - data1.mes) * 30; // multiplica-se a diferença de meses por 30 
            dias += data2.dia - data1.dia;       // soma-se a diferença de dias
            
        }
    }
    else {                                // se não tiver no mesmo ano
        dias = (data2.ano - data1.ano) * 365; // multiplica-se a diferença de anos por 365 
        dias += (data2.mes - data1.mes) * 30; // soma-se a diferença de meses
        dias += data2.dia - data1.dia - 5;       // soma-se a diferença de dias (-5 porque considerou-se todos meses com 30 dias, então sempre daria 5 a mais)
    }

    printf("A diferenca de dias entre as datas eh: %d", dias);

    return 0;
}