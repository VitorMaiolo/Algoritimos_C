/*
Calcula a nota do aluno
*/

#include <stdio.h>

int main()
{
    printf(" Calcula a nota do aluno");

    // Declração de variáveis
    float prova1 = 0;
    float prova2 = 0; 

    //Declaração das notas das avaliações 
    printf ("\n Digite a nota da prova 1");
    scanf("%f", &prova1);

    printf ("\n Digite a nota da prova 2");
    scanf("%f", &prova2);

    //Precossamento dos calculos
    float soma = prova1 + prova2;
    float media = soma / 2;

    //Exibe a média do aluno
    printf("A media do aluno e: %.2f", media);

    if (media >= 7)
    {
        printf("\n Voce foi aprovado");
    }
    
    if (media < 7)
    {
        printf("\n Voce foi reprovado");
    }
    
    return 0;
}
