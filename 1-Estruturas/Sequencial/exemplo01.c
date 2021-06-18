#include <stdio.h>
int main(){
    float num1, num2, result;
    printf("Digite o primeiro valor: ");
    scanf("%f",&num1);
    printf("Digite o segundo valor: ");
    scanf("%f",&num2);
    result = num1 + num2;
    printf("\nA soma de %.1f e %.1f eh igual a %.2f",num1,num2,result);
    result = num1 - num2;
    printf("\nA subtracao de %.1f e %.1f eh igual a %.2f",num1,num2,result);
    result = num1 * num2;
    printf("\nA multiplicacao de %.1f e %.1f eh igual a %.2f",num1,num2,result);
    result = num1 / num2;
    printf("\nA divisao de %.1f e %.1f eh igual a %.2f",num1,num2,result);

    return 0;
}
