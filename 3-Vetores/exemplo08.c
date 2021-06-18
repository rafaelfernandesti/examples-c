#include <stdio.h>

int main()
{
    //Dada uma sequência de n caracteres, imprimi-la na ordem inversa à da leitura.

    char sequencia[30];
    for(int i = 0; i < 30; i++){
        sequencia[i] = 'x';
    }
    
    printf("Digite uma sequência de caracteres: ");
    fgets(sequencia, 30, stdin);
    printf("%s\n",sequencia);
    for(int i = 5; i >= 0; i--){
        printf("%c",sequencia[i]);
    }
    return 0;
}
