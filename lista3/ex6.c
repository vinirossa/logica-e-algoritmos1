#include <math.h>

void ex6()
{
   printf("============ Exerc�cio 6 ============\n\n");

   int operacao;
   float n1, n2;

   printf("------ Calculadora de Opera��es ------");

   printf("\n\nDigite dois n�meros: ");
   scanf("%f%*c %f%*c", &n1, &n2);

   printf("\n<<< Opera��es Dispon�veis >>>");
   printf("\n1 - O primeiro n�mero elevado ao segundo n�mero");
   printf("\n2 - Raiz quadrada de cada um dos n�meros");
   printf("\n3 - Raiz c�bica de cada um dos n�meros");
   printf("\n\nEscolha a opera��o desejada: ");
   scanf("%d%*c", &operacao);

   switch(operacao) {

   case 1:
      printf("\nResultado: %.2f", pow(n1, n2));
      break;
   case 2:
      printf("\nResultado: %.2f e %.2f", sqrt(n1), sqrt(n2));
      break;
   case 3:
      printf("\nResultado: %.2f e %.2f", cbrt(n1), cbrt(n2));
      break;
   default :
        printf("\nErro: Opera��o inv�lida.");
   }

   printf("\n\n");
}

