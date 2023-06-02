#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 10

int *fila = NULL;
int posicao = 0;
int tamanho = -1;

void enfileirarFinal(int valor) {
    if (posicao >= MAXIMO) { // Verifica se a fila já está cheia.
        printf("Fila cheia.");
    } else { // Se a fila ainda não estiver cheia:
        tamanho++; // Incrementa o tamanho.
        fila = realloc(fila, tamanho * sizeof(fila)); // Realiza um redimensionamento na memória.
        fila[posicao++] = valor; // Atribui o valor à respectiva posição na fila.
        // E incrementa posicao.
    }
}

void enfileirarInicio(int valor) {
    for(int i = tamanho; i > 0; i--) { // Move todos os valores para a direita.
        fila[i] = fila[i - 1];
    }
    tamanho++;
    posicao++;
    fila = realloc(fila, tamanho * sizeof(fila)); // Realiza um redimensionamento na memória.
    fila[0] = valor; // Atribui o valor à primeira posição da fila.
}

void desenfileirarInicio() {
    if (tamanho < 0) { // Verifica se existe algum valor para desenfileirar.
        printf("Não há nada para desenfileirar, pois a fila já está vazia.\n");
    } else {
        for(int i = 0; i < tamanho; i++) { // Move todos os valores para a esquerda.
            fila[i] = fila[i + 1];
        }
        posicao--; // Decrementa posicao.
        tamanho--; // Decrementa tamanho.
        fila = realloc(fila, tamanho * sizeof(fila)); // Realiza um redimensionamento na memória.
    }
}

void desenfileirarFinal() {
    if (tamanho < 0) { // Verifica se existe algum valor para desenfileirar.
        printf("Não há nada para desenfileirar, pois a fila já está vazia.\n");
    } else {
        posicao--;
        tamanho--;
        fila = realloc(fila, tamanho * sizeof(fila));
    }
}

void exibirPrimeiroUltimo() {
    printf("Primeiro elemento: %d\nÚltimo elemento: %d\n", fila[0], fila[tamanho]);
}

void exibir() {
    printf("Fila: ");
    for(int i = 0; i < posicao; i++) {
        printf("%d ", fila[i]);
    }
    printf("\n");
}

int main()
{
    exibir();
    desenfileirarInicio();
    desenfileirarFinal();
    enfileirarFinal(2);
    enfileirarFinal(3);
    enfileirarFinal(4);
    enfileirarFinal(5);
    exibir();
    desenfileirarInicio();
    exibir();
    enfileirarInicio(10);
    exibir();
    desenfileirarFinal();
    exibir();
    exibirPrimeiroUltimo();
    
    free(fila); // Libera toda a memória alocada.

    return 0;
}
