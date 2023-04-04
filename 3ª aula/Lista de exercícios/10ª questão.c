/******************************************************************************

Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido.

*******************************************************************************/

#include <stdio.h>
#define T 5

int main()
{
    int array[T];
    int *p;
    
    printf("Digite os valores:\n");
    for (p = &array[0]; p < &array[T]; p++) {
        scanf("%d", p);
    }
    
    for (p = &array[0]; p < &array[T]; p++) {
        printf("Dobro de %d: %d.\n", *p, *p * 2);
    }
    
    return 0;
}
