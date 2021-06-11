/*
Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. 
Depois modifique o programa para que ele mostre os números um ao lado do outro.
*/
#include <stdio.h>

int main()
{
    //um embaixo do outro
    for(int i = 1; i <= 20; i++){
        printf("%d\n",i);
    }
    //um ao lado do outro
    for(int i = 1; i <= 20; i++){
        printf("%d ",i);
    }

    return 0;
}
