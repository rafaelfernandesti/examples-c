#include <stdio.h>

int main(){
    int numero = 10;
    switch(numero){
        case 1:
            printf("Numero igual a 1");
            break;
        case 2:
            printf("Numero igual a 2");
            break;
        case 3:
            printf("Numero igual a 3");
            break;
        default:
            printf("Nao eh 1, nem 2, nem 3.");
            break;
    }
    return 0;
}


