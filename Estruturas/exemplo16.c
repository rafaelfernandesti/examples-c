#include <stdio.h>
//Ler um caractere que indique o sexo da pessoa.
//Se o sexo for igual a �M� (ou �m�), apresentar a mensagem �Sexo masculino�.
//Se o sexo for �F� (ou �f�), apresentar �Sexo feminino�.
//Se o usu�rio digitar outra letra, apresentar �Sexo n�o definido�.

int main(){
    char sexo;
    printf("Digite 'M' para masculino ou 'F' para feminino:"); //sa�da de dados
    scanf("%c",&sexo); //leitura de dados
    if(sexo == 'M' || sexo == 'm'){
        printf("Sexo masculino");
    }else{
        if(sexo == 'F' || sexo == 'f' ){
            printf("Sexo feminino");
        }else{
            printf("Sexo nao reconhecido");
        }
    }
    return 0;
}


