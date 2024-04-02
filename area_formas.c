#include <stdio.h>

int main()
{


    //Script quadrado
    float ladoQuad = 0;
    printf("Qual o valor do lado do quadrado em centimetros?");
    scanf("%f", &ladoQuad);
    float areaQuad = ladoQuad * ladoQuad;

    printf("\nA area do quadrado e: %.2f", areaQuad);

    //Script circulo
    float raioCir = 0;
    printf("\nQual o valor do raio do criculo em centimetros?");
    scanf("%f", &raioCir);
    float areaCirc = 3.14 * raioCir * raioCir;

    printf("\nA area da circulo e: %.2f", areaCirc);
    return 0;
}
