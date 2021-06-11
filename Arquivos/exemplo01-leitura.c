#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *arquivo;
    char s[100];
    puts("Digite o nome do arquivo: ");
    gets(s);
    arquivo = fopen(s,"r");
    if(arquivo == NULL){
        printf("Nao foi possivel abrir o arquivo %s!\n",s);
    }else{
        printf("Arquivo %s aberto.\n",s);
        fclose(arquivo);
    }
    system("pause");
    return 0;
}
