#include <stdio.h>
int main(){
    float valorBoleto = 0; //inicializando a variável com o valor 0
    float valorPago;
    float taxa = 3.0/100.0; // 3% = 3/100 = 0.03
    float taxaCalculada;

    printf("Digite o valor do boleto a ser pago no cartão: ");
    scanf("%f",&valorBoleto);
    taxaCalculada = valorBoleto*taxa;
    printf("Taxa calculada: %f",taxaCalculada);
    valorPago = valorBoleto + taxaCalculada;
    printf("O valor do boleto de %f reais sera %f reais",
           valorBoleto, valorPago);
    printf(" se for pago no cartao.");
    system("pause");
    return 0;
}

