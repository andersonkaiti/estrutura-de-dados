/******************************************************************************

Faça um programa que leia dois valores inteiros e chame uma função que receba estes
2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
segunda variável. Escreva o conteúdo das 2 variáveis na tela.

*******************************************************************************/

#include <stdio.h>

int trocarValores (int *x, int *y) {
    if (*x > *y) {
        return 0;
    } else if (*y > *x) {
        int t = *y;
        *y = *x;
        *x = t;
    }
}

int main()
{
    int x, y;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    trocarValores(&x, &y);
    
    printf("x: %d.\ny: %d.", x, y);
    
    return 0;
}

