#include <stdio.h>

int main()
{
    int v[5];
    int i, j, menor, temp;
    
    printf("Digite os valores do vetor.\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < 4; i++) {
        menor = i;
        for (j = i + 1; j < 5; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        
        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
        
    }
    
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}