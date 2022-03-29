#include <stdio.h>
#define pi 3.141592

void ex9()
{
    printf("============ Exercício 9 ============\n\n");

    float angulo;

    printf("Digite um ângulo em graus (°): ");
    scanf("%f%*c", &angulo);

    printf("Esse ângulo em radianos é (rad): %.2f", angulo * (pi / 180));

    printf("\n\n");
}


