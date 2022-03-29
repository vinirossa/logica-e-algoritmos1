#include <math.h>

void ex5()
{
   printf("============ Exerc�cio 5 ============\n\n");

   int operacao;
   float n1, n2;

   printf("------ Calculadora de Opera��es ------");

   printf("\n\nDigite dois n�meros: ");
   scanf("%f%*c %f%*c", &n1, &n2);

   printf("\n<<< Opera��es Dispon�veis >>>");
   printf("\n1 - M�dia entre os n�meros digitados");
   printf("\n2 - Diferen�a do maior pelo menor");
   printf("\n3 - Produto entre os n�meros digitados");
   printf("\n4 - Divis�o do primeiro pelo segundo");

   printf("\n\nEscolha a opera��o desejada: ");
   scanf("%d%*c", &operacao);

   switch(operacao) {

   case 1:
      printf("\nResultado: %.2f", (n1 + n2) / 2);
      break;
   case 2:
      printf("\nResultado: %.2f", abs(n1 - n2));
      break;
   case 3:
      printf("\nResultado: %.2f", n1 * n2);
      break;
   case 4:
      printf("\nResultado: %.2f", n1 / n2);
      break;
   default :
        printf("\nErro: Opera��o inv�lida.");
   }

   printf("\n\n");
}

