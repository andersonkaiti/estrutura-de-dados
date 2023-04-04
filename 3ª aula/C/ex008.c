/******************************************************************************

Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float array[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        array[i] = i+1;
    }
    
    for (i = 0; i < 10; i++) {
        printf("%.1f: %p.\n", array[i], &array[i]);
    }
    return 0;
}
