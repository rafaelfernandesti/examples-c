#include <stdio.h>
//Pedir ao usu�rio a digita��o de valores reais e ir somando seus valores.
//Quando o usu�rio inserir um valor negativo, encerrar a repeti��o e exibir a soma total e a m�dia.

int main(){
    float valor = 0, soma = 0, media = 0;
    int qtdeValores = 0;
    //estrutura ENQUANTO (WHILE)
    while(valor >= 0){
        printf("Digite o valor atual: ");
        scanf("%f",&valor);
        if(valor >= 0){
            soma = soma + valor;
            qtdeValores++;
        }
    }
    printf("A soma total eh %f",soma);
    media = soma / qtdeValores;
    printf("A media eh %f",media);

    return 0;
}


