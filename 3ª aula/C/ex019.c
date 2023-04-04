/******************************************************************************

Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e
determina o maior elemento do array e o número de vezes que este elemento ocorreu
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15,
a função deve retorna para o programa que a chamou o valor 15 e o número 3
(indicando que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.

*******************************************************************************/

#include <stdio.h>

void maiorValor (int *array, int *maior, int *quant) {
    int i;
    *maior = array[0];
    for (i = 0; i < 9; i++) {
        if (*maior < array[i]) {
            *maior = array[i];
            *quant = 1;
        } else if (*maior == array[i]) {
            *quant += 1;
        }
    }
}

int main()
{
    int array[9] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int maior, quant;
    
    maiorValor(array, &maior, &quant);
    
    printf("Maior: %d.\nQuantidade: %d.", maior, quant);
    
    return 0;
}
