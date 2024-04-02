#include <stdio.h>

int main()
{
    float p1 = 0;
    float p2 = 0;
    int faltas = 0;

    printf("Digite a primeira nota:");
    scanf("%f", &p1);

    printf("\nDigite a segunda nota:");
    scanf("%f", &p2);

    printf("\nDigite a quantidade de faltas:");
    scanf("%d", &faltas);
    
    float media = (p1 + p2) / 2;

    if (media >= 6.0 && faltas <= 4)
    {
        printf("\nAprovado com media %.2f", media);
    } else if (media < 6.0  && faltas <= 4)
    {
    printf("\nEsta de recuperacao com media %.2f", media);    
    } else if (faltas > 4)
    {
    printf("\nReprovado, teve %d faltas", faltas);    
    }
    
    
    return 0;
}
