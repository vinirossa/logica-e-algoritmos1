#include <stdio.h>

void ex1()
{
    printf("============ Exerc�cio 1 ============\n\n");

    int n;

    printf("Digite um n�mero inteiro: ");
    scanf("%d%*c", &n);

    printf("\nO seu antecessor �: %d", n -1);
    printf("\nO seu sucessor �: %d", n + 1);

    printf("\n\n");
}
