#include <stdio.h>

int main()
{
    int v[5];
    int i;
    
    printf("Digite cinco valores inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("%dº valor: ", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("\nValores digitados: ");
    for (i = 0; i < 5; i++) {
        if (i == 3) {
            printf("%d e %d.", v[3], v[4]);
            break;
        }
        printf("%d, ", v[i]);
    }

    return 0;
}
