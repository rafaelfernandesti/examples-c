#include <stdio.h>
//Ler dois valores e verificar se o primeiro � maior que o segundo.
//Se sim, trocar os valores das vari�veis. A sa�da ser� a �impress�o� dos valores das vari�veis na tela.

int main(){
    float valor1, valor2, aux;
    printf("Digite o primeiro valor:"); //sa�da de dados
    scanf("%f",&valor1); //leitura de dados
    printf("Digite o segundo valor:"); //sa�da de dados
    scanf("%f",&valor2); //leitura de dados
    if(valor1 > valor2){ //valor1 = 10 e valor2 = 5
        aux = valor2; //aux = 5
        valor2 = valor1; //valor2 = 10
        valor1 = aux; //valor1 = 5
    }
    printf("%f e %f\n",valor1, valor2);
    return 0;
}


