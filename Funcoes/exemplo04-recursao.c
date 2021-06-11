#include <stdio.h>

float multiplica(float x, float n)
{
    //função recursiva (que chama a si mesma) para realizar somas sucessivas,
    //finalizando a soma quando atingir o caso base (n = 0).
    if (n == 0)
    {
        return 0;
    }
    return x + multiplica(x, n - 1);
    /*note que o n (que representa a quantidade de repetições) 
        vai sendo diminuido a cada vez que a função é chamada */
}

int main()
{
    /*
    Sabia que uma multiplicação pode ser interpretada
    como a soma de um número (multiplicando) N (multiplicador) vezes?
    Dessa forma 3 * 5 = 3 + 3 + 3 + 3 + 3 = 15. Viu?
    Ao somar o número 3 cinco vezes o resultado é o mesmo de 3 * 5.
    */
    float multiplicando, multiplicador;
    puts("Digite o multiplicando: ");
    scanf("%f", &multiplicando);
    puts("Digite o multiplicador: ");
    scanf("%f", &multiplicador);
    float resultado = multiplica(multiplicando, multiplicador);
    printf("Resultado da operacao: %.2f", resultado);
    return 0;
}
