#include <stdio.h>

int main()
{
    int v[5];
    int i, j, escolhido;
    
    printf("Digite os valores do vetor.\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    for (i = 1; i < 5; i++) {
        escolhido = v[i];
        j = i - 1;
        
        while (j >= 0 && v[j] > escolhido) {
            v[j + 1] = v[j];
            j -= 1;
        }
        
        v[j + 1] = escolhido;
    }
    
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
