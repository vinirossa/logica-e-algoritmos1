#include <stdio.h>

void ex7()
{
    printf("============ Exerc�cio 7 ============\n\n");

    float real, dolar;

    printf("Digite uma valor (R$): ");
    scanf("%f%*c", &real);

    printf("Digite a cota��o do d�lar (US$): ");
    scanf("%f%*c", &dolar);

    printf("A valor em reais convertido em d�lares �: %.3f", real / dolar);

    printf("\n\n");
}
