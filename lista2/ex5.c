#include <stdio.h>

void ex5()
{
    printf("============ Exercício 5 ============\n\n");

    int idade, ano_atual;

    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);

    printf("Digite o ano atual: ");
    scanf("%d%*c", &ano_atual);

    printf("\nO seu ano de nascimento é: %d", ano_atual - idade);

    printf("\n\n");
}




