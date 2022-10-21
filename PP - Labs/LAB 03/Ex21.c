/* 21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. 
Escreva uma mensagem de erro se a opção for inválida. 
Escolha a opção: 
1- Soma de 2 números. 
2- Diferença entre 2 números (maior pelo menor). 
3- Produto entre 2 números. 
4- Divisão entre 2 números (o denominador não pode ser zero). 
Opção */

int main(){
    
    int op;
    float n1, n2;
    printf("Escolha a opcao:\n\n");
    printf("1- Soma de 2 numeros\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor)\n");
    printf("3- Produto entre 2 numeros\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero\n\n");
    printf("Opcao: ");
    scanf("%d", &op);
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (op){

        case 1:
        printf("A soma dos 2 numeros eh %.2f", n1 + n2);
        break;

        case 2:
        if (n1 > n2){
            printf("A diferenca entre os 2 numeros eh %.2f", n1 - n2 );
        }
        else{
            printf("A diferenca entre os 2 numeros eh %.2f", n2 - n1);
        }
        break;

        case 3:
        printf("O produto entre os 2 numeros eh %.2f", n1 * n2);
        break;

        case 4:
        if (n2 == 0){
            printf("O denominador nao pode ser zero");
        }
        else{
            printf("A divisao entre os 2 numeros eh %.2f", n1 / n2);
        }
        break;

        default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}