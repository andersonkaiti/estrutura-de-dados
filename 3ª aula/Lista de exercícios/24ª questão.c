/******************************************************************************

Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função.

*******************************************************************************/

#include <stdio.h>

void armazenar (int *min, int *max, int *V, int t) {
    int i;
    *min = V[0];
    *max = V[0];
    
    for (i = 0; i < t; i++) {
        if (*max < V[i]) {
            *max = V[i];
        } else if (*min > V[i]) {
            *min = V[i];
        }
    }
}

int main()
{
    int min, max, i, t;
    
    printf("Digite o tamanho do array: ");
    scanf("%d", &t);
    
    int V[t];
    
    for (i = 0; i < t; i++) {
        printf("Digite o valor de V[%d]: ", i);
        scanf("%d", &V[i]);
    }
    
    armazenar(&min, &max, V, t);
    
    printf("\nMínimo: %d.\n", min);
    printf("Máximo: %d.", max);
    
    return 0;
}
