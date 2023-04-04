/******************************************************************************

Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um
programa que leia N valores inteiros, imprima o array com k elementos por linha, e o
maior elemento. O valor de k também deve ser fornecido pelo usuário.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N, i;
    
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    
    int array[N];
    
    for (i = 0; i < N; i++) {
        printf("Digite o valor de vetor[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    return 0;
}
