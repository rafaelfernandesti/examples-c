#include <stdio.h>
//Ler dois números, a operação desejada e realiza-la de acordo com a opção escolhida,
//exibindo seu resultado em um switch/case.

int main(){
    float valor1, valor2, resultado;
    int opcao;
    //leitura de dados
    printf("Digite o primeiro valor: ");
    scanf("%f",&valor1);
    printf("Digite o segundo valor: ");
    scanf("%f",&valor2);
    printf("Digite 1 para ADICAO, 2 para SUBTRACAO, 3 para MULTIPLICACAO ou 4 para DIVISAO: "); //saída de dados
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            resultado = valor1 + valor2;
            printf("%f + %f = %f", valor1, valor2, resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("%f - %f = %f", valor1, valor2, resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("%f * %f = %f", valor1, valor2, resultado);
            break;
        case 4:
            resultado = valor1 / valor2;
            printf("%f / %f = %f", valor1, valor2, resultado);
            break;
        default:
            printf("Operacao digitada eh invalida");
            break;
    }
    return 0;
}


