#include <stdio.h>
#include <string.h> //biblioteca para manipulação de strings
int main()
{
    char nomeEscola[300];
    strcpy(nomeEscola, "Etec Zona Leste");
    int tamanhoVetor = strlen(nomeEscola);
    printf("%s contém %d caracteres", nomeEscola, tamanhoVetor);
    return 0;
}
