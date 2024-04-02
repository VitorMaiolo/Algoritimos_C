#include <stdio.h>

int main()
{
    //Define as variáves.
    float salario = 0;
    float percentual_aumento = 0;

    //Pergunta ao usuário os dados de salário e aumento.
    printf ("Qual o salario atual?");
    scanf("%f", &salario);
    printf("\n Qual o percentual de aumento?");
    scanf("%f", &percentual_aumento);

    // Define as variáveis de modificação do salário.
    float porcentagem = percentual_aumento / 100;
    float aumento = salario * porcentagem; 
    float novo_salario = salario + aumento;

    //Exibe na tela o novo salário.
    printf("\n Seu novo salario e de: %.2f", novo_salario);

    return 0;
}
