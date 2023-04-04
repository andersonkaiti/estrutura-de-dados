#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[100];
    int vetor2[100];
    int vetor3[100];
    int i;
    
    for(i = 0; i < 100; i++){
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    
    for(i = 0; i < 100; i++){
        printf("\n \t Vetor1[%d] = %d \t", i, vetor1[i]);
        printf("\t Vetor2[%d] = %d \t", i, vetor2[i]);
        printf("\t Vetor3[%d] = %d \t", i, vetor3[i]);
    }

    return 0;
}