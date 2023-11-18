#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x, y;
    float raio;

}Coordenadas;

void imprimiResultado(Coordenadas alvo, Coordenadas disparo);

void lerCoordenadas()
{
    Coordenadas alvo, disparo;

    printf("Digite as coordenadas de alvo!\n");
    scanf("%f%f%f", &alvo.x, &alvo.y, &alvo.raio);

    printf("Digite as coordenadas de alvo!\n");
    scanf("%f%f%f", &disparo.x, &disparo.y, &disparo.raio);
   
    imprimiResultado(alvo, disparo);
}

void imprimiResultado(Coordenadas alvo, Coordenadas disparo)
{
    float dist;

    printf("As coordenadas sao:%.2f %.2f %.2f\n", alvo.x, alvo.y, alvo.raio);
    printf("As coordenadas sao:%.2f %.2f %.2f\n", disparo.x, disparo.y, disparo.raio);
}

int main()
{
    //Coordenadas coord;
    

   lerCoordenadas();
    //imprimiResultado(coord);

    return 0;
}
