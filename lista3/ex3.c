void ex3()
{
   printf("============ Exerc�cio 3 ============\n\n");

   int n1, n2;

   printf("Digite 2 n�meros: ");
   scanf("%d%*c %d%*c", &n1, &n2);

   if (n1 < n2) {
        printf("\nO primeiro n�mero � menor.");
   } else if (n2 < n1) {
        printf("\nO segundo n�mero � menor.");
   } else {
        printf("\nOs n�meros s�o iguais.");
   }

   printf("\n\n");
}

