#include <stdio.h>

int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int i;

void inverterArray (int *array) {
    int arrayInvertido[10];
    int j = 9;
    
    for (i = 0; i < 10; i++) {
        arrayInvertido[i] = array[j];
        j--;
    }
    
    for (i = 0; i < 10; i++) {
        array[i] = arrayInvertido[i];
    }
}

int main()
{
    inverterArray(array);
    for (i = 0; i < 10; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
