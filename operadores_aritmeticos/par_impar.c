#include <stdio.h>

int main()
{
    int numero = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    if (numero%2 == 0)
    {
        printf("Esse numero eh par!");
    } else {
        printf("Esse numero eh impar!");
    }
    
    return 0;
}
