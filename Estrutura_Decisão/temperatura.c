#include <stdio.h>

int main()
{
    float temperatura = 0;

    printf("Digite a temperatura\n");
    scanf("%f", &temperatura);

    if (temperatura <= 13)
    {
        printf("\nFrio");
    }
    else if (temperatura > 13 && temperatura <= 25)
    {
        printf("\nAgradavel");
    }
    else if (temperatura > 25 && temperatura <= 32)
    {
        printf("\nCalor");
    }
    else if (temperatura > 32)
    {
        printf("\nMuito calor");
    }
    return 0;
}
