/* 6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 
32 dos caracteres cujo código ASCII está entre 97 e 122. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[64];

    printf("Digite uma cadeia de caracteres: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++){
        if (str[i] >= 97 && str[i] <= 122){
            str[i] -=32;
        }
    }

    printf("%s", str);

    return 0;
}