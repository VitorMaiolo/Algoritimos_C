/*
Exemplo de programação com informações 
de endereço
*/

#include <stdio.h>

int main() 
{
    /* defina as variáveis */
    char logradouro[] = "Rua Jose Robeto Giusti";
    int numero = 130; 
    char CEP[] = "13412-439"; 
    char bairro[] = "Sao Vicente II";
    char cidade[] = "Piracicaba";
    char estado[] = "Sao Paulo";

    /* exibe as informações na tela*/
    printf ("---Endereco do Cliente---");
    printf ("\n Logradouro: %s", logradouro);
    printf ("\n Numero: %d", numero);
    printf ("\n CEP: %s", CEP);
    printf ("\n Birro: %s", bairro);
    printf ("\n Cidade: %s", cidade);
    printf ("\n Estado: %s", estado);
    printf ("\n Confirme as informacoes de endereco");
    return (0);
}
