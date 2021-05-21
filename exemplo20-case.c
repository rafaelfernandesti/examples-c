#include <stdio.h>
//Ler dois números, a operação desejada e realiza-la de acordo com a opção escolhida,
//exibindo seu resultado em um switch/case.

int main(){
    float valor1, valor2, resultado;
    char opcao;
    //leitura de dados
    printf("Digite o primeiro valor: ");
    scanf("%f");
    printf("Digite o segundo valor: ");
    scanf("%f");
    printf("Digite '+' para ADICAO,'-' para SUBTRACAO\n'*' para MULTIPLICACAO,'/' para DIVISAO :"); //saída de dados
    scanf("%c",&opcao);


    return 0;
}


