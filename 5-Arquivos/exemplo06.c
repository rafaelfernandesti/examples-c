#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char nomeDoArquivo[50];
    puts("Digite o nome do arquivo: ");
    gets(nomeDoArquivo);
    int tentaRemover = remove(nomeDoArquivo);
    if (tentaRemover == 0)
    {
        printf("Arquivo removido com sucesso!\n");
    }
    else
    {
        printf("Erro %d!\n", tentaRemover);
    }
    system("pause");
    return 0;
}
