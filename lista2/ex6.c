#include <stdio.h>

void ex6()
{
    printf("============ Exercício 6 ============\n\n");

    float velocidade;

    printf("Digite uma velocidade (km/h): ");
    scanf("%f%*c", &velocidade);

    printf("A sua conversão para m/s é: %.2f", velocidade / 36);

    printf("\n\n");
}




