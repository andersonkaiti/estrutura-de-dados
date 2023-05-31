#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM 100

int topo = -1; // A variável global topo é inicializada com o valor -1
int pilha[MAX_TAM]; // É criado um vetor para representar a pilha

void push(int item) {
    if (topo == MAX_TAM - 1) { // Verifica se a pilha está cheia
        printf("Pilha cheia.\n");
        exit(1); // Função implementada pela biblioteca <stdlib.h>
    }
    pilha[++topo] = item; // Adiciona o item ao topo da pilha
    // Foi feito um pré-incremento ++topo para simplificar o código
}

int pop() {
    if (topo == -1) { // Verifica se a pilha está vazia
        printf("Pilha vazia.\n");
        exit(1);
    }
    return pilha[topo--]; // Remove e retorna o item do topo da pilha
}

int verificaParenteses(char expressao[]) {
    for (int i = 0; expressao[i] != '\0'; i++) { // Percorre a string inteira
    // o caractere \0 (null) serve para identificar o fim da string, ou seja, quando a expressão digitada chegar ao fim, o laço de repetição será finalizado.
        if (expressao[i] == '(') { // Verifica se o caractere é uma abertura de parenteses
            push(i); // Adiciona o índice atual à pilha
        } else if (expressao[i] == ')') { // Verifica se o caractere é um fechamento de parenteses
            if (topo == -1) { // Verifica se a pilha está vazia
                printf("Erro: parenteses desbalanceados.\n");
                return 0;
            }
            pop(); // Remove o item do topo da pilha
        }
    }

    if (topo == -1) { // Verifica se a pilha está vazia (parênteses balanceados)
        printf("Parenteses balanceados.\n");
        return 1;
    } else {
        printf("Erro: parenteses desbalanceados.\n");
        return 0;
    }
}

int main() {
    char expressao[MAX_TAM]; // Vetor que armazena a expressão matemática

    printf("Digite uma expressão matemática: ");
    fgets(expressao, MAX_TAM, stdin); // Lê a expressão digitada pelo usuário incluindo espaços

    int resultado = verificaParenteses(expressao); // Chama a função verificaParenteses

    return resultado;
}
