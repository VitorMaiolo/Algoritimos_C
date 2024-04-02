#include <stdio.h>

int main()
{
    //Declaração de variáveis.
    float reais = 0;
     
    printf("Quantos Reais deseja comprar de Dollar?");
    scanf("%2f", &reais);

    float dollar = reais / 4.98;

    printf("\nVoce recebera em dollar um valor de: %.2f", dollar);
    

    return 0;
}
