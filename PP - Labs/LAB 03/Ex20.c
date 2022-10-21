/* 20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e, 
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes 
conceitos: 
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois 
lados; 
- Chama-se equilátero o triângulo que tem três lados iguais; 
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais; 
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes */

int main(){

    float a, b, c;
    printf("Digite o valor A: ");
    scanf("%f", &a);
    printf("Digite o valor B: ");
    scanf("%f", &b);
    printf("Digite o valor C: ");
    scanf("%f", &c);

    if (a + b > c && b + c > a && c + a > b){
        if (a == b == c){
            printf("Os valores formam um triangulo equilatero");
        }
        else if (a == b || a == c || b == c){
            printf("Os valores formam um triangulo isosceles");
        }
        else{
            printf("Os valores formam um triangulo escaleno");
        }

    }

    else{
        printf("Os valores nao podem ser lados de um triangulo");
    }

    return 0;
}