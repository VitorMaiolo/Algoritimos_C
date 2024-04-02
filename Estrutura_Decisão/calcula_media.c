#include <stdio.h>

int main()
{
    //Variáveis
    float p1 = 0;
    float p2 = 0;

    //Processamento de dados
    printf("Insira a nota da primeira avaliacao do aluno.");
    scanf("%f", &p1);

    printf("\nInsira a nota da segunda avaliacao do aluno.");
    scanf("%f", &p2);    

    float media = (p1 + p2)/2;

    //Saída
    if (media >= 6.0)
    {
        printf("\nO aluno foi aprovado com media: %.2f", media);
    } else {
        printf("\nO aluno foi reprovado com media: %.2f", media);
    }
    
    return 0;
}
