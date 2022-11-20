/* 15. Crie um programa que receba três valores (obrigatoriamente maiores que zero), 
representando as medidas dos três lados de um triângulo. Elabore funções para: 

a) Determinar se eles lados formam um triângulo, sabendo que: 
 - O comprimento de cada lado de um triângulo é menor do que a soma dos outros 
dois lados. 

b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo 
que: 
 - Chama-se equilátero o triângulo que tem três lados iguais; 
 - Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais; 
 - Recebe o nome de escaleno o triângulo que tem os três lados diferentes. */


#include <stdio.h>

int EhTriangulo (float a, float b, float c){
    if (a < b + c && b < a + c && c < a + b) return 1;
    else return 0;
}

int TipoTriangulo (float a, float b, float c){
    if (a == b && b == c) return 1; // 1 = equilatero
    else if (a == b || b == c || a == c) return 2; // 2 = isosceles
    else return 3; // 3 = escaleno
}

int main(){
    float a, b, c;
    int eh, tipo;

    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);

    eh = EhTriangulo(a, b, c);
    
    if (eh){
        tipo = TipoTriangulo(a, b, c);
        if (tipo == 1) printf("O triangulo eh equilatero");
        else if (tipo == 2) printf("O triangulo eh isosceles");
        else printf("O triangulo eh escaleno");
    }
    else{
        printf("Os lados nao formam um triangulo");
    }

    return 0;
}
