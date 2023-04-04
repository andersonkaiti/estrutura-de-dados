/******************************************************************************

Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. Não utilize
índices para percorrer o array, apenas aritmética de ponteiros.

*******************************************************************************/

#include <stdio.h>

void preencher (int *array, int x) {
    int *p = array;
    
    while (p < array + 5) {
        *p = x;
        p++;
    }
}

int main()
{
    int array[5];
    int x = 1;
    int *i = array;
    
    preencher(array, x);
    
    while (i < array + 5) {
        printf("%d ", *i);
        i++;
    }
    
    return 0;
}
