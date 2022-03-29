#include <stdio.h>

void ex3()
{
    printf("============ Exercício 3 ============\n\n");

    int a, b, c;

    printf("Digite três números inteiros: ");
    scanf("%d%*c %d%*c %d%*c", &a, &b, &c);

    printf("\nA sua soma é: %d", a + b + c);

    printf("\n\n");
}


