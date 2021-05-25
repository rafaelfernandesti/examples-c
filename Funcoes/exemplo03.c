#include <stdio.h>
int fatorial(int valor) {
    int resultado;
    if(valor == 0){
        resultado = 1;
    }
    else{
        resultado = valor * fatorial(valor-1);
    }
    return resultado;
}
int main() {
    int numero = 5;
    int resultado = fatorial(numero);
    printf("O fatorial de %d eh %d \n", numero, resultado);
}


