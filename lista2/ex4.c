#include <stdio.h>

void ex4()
{
    printf("============ Exercício 4 ============\n\n");

    float a, b, c, d;

    printf("Digite quatro números reais: ");
    scanf("%f%*c %f%*c %f%*c %f%*c", &a, &b, &c, &d);

    printf("\nA sua média aritmética é: %.2f", (a + b + c + d) / 4);

    printf("\n\n");
}



