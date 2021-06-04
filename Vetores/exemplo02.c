#include <stdio.h>
#include <string.h>
void inicializa(int s[5]){
    for(int i = 0; i<5; i++){
        s[i] = i;
    }
}
void mostra(int s[5]){
    for(int i = 0; i<5; i++){
        printf("O vetor ficou assim: %d\n",s[i]);
    }
}
int main(){
    int vetor[5];
    inicializa(vetor);
    mostra(vetor);
    return 0;
}

