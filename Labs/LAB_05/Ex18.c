/* 18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o 
resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de 
exponenciação. */

#include <stdio.h>

int Potencia(x, z){
    int potencia = 1;
    for (z; z > 0; z--){
        potencia = potencia * x;
    }
    return potencia;
}

int main(){
    int x, z, potencia;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &z);

    potencia = Potencia(x,z);

    printf("O resultado de %d elevado a %d eh %d", x, z, potencia);
    return 0;
}