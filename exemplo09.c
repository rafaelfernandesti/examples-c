#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //para aceitar acentos

int main(){
    setlocale(LC_ALL,""); //para aceitar acentos
    int i = 1;
    do{
        printf("N�mero: %d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}


