#include <stdio.h>

int main()
{
    int dinheiro = 1;
    int chuva = 0;

    if (dinheiro == 1 && chuva == 0)
    {
        printf("Vou a sorveteria no final de semana");
    } 
    
    else if (dinheiro == 0 || chuva == 1)
    {
        printf("Nao vou a sorveteria no final de semana")
    }
    
    
    return 0;
}
