#include <stdio.h>

//Algoritmo que calcula o total da lista de compra.

int main()
{
    //Declaração de variáveis 
    char cocacola[] = "Coca Cola Zero";
    char doritos[] = "Doritos";
    char bis[] = "Bis";

    float valorCoca = 9.99;
    float valorDoritos = 13.99;
    float valorBis = 5.49;

    //Processamento 
    float totalLista = valorCoca + valorDoritos + valorBis;

    //Saida
    printf("O valor da lista e: %.2f", totalLista);
    return 0;
}
