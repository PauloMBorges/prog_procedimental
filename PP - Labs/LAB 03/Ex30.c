/* 30. Faça um programa que receba três números e mostre-os em ordem crescente. */

#include <stdio.h>

int main(){
    
    float n1, n2, n3;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    if (n2 > n1 && n3 > n1){    // n1 menor n
        if (n3 > n2){          // n1 < n2 < n3
            printf("A ordem crescente eh %.2f %.2f %.2f", n1, n2, n3);  
        }
        else{                // n1 < n3 < n2
            printf("A ordem crescente eh %.2f %.2f %.2f", n1, n3, n2);
        }
    }

    if (n1 > n2 && n3 > n2){    // n2 menor n
        if (n3 > n1){
            printf("A ordem crescente eh %.2f %.2f %.2f", n2, n1, n3);
        }
        else{
            printf("A ordem crescente eh %.2f %.2f %.2f", n2, n3, n1);
        }
    }

    if (n1 > n3 && n2 > n3){    // n3 menor n
        if (n2 > n1){
            printf("A ordem crescente eh %.2f %.2f %.2f", n3, n1, n2);
        }
        else{
            printf("A ordem crescente eh %.2f %.2f %.2f", n3, n2, n1);
        }
    }

    return 0;

}