#include <stdio.h>

int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int soma, i;

void somaArray (int *array, int *soma) {
    for (i = 0; i < 10; i++) {
        *soma += array[i];
    }
}

int main()
{
    somaArray(array, &soma);
    printf("%d", soma);

    return 0;
}