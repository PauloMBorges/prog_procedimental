/* 23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for 
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 
1996. */

int main(){

    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 100){
        printf("O ano eh bissexto!");
    }
    
    else{
        printf("O ano nao eh bissexto!");
    }

    return 0;
}