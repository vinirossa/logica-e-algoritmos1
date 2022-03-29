#include <stdio.h>
#define montante 780000.00

void ex10()
{
    printf("============ Exercício 10 ============\n\n");

    printf("O prêmio total é R$ %.2f.", montante);
    printf("\nO primeiro ganhador receberá 46%%, que equivale à R$ %.2f.", montante * 0.46);
    printf("\nO segundo ganhador receberá 32%%, que equivale à R$ %.2f.", montante * 0.32);
    printf("\nO terceiro ganhador receberá o restante, que equivale à R$ %.2f.", montante * 0.22);

    printf("\n\n");
}



