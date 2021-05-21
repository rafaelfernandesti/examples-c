#include <stdio.h>
//Ler dois valores e soma-los.
//Se o resultado da soma for maior que 10 exibi-lo.
int main(){
    float valor1, valor2, soma;
    printf("Digite o primeiro valor:"); //saída de dados
    scanf("%f",&valor1); //leitura de dados
    printf("Digite o segundo valor:"); //saída de dados
    scanf("%f",&valor2); //leitura de dados
    soma = valor1 + valor2;
    if(soma > 10){
        printf("%f", soma);
    }


    return 0;
}


