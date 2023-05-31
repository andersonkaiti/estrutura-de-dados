#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM 100

int topo = -1;
// determina que o topo, inicialmente, seja -1, já que, ao adicionar um elemento, o topo será 0.
int pilha[MAX_TAM];

void push (int item) {
    if (topo == MAX_TAM - 1) {
        printf("Pilha cheia.\n");
        exit(1); // função da biblioteca stdlib; como o argumento é 1, retornará erro.
    }
    pilha[++topo] = item;
    // aqui é feito o pré-incremento da variável global topo e depois a atribuição do valor item à pilha.
    // o pré-incremento foi feito para simplificar o código.
}

int pop () {
    if (topo == -1) {
        printf("Pilha vazia.\n");
        exit(1);
    }
    return pilha[topo--];
}

int main() {
    char expressao[MAX_TAM];
    
    printf("Digite uma expressão matemática: ");
    fgets(expressao, MAX_TAM, stdin);
    
    for (int i = 0; expressao[i] != '\0'; i++) {
        // o caractere \0 (null) serve para identificar o fim da string, ou seja,
        // quando a expressão digitado chegar ao fim, o laço de repetição será finalizado.
        if (expressao[i] == '(') {
            push(i);
        } else if (expressao[i] == ')') {
            if (topo = -1) {
                printf("Erro: parenteses desbalanceados.\n");
                exit(1);
            }
            pop();
        }
    }
    
    if (topo == -1) {
        printf("Parenteses balanceados.\n");
    } else {
        printf("Erro: parenteses desbalanceados.\n");
        exit(1);
    }
    
    return 0;
}




