#include <stdio.h>
//Ler duas notas e realizar a média delas.
//Se o resultado da média for maior ou igual a 7 apresentar na tela que o aluno foi aprovado.
//Caso contrário, o aluno foi reprovado.



int main(){
    float nota1, nota2, mediaNotas;
    printf("Digite o primeiro valor:"); //saída de dados
    scanf("%f",&nota1); //leitura de dados
    printf("Digite o segundo valor:"); //saída de dados
    scanf("%f",&nota2); //leitura de dados
    mediaNotas = (nota1 + nota2)/2; // assign a value to a variable
    if(mediaNotas >= 7){
        printf("Aluno aprovado com media %f", mediaNotas);
    }else{
        printf("Aluno reprovado com media %f", mediaNotas);
    }
    return 0;
}


