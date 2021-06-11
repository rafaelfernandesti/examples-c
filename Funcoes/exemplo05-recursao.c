#include <stdio.h>

void converterParaBinario(int numeroDecimal)
{
    //em cada passo estou exibindo os valores para entender melhor o que estou fazendo.
    printf("Estamos no %d e resto %d\n", numeroDecimal, (numeroDecimal % 2));
    if (numeroDecimal == 0) //condição de parada da recursão
    {
        printf("%d", numeroDecimal); //linha opcional para exibir o número quando ele for 0.
        return 0;
    }
    converterParaBinario(numeroDecimal / 2); //chamando a função recursiva com o próximo valor até chegar em 0.
    printf("%d", numeroDecimal % 2);         //exibindo os restos um a um na tela.
}

int main()
{
    int numeroDecimal, resultado;
    puts("Digite o numero decimal a ser convertido em binario: ");
    scanf("%d", &numeroDecimal);
    converterParaBinario(numeroDecimal);
    return 0;
}
