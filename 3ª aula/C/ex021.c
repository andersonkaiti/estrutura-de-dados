/******************************************************************************

Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. As-
socie o ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o
ponteiro (use *).

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n;
    int *p;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int array[n];
    p = array;
    
    for (i = 0; i < n; i++) {
        printf("Digite o valor de array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i] + 1);
    }
    
    return 0;
}
