/******************************************************************************

Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[5];
    int *p[5];
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &array[i]);
        p[i] = &array[i];
    }
    
    for (i= 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("Endereço do array[%d] = %d: %p.\n", i + 1, array[i], p[i]);
        }
    }
    
    return 0;
}
