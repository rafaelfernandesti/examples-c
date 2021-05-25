#include <stdio.h>
int main(){
    float valor1, valor2, valor3;
    float premio1, premio2, premio3;
    float premioTotal, contribuicaoTotal;
    printf("Digite o valor do premio da Mega:");
    scanf("%f",&premioTotal);
    printf("Qual foi a contribuicao de A: ");
    scanf("%f",&valor1);
    printf("Qual foi a contribuicao de B: ");
    scanf("%f",&valor2);
    printf("Qual foi a contribuicao de C: ");
    scanf("%f",&valor3);
    contribuicaoTotal = valor1 + valor2 + valor3;
    premio1 = premioTotal * (valor1 / contribuicaoTotal);
    premio2 = premioTotal * (valor2 / contribuicaoTotal);
    premio3 = premioTotal * (valor3 / contribuicaoTotal);

    printf("%f\n%f\n%f", premio1, premio2, premio3);
    return 0;
}
