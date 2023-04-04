#include <stdio.h>z
#define MAX_TAM 100

int main () {
    char expressao[MAX_TAM];
    int quant = -1, i = 0; // a variável quant começa com -1 porque o índice da primeira posição de char expressao é 0, então, ao realizar o primeiro incremento, quant será 0.

    printf("Digite uma expressão: ");
    fgets(expressao, MAX_TAM, stdin); // o último caractere sempre será \n.
    
    while (expressao[i] != '\0') {
        quant++; // conta quantas letras existem em expressao, incluindo o \n do fgets.
        i++; // índice para terminar o laço de repetição while.
    }

    if (expressao[quant - 1] == ')') { // remove o \n da função fgets, o que faz o if conferir se o último caractere é igual a ).
        printf("Expressão balanceada.");
    } else {
        printf("Expressão desbalanceada.");
    }
    
    return 0;
}