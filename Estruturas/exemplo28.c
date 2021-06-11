#include <stdio.h>
//Crie um programa que exiba a tabuada do número escolhido, enquanto o usuário quiser ver tabuadas.
int main()
{
    int escolha = 1;
    int tabuada;
    int resultado;
    while(escolha != 0){
        printf("Digite a tabuada desejada: ");
        scanf("%d",&tabuada);
        for(int i = 1; i <= 10; i++){
            resultado = tabuada * i;
            printf("%d * %d = %d\n",tabuada, i, resultado);
        }
        printf("Deseja continuar? Digite '1' para SIM e '0' para NÃO");
        scanf("%d", &escolha);
    }
    return 0;
}
