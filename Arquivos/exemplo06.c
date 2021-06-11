#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char arquivo[50];
    puts("Digite o nome do arquivo: ");
    gets(arquivo);
    int tentaRemover = remove(arquivo);
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
