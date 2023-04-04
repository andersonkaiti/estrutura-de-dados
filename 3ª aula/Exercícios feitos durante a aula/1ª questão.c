#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 5 + 2;
    int *p = &soma;
    
    printf("%d", *p);

    return 0;
}
