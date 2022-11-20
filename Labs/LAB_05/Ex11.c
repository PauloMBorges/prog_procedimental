/* 11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a 
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá 
calcular a média ponderada, com pesos 5, 3 e 2. */

#include <stdio.h>

float Media(float n1, float n2, float n3, char letra){
    float media;
    if (letra == 'A' || letra == 'a'){
        media = (n1 + n2 + n3) / 3;
    }else if (letra == 'P' || letra == 'p'){
        media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    }

    return media;
}

int main(){
    float n1, n2, n3, media;
    char letra;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite A para media aritmetica ou P para media ponderada: ");
    scanf(" %c", &letra);

    if (letra == 'A' || letra == 'a' || letra == 'p' || letra == 'P'){
        media = Media(n1, n2, n3, letra); 
        printf("A media eh %.2f", media);
    }else printf("Letra inavlida");
    return 0;
}
