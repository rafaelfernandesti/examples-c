#include <stdio.h>
//#include <stdlib.h>
int dif(int a, int b)
{
    int resultado;
    resultado = a - b;
    return(resultado);
}
int main()
{
    int x, y, total;
    printf("Quais sao os numeros? \n");
    scanf("%d %d", &x, &y);
    total = dif(x,y);
    printf("Resultado = %d \n", total);
    //system("pause");
    return 0;
}

