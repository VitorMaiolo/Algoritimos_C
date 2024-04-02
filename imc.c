#include <stdio.h>

int main()
{
    //Declaração de variáveis.
    float peso = 0;
    float altura = 0;

    //Processamento de dados.
    printf("Qual seu peso?");
    scanf("%f", &peso);

    printf("\nQual sua altura?");
    scanf("%f", &altura);

    float imc = peso/(altura * altura);
    
    if (imc < 18.5){
        printf("Voce esta magro");
    }

     if (imc >= 18.6 && imc <= 24.9){
        printf("Voce esta com peso normal");
    }

     if (imc >= 25 && imc <= 29.9){
        printf("Voce esta com sobrepeso");
    }

     if (imc >= 30 && imc <= 34.9){
        printf("Voce esta com obesidade grau 1");
    }

     if (imc >= 35 && imc <= 39.9){
        printf("Voce esta com obesidade grau 2");
    }

     if (imc >= 40){
        printf("Voce esta com obesidade grau 3");
    }
    return 0;
}
