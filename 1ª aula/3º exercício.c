#include <stdio.h>

int main()
{
    int vetor[50];
    int soma;
    int i;
    
    for(int i = 0; i < 50; i++){
        vetor[i] = i;
    }
    
    for(int i = 0; i < 6; i++){
        if(i < 5){
            soma += vetor[i * 10];
        }
        else if(i < 6){
            soma += vetor[49];
        }
    }
    
    printf("%d", soma);


    return 0;
}
