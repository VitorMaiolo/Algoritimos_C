#include <stdio.h>

int main()
{
    //Variáveis
    int idade = 0;

    printf("Insira a sua idade");
    scanf("%d", &idade);

    //Saída
    if (idade >= 18){
        printf("Voce e maior de idade, pode trabalhar!");
    } else{
        printf("Voce ainda e menor de idade, vai estudar!");
    }
    
    return 0;
}
