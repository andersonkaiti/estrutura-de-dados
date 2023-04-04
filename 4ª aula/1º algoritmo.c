#include <stdio.h>

int main()
{
    int i, j, temp;;
    int vetor[5];
    
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    
    printf("Valores na ordem: ");
    
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
