#include <stdio.h>
//Ler dois valores e soma-los. Se o resultado da soma for maior que 10 indicar que o resultado é maior,
//se não for, indicar que o resultado é menor.


int main(){
    float valor1, valor2, soma;
    printf("Digite o primeiro valor:"); //saída de dados
    scanf("%f",&valor1); //leitura de dados
    printf("Digite o segundo valor:"); //saída de dados
    scanf("%f",&valor2); //leitura de dados
    soma = valor1 + valor2;
    if(soma > 10){
        printf("O valor eh maior que 10");
    }else{
        printf("O valor nao eh maior que 10");
    }
    return 0;
}


