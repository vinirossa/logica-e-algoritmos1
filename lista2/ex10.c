#include <stdio.h>
#define montante 780000.00

void ex10()
{
    printf("============ Exerc�cio 10 ============\n\n");

    printf("O pr�mio total � R$ %.2f.", montante);
    printf("\nO primeiro ganhador receber� 46%%, que equivale � R$ %.2f.", montante * 0.46);
    printf("\nO segundo ganhador receber� 32%%, que equivale � R$ %.2f.", montante * 0.32);
    printf("\nO terceiro ganhador receber� o restante, que equivale � R$ %.2f.", montante * 0.22);

    printf("\n\n");
}



