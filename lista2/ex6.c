#include <stdio.h>

void ex6()
{
    printf("============ Exerc�cio 6 ============\n\n");

    float velocidade;

    printf("Digite uma velocidade (km/h): ");
    scanf("%f%*c", &velocidade);

    printf("A sua convers�o para m/s �: %.2f", velocidade / 36);

    printf("\n\n");
}




