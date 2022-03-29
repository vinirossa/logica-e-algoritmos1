#include <stdio.h>

void ex7()
{
    printf("============ Exercício 7 ============\n\n");

    float real, dolar;

    printf("Digite uma valor (R$): ");
    scanf("%f%*c", &real);

    printf("Digite a cotação do dólar (US$): ");
    scanf("%f%*c", &dolar);

    printf("A valor em reais convertido em dólares é: %.3f", real / dolar);

    printf("\n\n");
}
