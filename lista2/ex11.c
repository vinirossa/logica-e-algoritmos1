#include <stdio.h>
#define pi 3.141592

void ex11()
{
    printf("============ Exercício 11 ============\n\n");

    float raio;

    printf("Digite um raio em centímetros (cm): ");
    scanf("%f%*c", &raio);

    printf("A área do círculo formado por esse raio é %.2f cm².", pi * raio * raio);

    printf("\n\n");
}



