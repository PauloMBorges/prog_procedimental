/* Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo 
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo. */

#include <stdio.h>
#include <math.h>       /* ceil */

int main(){ 
    float altura_degrau, degraus, altura;
    printf("Digite a altura do degrau da escada: ");
    scanf("%f", &altura_degrau);
    printf("Digite a altura que deseja alcancar: ");
    scanf("%f", &altura);
    degraus = altura / altura_degrau;
    printf("O usuario devera subir %.1f degraus", ceil(degraus));
    return 0;
}