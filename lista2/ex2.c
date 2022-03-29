#include <stdio.h>

void ex2()
{
    printf("============ Exercício 2 ============\n\n");

    float n;

    printf("Digite um número real: ");
    scanf("%f%*c", &n);

    printf("\nA sua quinta parte é: %.2f", n / 5);

    printf("\n\n");
}

