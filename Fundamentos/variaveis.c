/* 
Exemplo de algoritmo com declaração
de variáveis em C
*/

#include <stdio.h>

int main()
{
    /*define as variáveis*/
    int idade = 16; 
    float altura = 1.70; 
    char *letra = "V"; 
    char nome[] = "Vitor"; 


    /* exibe na tela as informações*/
    printf("---Meus dados pessoais---");
    printf("\n Meu nome: %s", nome);
    printf("\n Minha letra inicial: %s", letra);
    printf("\n Minha idade: %d", idade);
    printf("\n Minha altura: %.2f", altura);
 
    return 0;
}
