int main(int argc, char const *argv[])
{
    //Crie um programa para ler 4 notas e exibir a média delas
    float media;
    float notas[4]; //declaração do vetor
    for(int posicao = 0; posicao < 4; posicao++){
        printf("Digite a %da nota: ",(posicao+1));
        scanf("%f",&notas[posicao]);
    }
    media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
    printf("A media eh: %f", media);
    return 0;
}
