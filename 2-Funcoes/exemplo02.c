#include <stdio.h>
int max(int n1, int n2)
{
    if(n1 > n2)
        return n1;
    else
        return n2;
}
int main()
{
    int x, y;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &x);
    printf("Digite o segundo numero: \n");
    scanf("%d", &y);
    printf("O maior eh: %d \n", max(x, y));
    return 0;
}

