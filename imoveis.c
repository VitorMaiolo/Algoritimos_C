#include <stdio.h>

int main()
{
    int valorImovel = 0;
    int tempo = 0;

    printf("Qual o valor do imovel?");
    scanf("%d", &valorImovel);

    printf("\nEm quantos anos sera pago o imovel");
    scanf("%d", &tempo);

    float parcelas = tempo * 12; 
    float valorParcelas = valorImovel / parcelas;

    printf("\nO valor das parcelas serao de: %.2f", valorParcelas);
    return 0;
}
