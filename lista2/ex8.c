#include <stdio.h>

void ex8()
{
    printf("============ Exerc�cio 8 ============\n\n");

    float temp;

    printf("Digite uma temperatura em graus Celsius (�C): ");
    scanf("%f%*c", &temp);

    printf("Essa temperatura em Fahrenheit � (�F): %.3f", temp * (9.0/5.0) + 32.0);

    printf("\n\n");
}

