#include <stdio.h>

void ex4()
{
    printf("============ Exerc�cio 4 ============\n\n");

    float a, b, c, d;

    printf("Digite quatro n�meros reais: ");
    scanf("%f%*c %f%*c %f%*c %f%*c", &a, &b, &c, &d);

    printf("\nA sua m�dia aritm�tica �: %.2f", (a + b + c + d) / 4);

    printf("\n\n");
}



