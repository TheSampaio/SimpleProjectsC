#include <stdio.h>
#include <math.h>

#define PI 3.141592

float Energia(float hora)
{
    return sin(hora / 24 * PI);
}

float Pontos(float altura)
{
    return 10 * altura * altura;
}

float Rebotes(float altura, float peso)
{
    return 5 * altura + sqrt(peso);
}

float Eficiencia(float pHora, float pAltura, float pPeso)
{
    float energia = Energia(pHora);
    float pontos = Pontos(pAltura);
    float rebotes = Rebotes(pAltura, pPeso);

    return energia * (pontos + rebotes);
}

int main() // Função principal
{
    float resuEficiencia = Eficiencia(12, 2, 100);
    printf("\nA eficiencia e: %.2f", resuEficiencia);

    return 0;
}
