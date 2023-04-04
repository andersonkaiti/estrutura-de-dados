/******************************************************************************

Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[5];
    int *p = array;
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i] * 2);
    }
    
    return 0;
}
