/* 12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo 
de substituição na qual cada letra do texto  substituída por outra, que se apresenta no alfabeto 
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria 
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça 
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.  
Exemplo: 
String: a ligeira raposa marrom saltou sobre o cachorro cansado 
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR */

#include <stdio.h>
#include <string.h>

int main(){

    char str[128];

    printf("Digite uma frase: ");
    fgets(str, 128, stdin);
    printf("\nString: %s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++){
        if (str[i] != ' ' && str[i] != '\n'){
            str[i] -= 29;
        }    
    }

    printf("Nova string: %s", str);

    return 0;
}