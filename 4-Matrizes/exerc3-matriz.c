int main(int argc, char const *argv[])
{
    //ENUNCIADO - Leia uma matriz 4 x 4, imprima a matriz
    //e retorne a localização (linha e a coluna) do maior valor.

    int maior = 0, posicaoIMaior, posicaoJMaior;
    //criação da matriz
    int matriz[4][4];

    //populando (inserindo valores na) matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao %d | %d: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //exibir a matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                posicaoIMaior = i;
                posicaoJMaior = j;
            }
        }
        printf("\n");
    }


    //exibindo posições do maior valor
    printf("\n%d %d",posicaoIMaior, posicaoJMaior);


    return 0;
}
