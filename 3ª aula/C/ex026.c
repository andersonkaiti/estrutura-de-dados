/******************************************************************************

Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo
Ax2 + Bx + C = 0. Lembrando que:

    X = −B ± √Δ /2A

Onde

    Δ = B2 − 4AC

A variável A tem que ser diferente de zero.
    • Se Δ < 0 não existe real.
    • Se Δ = 0 existe uma raiz real.
    • Se Δ ≥ 0 existem duas raízes reais.

Essa função deve obedecer ao seguinte protótipo:

int raizes(float A,float B,float C,float * X1,float * X2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da
equação. Se existirem raízes reais, seus valores devem ser armazenados nas variáveis
apontadas por X1 e X2.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void raizes (float A, float B, float C, float *X1, float *X2) {
    int d;
    d = pow(B, 2) - 4 * A * C;
    *X1 = (-B + sqrt(d)) / 2 * A;
    *X2 = (-B - sqrt(d)) / 2 * A;
}

int main()
{
    float a, b, c, r1, r2;
    
    printf("Digite os valores a, b e c.");
    
    printf("a: ");
    scanf("%f", &a);
    
    printf("b: ");
    scanf("%f", &b);
    
    printf("c: ");
    scanf("%f", &c);
    
    raizes(a, b, c, &r1, &r2);
    
    return 0;
}
