#include <stdio.h>

void ex2()
{
    char nome[30];
    char endereco[100];
    char cep[8];
    char telefone[30];

    printf("============ Exerc�cio 2 ============\n\n");
    printf("Digite suas informa��es abaixo:\n\n");
    printf("Nome: ");
    scanf("%[^\n]%*c", &nome);
    printf("Endere�o: ");
    scanf("%[^\n]%*c", &endereco);
    printf("CEP: ");
    scanf("%s%*c", &cep);
    printf("Telefone: ");
    scanf("%[^\n]%*c", &telefone);

    printf("\n------------------------\n\n");
    printf("Valores digitados:\n\n");
    printf("Nome - %s\n", nome);
    printf("Endere�o - %s\n", endereco);
    printf("CEP - %s\n", cep);
    printf("Telefone - %s\n", telefone);

    printf("\n");
}
