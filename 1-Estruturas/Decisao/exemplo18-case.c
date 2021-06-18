#include <stdio.h>
//Digitar um número de 1 a 3 e exibir uma mensagem referente à opção escolhida.
//Caso seja digitada opção diferente, executar bloco default.


int main(){
    int opcaoEscolhida;
    printf("Digite um valor de 1 a 3:"); //saída de dados
    scanf("%d",&opcaoEscolhida); //leitura de dados

    switch(opcaoEscolhida){
        case 1:
            printf("Opcao 1 escolhida");
            break;
        case 2:
            printf("Opcao 2 escolhida");
            break;
        case 3:
            printf("Opcao 3 escolhida");
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}


