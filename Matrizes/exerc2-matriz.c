int main(int argc, char const *argv[])
{
    //ENUNCIADO - Declare uma matriz 5 x 5.
    //Preencha com 1 a diagonal principal e com 0 os demais elementos.
    //Escreva ao final a matriz obtida.

    //declaração da matriz
    int matriz[5][5];

    //preenchendo a matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    //exibir a matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
