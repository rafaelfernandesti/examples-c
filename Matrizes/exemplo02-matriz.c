#include <stdio.h>
void main (){
    //escreva um programa para exibir o maior valor numa matriz de valores inteiros
    int matriz[5][5] = {
        {0,1,2,3,4},
        {10,11,12,13,14},
        {20,21,52,23,24},
        {30,31,32,33,34},
        {40,41,42,43,44},
    };
    printf("Linha 3 | Coluna 0: %d\n",matriz[3][0]);
    int maior = 0;

    //percorrendo a matriz 5 x 5
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }
    printf("Maior valor da matriz: %d\n",maior);
}