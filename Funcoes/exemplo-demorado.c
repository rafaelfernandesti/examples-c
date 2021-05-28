#include <stdio.h>
int main(){
    float salario, descontoInss, descontoIR, salarioLiquido;
    printf("Digite seu salário: ");
    scanf("%f",&salario);
    //lógica para INSS
    if(salario <= 1100){
        descontoInss = salario * 7.5/100;
    }else if(salario <= 2203.48){
        descontoInss = salario * 9 / 100;
    }else if(salario <= 3305.22){
        descontoInss = salario * 12 / 100;
    }else if(salario <= 6433.57){
        descontoInss = salario * 14 / 100;
    }else{
        printf("Cálculo não realizado. Valor máximo (por enquanto): R$ 6433.57\n");
    }

    //lógica para IR
    if(salario <= 1903.98){
        descontoIR = 0.0;
    }else if(salario <= 2826.65){
        descontoIR = salario * 7.5 / 100 - 142.80;
    }else if(salario <= 3751.05){
        descontoIR = salario * 15 / 100 - 354.80;
    }else if(salario <= 4664.68){
        descontoIR = salario * (22.5 / 100) - 636.13;
    }else{
        descontoIR = salario * 27.5 / 100 - 869.36;
    }

    salarioLiquido = salario - descontoInss - descontoIR;

    printf("Salario bruto: %.2f, salário líquido: %.2f", salario, salarioLiquido);
    return 0;
}