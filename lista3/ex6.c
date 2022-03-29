#include <math.h>

void ex6()
{
   printf("============ Exercício 6 ============\n\n");

   int operacao;
   float n1, n2;

   printf("------ Calculadora de Operações ------");

   printf("\n\nDigite dois números: ");
   scanf("%f%*c %f%*c", &n1, &n2);

   printf("\n<<< Operações Disponíveis >>>");
   printf("\n1 - O primeiro número elevado ao segundo número");
   printf("\n2 - Raiz quadrada de cada um dos números");
   printf("\n3 - Raiz cúbica de cada um dos números");
   printf("\n\nEscolha a operação desejada: ");
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
        printf("\nErro: Operação inválida.");
   }

   printf("\n\n");
}

