#include <stdio.h>

void ex1()
{
    printf("============ Exercício 1 ============\n\n");

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d%*c", &n);

    printf("\nO seu antecessor é: %d", n -1);
    printf("\nO seu sucessor é: %d", n + 1);

    printf("\n\n");
}
