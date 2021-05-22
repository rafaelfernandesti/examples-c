#include <stdio.h>
//exibir a tabuada do numero digitado

int main(){

    //estrutura PARA (FOR)
    float numero, resultado;
    printf("Digite um numero: ");
    scanf("%f",&numero);

    for(int i = 1; i<=10; i++){ //i++ -> i = i+1 ////// i+=2 -> i = i + 2
        resultado = numero * i;
        printf("%f * %d = %.1f\n",numero, i, resultado);
    }

    return 0;
}


