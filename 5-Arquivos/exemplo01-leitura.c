#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE * arquivo; //instanciacao/criacao da variavel
    char s[100];
    puts("Digite o nome do arquivo: "); //mostra mensagem na tela
    gets(s); //faz a leitura de uma string (cadeia de caracteres)
    arquivo = fopen(s,"r");//R representa o modo de leitura (READ)
    if(arquivo == NULL){
        printf("Nao foi possivel abrir o arquivo %s!\n",s);
    }else{
        printf("Arquivo %s aberto.\n",s);
        fclose(arquivo);
        printf("Arquivo %s fechado.\n",s);
    }
    return 0;
}
