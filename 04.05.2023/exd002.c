/******************************************************************************

FILA DINÂMICA.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int *fila = NULL;
int tamanho;
int i;

void desenfileirar () {
    if (tamanho > 0) {
        for (i = 0; i < tamanho - 1; i++) {
            fila[i] = fila[i + 1];
        }
        tamanho--;
        fila = realloc(fila, tamanho * sizeof(int));
    }
}

int main()
{
    printf("Hello World");

    return 0;
}
