#include <stdio.h>

int main()
{
    //Declaração de varáveis.
    float celcius = 0;

    //Processamento de dados.
    printf ("Insira a temperatura em graus celcius");
    scanf ("%f", &celcius);
    
    float fahrenheit = (celcius * 1.8) + 32;
    printf ("\nA temperatura em Fahrenheit e: %.2f", fahrenheit);
    return 0;
}
