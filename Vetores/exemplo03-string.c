#include <stdio.h>
int main(){
    char frase[50];
    int i;
    for (i = 0; i < 26; i++){
        frase[i] = 'A'+i; //usando a tabela ASCII para preencher o vetor/string
    }
    frase[i] = '\0';
    printf("A string contem %s\n",frase);
}

