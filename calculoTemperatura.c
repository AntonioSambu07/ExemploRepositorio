#include <stdio.h>

typedef struct 
{
    float temp;

}tTemperatura;

void convertTemp(float c)
{
    tTemperatura tempKelvin;
    tempKelvin.temp = (1.8*c) + 32;
    printf("A temperatura convertida para kelvin eh:%.2f", tempKelvin.temp);
}

int main(){

    tTemperatura t1;
    float tempCelsio;

    printf("Digite valor da temperatura em celsius!\n");
    scanf("%f", &tempCelsio);

    convertTemp(tempCelsio);

    return 0;
}