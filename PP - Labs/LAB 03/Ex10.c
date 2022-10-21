/* 10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso 
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura): 
- Homens: (72,7 * h) – 58,0 
- Mulheres: (62,1 * h) – 44,7 */

#include <stdio.h>

int main(){

    float altura, peso_ideal; 
    char sexo;
    printf("Digite o seu sexo M/F: ");
    scanf("%c", &sexo);
    printf("Digite a sua altura em m: ");
    scanf("%f", &altura);

    if (sexo == 'M'){

    peso_ideal = (72.7 * altura) - 58.8;
    }
    
    else{
        peso_ideal = (62.1 * altura) - 44.7;
    }
    printf("O seu peso ideal eh %.2f", peso_ideal);
        
    return 0;

}