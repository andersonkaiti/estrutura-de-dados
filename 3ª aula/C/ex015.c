/******************************************************************************

Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.

*******************************************************************************/

#include <stdio.h>

void imprimir (int *array) {
    int *p = array;
    
    while (p < array + 5) {
        printf("%d ", *p);
        p++;
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    
    imprimir(array);
    
    return 0;
}
