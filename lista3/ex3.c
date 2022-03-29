void ex3()
{
   printf("============ Exercício 3 ============\n\n");

   int n1, n2;

   printf("Digite 2 números: ");
   scanf("%d%*c %d%*c", &n1, &n2);

   if (n1 < n2) {
        printf("\nO primeiro número é menor.");
   } else if (n2 < n1) {
        printf("\nO segundo número é menor.");
   } else {
        printf("\nOs números são iguais.");
   }

   printf("\n\n");
}

