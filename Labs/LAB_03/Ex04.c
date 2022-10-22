/* 4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: 
 - O número digitado ao quadrado 
 - A raiz quadrada do número digitado */

 #include <stdio.h>

 int main (){
    
    float n, q, r;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0){

        q = n*n;
        r = sqrt(n);

        printf("O numero ao quadrado eh %.2f\nA raiz do numero eh %.2f", q, r);

    }

    return 0;
 }