#include <stdio.h>
#define pi 3.141592

void ex9()
{
    printf("============ Exerc�cio 9 ============\n\n");

    float angulo;

    printf("Digite um �ngulo em graus (�): ");
    scanf("%f%*c", &angulo);

    printf("Esse �ngulo em radianos � (rad): %.2f", angulo * (pi / 180));

    printf("\n\n");
}


