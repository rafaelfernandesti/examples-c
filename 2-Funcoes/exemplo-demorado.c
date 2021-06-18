#include <stdio.h>

void mostraTituloResultado(){
    printf("----------------------------\n");
    printf("--------Resultados----------\n");
    printf("----------------------------\n");
}
void mostraTituloPrincipal(){
    printf("----------------------------\n");
    printf("Calculo de Salario Liquido\n");
    printf("----------------------------\n");
}
float calculaDescontoInss(float salBruto){
    //função para cálculo do INSS
    printf("%f",salBruto);
    float descontoInss;
    if(salBruto <= 1100){
        descontoInss = salBruto * 7.5/100;
    }else if(salBruto <= 2203.48){
        descontoInss = salBruto * 9 / 100;
    }else if(salBruto <= 3305.22){
        descontoInss = salBruto * 12 / 100;
    }else if(salBruto <= 6433.57){
        descontoInss = salBruto * 14 / 100;
    }else{
        descontoInss = 6433.57 * 14 / 100;
    }
    return descontoInss;
}

float calculaDescontoIR(float salBruto){
    float descontoIR;
    //função para cálculo do IR
    if(salBruto <= 1903.98){
        descontoIR = 0.0;
    }else if(salBruto <= 2826.65){
        descontoIR = salBruto * 7.5 / 100 - 142.80;
    }else if(salBruto <= 3751.05){
        descontoIR = salBruto * 15 / 100 - 354.80;
    }else if(salBruto <= 4664.68){
        descontoIR = salBruto * (22.5 / 100) - 636.13;
    }else{
        descontoIR = salBruto * 27.5 / 100 - 869.36;
    }
    return descontoIR;
}

int main(){
    float salario, descontoInss, descontoIR, salarioLiquido;
    mostraTituloPrincipal();
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    descontoInss = calculaDescontoInss(salario);
    descontoIR = calculaDescontoIR(salario);
    salarioLiquido = salario - descontoInss - descontoIR;
    mostraTituloResultado();
    printf("Salario bruto: %.2f\nTotal de descontos: %.2f\nSalario liquido: %.2f",
        salario, (descontoInss+descontoIR), salarioLiquido);
    return 0;
}