/* 5. Considerando a estrutura 
struct vetor { 
 float a; 
 float b; 
 float c; 
}; 
para representar um vetor no R3, implemente um programa que calcule a soma de dois 
vetores. 

 */

#include <stdio.h>
#include <string.h>

struct vetor {
    float a;
    float b;
    float c;
};

int main(){

    struct vetor v1, v2, resultado;
    
    printf("Digite as coordenadas do primeiro vetor (a, b, c): ");
    scanf("%f %f %f", &v1.a, &v1.b, &v1.c);
    printf("Digite as coordenadas do segundo vetor (a, b, c): ");
    scanf("%f %f %f", &v2.a, &v2.b, &v2.c);

    resultado.a = v1.a + v2.a;
    resultado.b = v1.b + v2.b;
    resultado.c = v1.c + v2.c;

    printf("Resultado:\na: %.2f\nb: %.2f\nc: %.2f\n", resultado.a, resultado.b, resultado.c);

    return 0;
}