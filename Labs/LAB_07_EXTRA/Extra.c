#include <stdio.h>
#include <string.h>

int main(){

    char str[128];
    int len;

    printf("Digite uma frase: ");
    fgets(str, 128, stdin);

    len = strlen(str);

    for (int i = 0; i < len; i++){

        if (str[i] == 'r' && (str[i+1] == ' ' || str[i+1] == '\n')){
            str[i] = 'r';
        }

        else if(str[i] == 'r'){
            str[i] = 'l';

            if (str[i+1] == 'r'){
                for (int j = 0; j < strlen(str); j++){
                    str[j + i + 1] = str[j + i + 2];
                }
            }
        }

        else if(str[i] == 'R'){
            str[i] = 'L';
        }

    }

    printf("%s", str);

}