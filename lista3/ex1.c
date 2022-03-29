void ex1()
{
   printf("============ Exercício 1 ============\n\n");

   float n1, n2, n3, n4, media;

   printf("Digite 4 notas: ");
   scanf("%f%*c %f%*c %f%*c %f%*c", &n1, &n2, &n3, &n4);

   media = (n1 + n2 + n3 + n4) / 4;

   printf("\nSua média é %.2f ", media);

   if (media < 7) {
        printf("e você foi reprovado.");
   } else {
        printf("e você foi aprovado.");
   }

   printf("\n\n");
}
