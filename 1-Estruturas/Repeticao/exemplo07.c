#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //para aceitar acentos

int main(){
    setlocale(LC_ALL,""); //para aceitar acentos
    for(int i = 1; i <=10; i++){
        printf("Número: %d\n", i);
    }
    return 0;
}


