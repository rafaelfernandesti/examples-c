#include <stdio.h>

void main(){
    float valor1, valor2, resultado;
    char opcao;
    //leitura de dados
    printf("Digite o primeiro valor: ");
    scanf("%f",&valor1);
    printf("Digite o segundo valor: ");
    scanf("%f",&valor2);
    printf("Digite '+' para ADICAO,'-' para SUBTRACAO,'*' para MULTIPLICACAO,'/' para DIVISAO :"); //saída de dados
    scanf("%c",&opcao);

    switch(opcao){
        case '+':
            resultado = valor1 + valor2;
            printf("%f + %f = %f", valor1, valor2, resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            printf("%f - %f = %f", valor1, valor2, resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            printf("%f * %f = %f", valor1, valor2, resultado);
            break;
        case '/':
            resultado = valor1 / valor2;
            printf("%f / %f = %f", valor1, valor2, resultado);
            break;
        default:
            printf("Operacao digitada eh invalida");
    }
}


