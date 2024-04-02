#include <stdio.h>

int main()
{
    int mes = 0;

    printf("Qual o numero do mes?");
    scanf("%i", &mes);

    if (mes == 1) 
    {
        printf("Estamos em Janeiro");
    }
    else if (mes == 2)
    {
        printf("Estamos em Fevereiro");
    }
    else if (mes == 3)
    {
        printf("Estamos em Marco");     
    }
    else if (mes == 4)
    {
        printf("Estamos em Abril");
    }
    else if (mes == 5)
    {
        printf("Estamos em Maio");
    }
    else if (mes == 6)
    {
        printf("Estamos em Junho");
    }
    else if (mes == 7) 
    {
        printf("Estamos em Julho");
    }
    else if (mes == 8)
    {
        printf("Estamos em Agosto");
    }
    else if (mes == 9)
    {
        printf("Estamos em Setembro");     
    }
    else if (mes == 10)
    {
        printf("Estamos em Outubro");
    }
    else if (mes == 11)
    {
        printf("Estamos em Novembro");
    }
    else if (mes == 12)
    {
        printf("Estamos em Dezembro");
    }
    else if (mes > 12)
    {
        printf("Mes invalido");
    }
    
    return 0;
}
