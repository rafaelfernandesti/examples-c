#include <stdio.h>
//Ler duas notas e realizar a m�dia delas.
//Se o resultado da m�dia for maior ou igual a 7 apresentar na tela que o aluno foi aprovado.
//Caso contr�rio, o aluno foi reprovado.



int main(){
    float nota1, nota2, mediaNotas;
    printf("Digite o primeiro valor:"); //sa�da de dados
    scanf("%f",&nota1); //leitura de dados
    printf("Digite o segundo valor:"); //sa�da de dados
    scanf("%f",&nota2); //leitura de dados
    mediaNotas = (nota1 + nota2)/2; // assign a value to a variable
    if(mediaNotas >= 7){
        printf("Aluno aprovado com media %f", mediaNotas);
    }else{
        printf("Aluno reprovado com media %f", mediaNotas);
    }
    return 0;
}


