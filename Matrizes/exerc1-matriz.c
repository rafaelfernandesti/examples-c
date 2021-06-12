int main(int argc, char const *argv[])
{
    //ENUNCIADO - Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
    int cont = 0; //inicializando contador em 0
    //criação da matriz
    int matriz[4][4];
    
    //populando (inserindo valores na) matriz
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da posicao %d | %d: \n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //percorrer a matriz
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > 10){
                cont++; //se achou valor maior que 10, contar mais um
            }
        }
    }
    //exibir a saída
    printf("Quantidade de numeros maiores que 10: %d",cont);
    return 0;
}
