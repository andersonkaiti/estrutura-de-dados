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

int raizes (float A, float B, float C, float *X1, float *X2) {
    float d = pow(B, 2) - 4 * A * C;
    
    if (d < 0) {
        return 0;
        
    } else if (d == 0) {
        *X1 = (-B + sqrt(d)) / (2 * A);
        return 1;
    } else if (d >= 0) {
        *X1 = (-B + sqrt(d)) / (2 * A);
        *X2 = (-B - sqrt(d)) / (2 * A);
        return 2;
    }
}

int main()
{
    float A, B, C, X1, X2, R;
    
    printf("Digite os valores a, b e c.\n");
    
    do {
        printf("a: ");
        scanf("%f", &A);
        if (A == 0) {
            printf("Digite um valor diferente de 0.");
        }
    } while (A == 0);
    
    printf("b: ");
    scanf("%f", &B);
    
    printf("c: ");
    scanf("%f", &C);
    
    R = raizes(A, B, C, &X1, &X2);
    
    if (R == 0) {
        printf("\nNão existem raízes reais.");
    } else if (R == 1) {
        printf("\nExiste uma raiz real: %.2f.", X1);
    } else if (R == 2) {
        printf("\nExistem duas raízes reais.");
        printf("\n1ª raiz = %.2f.\n2ª raiz = %.2f.", X1, X2);
    }
    
    return 0;
}
