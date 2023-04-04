#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p[5];
    int v[5] = {8, 5, 7, 10, 11};
    
    for (int i = 0; i < 5; i++) {
        p[i] = &v[i];
        printf("%d\n", *p[i]);
    }

    return 0;
}
