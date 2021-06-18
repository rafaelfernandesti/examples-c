#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *arquivo;
    char s[100];
    char conteudoArquivo[128];
    puts("Digite o nome do arquivo: ");
    gets(s);
    arquivo = fopen(s, "r");
    if (arquivo == NULL)
    {
        printf("Erro de abertura.\n");
        exit(1); //finalização forçada do programa
    }
    else
    {
        fgets(conteudoArquivo, 80, arquivo); //leitura de uma linha
        while (!feof(arquivo)) //feof -> End Of File, irá percorrer as linhas até chegar ao fim do arquivo
        {
            printf("%s", conteudoArquivo); //impressão da linha lida
            fgets(conteudoArquivo, 80, arquivo); //nova linha obtida
        }
        fclose(arquivo);
    }

    system("pause");
    return 0;
}
