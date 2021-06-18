#include <stdio.h>

int main()
{
    // Crie um programa que leia uma senha e faça a encriptação dessa senha
    // A regra será exibir a senha criptograda, exibindo-a como sendo
    // 1 caractere a frente da senha digitada
    char senha[100];
    char senhaCripto[100];

    printf("Cadastre sua senha: ");
    fgets(senha, 100, stdin);
    printf("Senha original: %s\n", senha);

    for (int i = 0; i < 100; i++)
    {
        senhaCripto[i] = senha[i] + 1; //criptografando a senha
    }
    printf("Senha criptografada: %s\n", senhaCripto);
    return 0;
}
