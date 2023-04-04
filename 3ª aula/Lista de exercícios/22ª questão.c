/******************************************************************************

Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
então a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma
deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.

*******************************************************************************/

#include <stdio.h>

int somaArrays (int *array1, int *array2, int *array3, int len1, int len2) {
    int i;
    if (len1 == len2) {
        for (i = 0; i < 3; i++) {
            *(array3 + i) = *(array1 + i) + *(array2 + i);
        }
        
        return 1;
    } else if (len1 != len2) {
        return 0;
    }
}

int main()
{
    int array1[3] = {1, 2, 3};
    int array2[3] = {1, 2, 3};
    int array3[3];
    int len1 = sizeof(array1) / sizeof(int);
    int len2 = sizeof(array2) / sizeof(int);
    int r, i;
    
    r = somaArrays(array1, array2, array3, len1, len2);
    
    for (i = 0; i < 3; i++) {
        printf("array1[%d] + array2[%d]: array3[%d] = %d.\n", i, i, i, *(array3 + i));
    }
    
    printf("\nRetorno: %d.", r);
    
    
    return 0;
}
