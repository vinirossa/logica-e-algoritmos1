#include <math.h>

void ex5()
{
   printf("============ Exercício 5 ============\n\n");

   int operacao;
   float n1, n2;

   printf("------ Calculadora de Operações ------");

   printf("\n\nDigite dois números: ");
   scanf("%f%*c %f%*c", &n1, &n2);

   printf("\n<<< Operações Disponíveis >>>");
   printf("\n1 - Média entre os números digitados");
   printf("\n2 - Diferença do maior pelo menor");
   printf("\n3 - Produto entre os números digitados");
   printf("\n4 - Divisão do primeiro pelo segundo");

   printf("\n\nEscolha a operação desejada: ");
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
        printf("\nErro: Operação inválida.");
   }

   printf("\n\n");
}

