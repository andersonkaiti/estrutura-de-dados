#include <stdio.h>

int main()
{
    int vetor[5];
    int i, n, p, encontrou;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite o valor que deseja encontrar no vetor: ");
    scanf("%d", &n);
    
    for (i = 0; i < 5; i++) {
        if (vetor[i] == n) {
            encontrou = 1;
        } else {
            encontrou = 2;
        }
    }
    
    if (encontrou == 2) {
        printf("O número não foi encontrado no vetor.");
    } else if (encontrou == 1) {
        printf("O númer foi encontrado no vetor.");
    }

    return 0;
}
