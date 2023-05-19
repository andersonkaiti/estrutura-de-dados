/******************************************************************************

EXEMPLO DE FILA:

Uma das filas, com capacidade máxima de 10 pessoas, de um supermercado.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_FILA 10

int fila[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tamanho;
int i;

void pessoaEntra (int valor) { // pessoa entrou na fila.
    if (tamanho < MAX_FILA) {
        fila[tamanho] = valor;
        tamanho++;
    } else {
        printf("Fila lotada.\n");
    }
}

int pessoaSaiFinal () { // pessoa pagou e saiu do final da fila.
    int valor = fila[0];
    for (i = 0; i < MAX_FILA; i++) {
        fila[i] = fila[i + 1];
    }
    tamanho--;
    return valor;
}

void pessoaTrocaFila (int posicao) { // pessoa de qualquer posição da fila cansou de esperar e foi para outra fila.
    if (tamanho >= MAX_FILA || posicao >= tamanho || posicao == 0) {
        printf("Posição inválida.\n");
        return;
    }
    for (i = posicao; i < tamanho - 1; i++) {
        fila[i] = fila[i + 1];
    }
    tamanho--;
}


void imprimirFila() {
    printf("Fila: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", fila[i]);
    }
    printf("\n");
}

int main()
{
    pessoaEntra(1);
    pessoaEntra(2);
    pessoaEntra(3);
    pessoaEntra(4);
    pessoaEntra(5);
    imprimirFila();
    pessoaTrocaFila(2);
    imprimirFila();
    pessoaEntra(6);
    pessoaEntra(7);
    pessoaEntra(8);
    pessoaEntra(9);
    pessoaEntra(10);
    imprimirFila();
    pessoaEntra(11);
    int valor = pessoaSaiFinal();
    printf("Valor removido: %d\n", valor);
    imprimirFila();
    pessoaTrocaFila(7);
    imprimirFila();
    return 0;
}
