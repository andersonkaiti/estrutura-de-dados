/******************************************************************************

Implemente uma função que calcule a área da superfície e o volume de uma esfera de
raio R. Essa função deve obedecer ao protótipo:

void calc_esfera(float R, float *area, float *volume)

A área da superfície e o volume são dados, respectivamente, por:
A = 4 ∗ p ∗ R2
V = 4/3 ∗ p ∗ R3

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void calc_esfera (float R, float *area, float *volume) {
    *area = 4 * M_PI * pow(R, 2);
    *volume = 4/3 * M_PI * pow(R, 3);
}

int main()
{
    float R, area, volume;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &R);
    
    calc_esfera(R, &area, &volume);
    
    printf("A área é: %f.\n", area);
    printf("O volume é: %f.", volume);
    
    return 0;
}
