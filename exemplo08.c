#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //para aceitar acentos

int main(){
    setlocale(LC_ALL,""); //para aceitar acentos
    int i = 1;
    while(i <= 10){
        printf("Número: %d\n", i);
        i++;
    }

    return 0;
}


