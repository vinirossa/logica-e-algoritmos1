void ex1()
{
   printf("============ Exerc�cio 1 ============\n\n");

   float n1, n2, n3, n4, media;

   printf("Digite 4 notas: ");
   scanf("%f%*c %f%*c %f%*c %f%*c", &n1, &n2, &n3, &n4);

   media = (n1 + n2 + n3 + n4) / 4;

   printf("\nSua m�dia � %.2f ", media);

   if (media < 7) {
        printf("e voc� foi reprovado.");
   } else {
        printf("e voc� foi aprovado.");
   }

   printf("\n\n");
}
