#include <stdio.h>

void ex3()
{
    printf("============ Exerc�cio 3 ============\n\n");

    int a, b, c;

    printf("Digite tr�s n�meros inteiros: ");
    scanf("%d%*c %d%*c %d%*c", &a, &b, &c);

    printf("\nA sua soma �: %d", a + b + c);

    printf("\n\n");
}


