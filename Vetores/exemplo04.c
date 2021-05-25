#include <stdio.h>
#include <stdlib.h>
int main() {
    char texto[50];
    int i;
    printf("Digite um conjunto de caracteres: \n");
    gets(texto);
    for(i=0; texto[i] != '\0'; i++){
        putchar(texto[i]);
        printf("\n");
        
    }
    printf("O numero de caracteres e %d \n", i);
    return 0;
}

