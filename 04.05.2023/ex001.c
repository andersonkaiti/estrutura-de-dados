#include <stdio.h>

int pilha[10];
int topo = -1;
int maximo = 10;
int i;

void push (int valor) {
    if (topo >= maximo - 1) {
        printf("Pilha cheia.\n");
    }
    printf("Adicionando elemento à pilha.\n");
    topo++;
    pilha[topo] = valor;
    printf("Topo -> %d\n", pilha[topo]);
}

void pop () {
    if (topo < 0) {
        printf("Pilha vazia.\n");
    }
    printf("Removendo elemento do topo.\n");
    printf("Pop -> %d\n", pilha[topo]);
    topo--;
}

int main()
{
    return 0;
}
