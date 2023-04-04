/******************************************************************************

Exercício 3: Verificar a saída após adicionar
e remover elementos alternadamente.
Adicione os elementos 10, 20 e 30 à pilha, remova
um elemento do topo, adicione o elemento 40 e remova
mais um elemento do topo.
Quais elementos aparecerão na pilha?

TERMINAL

Adicionando elemento à pilha:

Topo -> 10

Adicionando elemento à pilha:

Topo -> 20

Adicionando elemento à pilha:

Topo -> 30

Removendo elemento do topo:   

Pop -> 30

Adicionando elemento à pilha:

Topo -> 40

Removendo elemento do topo:

Pop -> 40

Exibindo elementos da pilha:

+----+
| 20 |
+----+
| 10 |
+----+

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int pilha[10];
int topo = -1;
int maximo = 10;
int i;

void push (int valor) {
    if (topo >= maximo - 1) {
        printf("Pilha cheia.");
        return;
    }
    
    printf("\nAdicionando elemento à pilha:\n\n");
    topo++;
    pilha[topo] = valor;
    printf("Topo -> %d\n", pilha[topo]);
}

void pop () {
    if (topo < 0) {
        printf("Pilha vazia.");
    }

    printf("\nRemovendo elemento do topo:\n\n");

    printf("Pop -> %d\n", pilha[topo]);
    topo--;
}

void imprimir () {
    printf("\nExibindo elementos da pilha:\n\n");
    
    printf("+----+\n");
    for (i = topo; i >= 0; i--) {
        printf("| %d |\n", pilha[i]);
        printf("+----+\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();

    push(40);

    pop();
    
    imprimir();

    return 0;
}