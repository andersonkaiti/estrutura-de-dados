/******************************************************************************

Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função.

*******************************************************************************/

#include <stdio.h>

void armazenar (int *min, int *max, int *array, int t) {
    int i;
    *min = array[0];
    *max = array[0];
    
    for (i = 0; i < t; i++) {
        if (*max < array[i]) {
            *max = array[i];
        } else if (*min > array[i]) {
            *min = array[i];
        }
    }
}

int main()
{
    int min, max, i, t;
    
    printf("Digite o tamanho do array: ");
    scanf("%d", &t);
    
    int array[t];
    
    for (i = 0; i < t; i++) {
        printf("Digite o valor de aray[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    armazenar(&min, &max, array, t);
    
    for (i = 0; i < t; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\nMínimo: %d.\n", min);
    printf("Máximo: %d.", max);
    
    return 0;
}
