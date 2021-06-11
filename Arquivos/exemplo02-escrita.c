#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *arquivo;
    char s[100];
    char mensagem[100];
    puts("Digite o nome do arquivo: ");
    gets(s);
    puts("Digite a mensagem: ");
    gets(mensagem);
    arquivo = fopen(s,"w");
    if(arquivo == NULL){
        printf("Erro de abertura.\n");
    }else{
        fprintf(arquivo,"%s\n",mensagem);
        fclose(arquivo);
    }
    
    system("pause");
    return 0;
}
