/******************************************************************************

Escreva uma função que dado um número real passado como parâmetro, retorne a parte
inteira e a parte fracionária deste número. Escreva um programa que chama esta função.
Protótipo:

void frac(float num, int* inteiro, float* frac);

*******************************************************************************/

#include <stdio.h>

void frac (float num, int *inteiro, float *frac) {
    *inteiro = (int) num;
    *frac = num - *inteiro;
}

int main()
{
    float num, fracionario;
    int inteiro;
    
    printf("Digite o valor: ");
    scanf("%f", &num);
    
    frac(num, &inteiro, &fracionario);
    
    printf("Parte inteira: %d.\n", inteiro);
    printf("Parte fracionária: %f.", fracionario);
    
    return 0;
}
