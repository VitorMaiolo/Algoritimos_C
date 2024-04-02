#include <stdio.h>

int main()
{
    int mes = 0;

    printf("Digite o numero de mes");
    scanf("%i", &mes);

    switch (mes)
    {
        case 1:
            printf("Estamos em Janeiro");
            break;

        case 2: 
            printf("Estamos em Fevereiro");
            break;

        case 3:
            printf("Estamos em Marco");
            break;

        case 4:
            printf("Estamos em Abril");
            break;

        case 5:
            printf("Estamos em Maio"):
            break;

        case 6: 
            printf("Estamos em Junho");
            break;

        case 7: 
            printf("Estamos em Julho");
            break;
        
        case 8:
            printf("Estamos em Agosto");
            break;

        case 9:
            printf("Estamos em Setembro");
            break;

        case 10:
            printf("Estamos em Outubro");
            break;

        case 11:
            printf("Estamos em Novembro");
            break;

        case 12: 
            printf("Estamos em Dezembro");
            break;

        default:
            printf("Mes Invalido");
            break;
    }
    return 0;
}
