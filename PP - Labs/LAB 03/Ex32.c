/* 32. Escrever um programa que leia o código do produto escolhido do cardápio de uma 
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. 
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete 
segue o padrão abaixo: 

Especificação           Código          Preço 

Cachorro Quente         100             1,20 
Bauru Simples           101             1,30 
Bauru com Ovo           102             1,50 
Hambúrguer              103             1,20 
Cheeseburguer           104             1,70 
Suco                    105             2,20 
Refrigerante            106             1,00 

*/


#include <stdio.h>

int main(){

    int codigo, quant;
    float preco;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quant);

    if (codigo == 100){
        preco = quant * 1.20;
    }
    else if (codigo == 101){
        preco = quant * 1.30;
    }
    else if (codigo == 102){
        preco = quant * 1.50;
    }
    else if (codigo == 103){
        preco = quant * 1.20;
    }
    else if (codigo == 104){
        preco = quant * 1.70;
    } 
    else if (codigo == 105){
        preco = quant * 2.20;
    }
    else if (codigo == 106){
        preco = quant;
    }
    else{
        printf("Codigo invalido");
        return 0;
    }

    printf("O valor a ser pago eh %.2f", preco); 
    return 0;   
}