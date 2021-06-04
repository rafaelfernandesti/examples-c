#include <stdio.h>
int main(){
    char frase[50]; //definindo string
    int i;
    for (i = 0; i < 40; i++){
        frase[i] = 'A'+i; //usando a tabela ASCII para preencher o vetor/string
    }
    frase[i] = '\0';
    printf("A string contem %s\n",frase);
}