#include <stdio.h>
//Ler um caractere que indique o sexo da pessoa.
//Se o sexo for igual a �M� (ou �m�), apresentar a mensagem �Sexo masculino�.
//Se o sexo for �F� (ou �f�), apresentar �Sexo feminino�.
//Se o usu�rio digitar outra letra, apresentar �Sexo n�o definido�.


int main(){
    char sexo;
    printf("Digite 'M' para masculino ou 'F' para feminino:"); //sa�da de dados
    scanf("%c",&sexo); //leitura de dados
    switch(sexo){
        case 'M':
            printf("Sexo masculino");
            break;
        case 'm':
            printf("Sexo masculino");
            break;
        case 'F':
            printf("Sexo feminino");
            break;
        case 'f':
            printf("Sexo feminino");
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}


