void ex4()
{
   printf("============ Exerc�cio 4 ============\n\n");

    int n1, n2, n3;

    printf("Digite 3 n�meros: ");
    scanf("%d%*c %d%*c %d%*c", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        printf("\nO primeiro n�mero � o maior.");
    }
    else if(n2 >= n1 && n2 >= n3){
        printf("\nO segundo n�mero � o maior.");
    }
    else if(n3 >= n1 && n3 >= n2){
        printf("\nO terceiro n�mero � maior.");
    }

   printf("\n\n");
}


