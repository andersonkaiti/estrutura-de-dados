/******************************************************************************

Implemente uma função que receba como parâmetro um array de números reais de
tamanho N e retorne quantos números negativos há nesse array. Essa função deve
obedecer ao protótipo:

int negativos(float *vet, int N);

*******************************************************************************/

#include <stdio.h>

int negativos (float *vet, int N) {
    int i;
    int neg;
    for (i = 0; i < N; i++) {
        if (vet[i] < 0) {
            neg++;
        }
    }
    return neg;
}

int main()
{
    int N, i, neg;
    
    printf("Digite quantos valores o vetor terá: ");
    scanf("%d", &N);
    
    float vet[N];
    
    for (i = 0; i < N; i++) {
        printf("Digite o valor de vet[%d]: ", i);
        scanf("%f", &vet[i]);
    }
    
    neg = negativos(vet, N);
    
    printf("Há %d números negativos nesse array.", neg);
    
    return 0;
}
