#include <stdio.h>
#include <stdlib.h> // biblioteca necessária para gerar números aleatórios.

int main() {
    int vetor[100];
    int numero, encontrado;

    for(int i = 0; i < 100; i++){
        vetor[i] = rand() % 100;
    }
    printf("Digite um número de 0 a 99: ");
    scanf("%d", &numero);
    
    for(int i = 0; i < 100; i++){
        if(vetor[i] == numero)
        {
            encontrado = 1;
            break;
        }
    }
    
    if(encontrado == 1){
        printf("O número %d foi encontrado no vetor.", numero);
    }
    else{
        printf("O número %d não foi encontrado no vetor.", numero);
    }
    return 0;
}