#include <stdio.h>
#define pi 3.141592

void ex11()
{
    printf("============ Exerc�cio 11 ============\n\n");

    float raio;

    printf("Digite um raio em cent�metros (cm): ");
    scanf("%f%*c", &raio);

    printf("A �rea do c�rculo formado por esse raio � %.2f cm�.", pi * raio * raio);

    printf("\n\n");
}



