void ex4()
{
   printf("============ Exercício 4 ============\n\n");

    int n1, n2, n3;

    printf("Digite 3 números: ");
    scanf("%d%*c %d%*c %d%*c", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        printf("\nO primeiro número é o maior.");
    }
    else if(n2 >= n1 && n2 >= n3){
        printf("\nO segundo número é o maior.");
    }
    else if(n3 >= n1 && n3 >= n2){
        printf("\nO terceiro número é maior.");
    }

   printf("\n\n");
}


