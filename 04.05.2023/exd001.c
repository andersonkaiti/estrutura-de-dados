/******************************************************************************

PILHA DINÂMICA

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h> // biblioteca para utilizar realloc.

int *pilha = NULL; // não há nenhum espaço alocado para a pilha.
int topo = -1; // a pilha não tem nada ainda. caso um valor seja adicionado, a posição dele seria 0.
int maximo = 0;

void push (int valor) { // adiciona valor à pilha
    topo++;
    maximo++;
    pilha = realloc(pilha, maximo * sizeof(int));
    /* realloc redimensiona a memória alocada.
    pilha é um ponteiro para um bloco de memória.
    maximo * sizeof(int) calcula a quantidade de memória necessária.
    sizeof obtém o tamanho do tipo int.
    */
    pilha[topo] = valor;
}

void pop () {
    if (topo < 0) {
        printf("Pilha vazia.\n");
    }
    topo--;
    maximo--;
    pilha = realloc(pilha, maximo * sizeof(int));
}

void imprimir () {
    printf("Pilha: ");
    for (int i = 0; i < maximo; i++) {
        printf("%d ", pilha[i]);
    }
    printf("\n");
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    pop();
    imprimir();

    return 0;
}
