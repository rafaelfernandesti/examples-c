#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *arquivo;
    char s[100];
    char mensagem[100];
    puts("Digite o nome do arquivo: ");
    gets(s);
    arquivo = fopen(s, "w");
    if (arquivo == NULL)
    {
        printf("Erro de abertura.\n");
        exit(1); //finalização forçada do programa
    }
    do
    {
        //trecho será repetido até programa encontrar uma quebra de linha (ENTER) sozinha.
        gets(mensagem);
        strcat(mensagem, "\n");
        fputs(mensagem, arquivo);
    } while (*mensagem != '\n');
    system("pause");
    return 0;
}
