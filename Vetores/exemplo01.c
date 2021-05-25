#include <stdio.h>
int main(){
    //declaração de vetor com inserção de valores nas 5 posições dele
    int vetor[5] = {10,20,333,41,56};
    //percorrendo o vetor de 5 posições
    for(int i = 0; i < 5; i++){
        printf("Indice: %d | Valor: %d\n", i, vetor[i]);
    }
    
    return 0;
}


