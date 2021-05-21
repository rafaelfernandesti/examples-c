#include <stdio.h>

int main(){
    int numero = 2;

    switch(numero){
        case 1:
            printf("Bloco 1 executado");
            break; //break quebra a execução do switch/case
        case 2:
            printf("Bloco 2 executado");
            break;
        case 3:
            printf("Bloco 3 executado");
            break;
        default:
            printf("Bloco default executado");
            break;
    }
    return 0;
}
