#include <stdio.h>

int main()
{
    //Declaração de variáveis
    float distancia = 0;
    float kmLitroEta = 0;
    float kmLitroGas = 0;
    float litroEtanol = 3.42;
    float litroGasolina = 4.89;
     
    //Processamento
    printf("Qual a media de km que seu carro faz por litro de etanol?");
    scanf("%f", &kmLitroEta);

    printf("Qual a media de km que seu carro faz por litro de gasolina?");
    scanf("%f", &kmLitroGas);

    printf("Qual a distancia do seu percurso?");
    scanf("%f", &distancia);

    float qtdeLitroEta = distancia/kmLitroEta;
    float qtdeLitroGas = distancia/kmLitroGas;

    float valorEtanol = qtdeLitroEta*litroEtanol;
    float valorGasolina = qtdeLitroGas*litroGasolina;

    printf("\nO valor pago pela gasolina sera R$ %.2f", valorGasolina);
    printf("\nO valor pago pelo etanol sera R$ %.2f", valorEtanol);
    return 0;
}
