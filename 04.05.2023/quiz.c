/******************************************************************************

Uma empresa quer registrar a ordem de chegada dos funcionários à empresa para
saber, em ordem, quais estão há mais tempo nela.
Como solução, um algoritmo de fila dinâmica será feito.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int *fila = NULL;
int tamanho = 0;
int i;

void adicionarIDFuncionario (int ID) {
    tamanho++;
    fila = realloc(fila, tamanho * sizeof(int));
    fila[tamanho - 1] = ID;
}

void saidaFuncionario (int ID) {
    int posicao;
    printf("O funcionário com ID: %d saiu.\n", ID);
    for (i = 0; i < tamanho; i++) {
        if (fila[i] == ID) {
            posicao = i;
            break;
        }
    }
    
    if (tamanho > 0) {
        for (i = posicao; i < tamanho; i++) {
            fila[i] = fila[i + 1];
        }
        tamanho--;
        fila = realloc(fila, tamanho * sizeof(int));
    }
}

void exibirFuncionarios () {
    printf("\n+--------------------+\nOrdem de entrada (IDs)\n+--------------------+\n");
    for (i = 0; i < tamanho; i++) {
        printf("%2dº: ID %d.\n", (i + 1), fila[i]);
    }
    printf("+--------------------+\n\n");
}

int main()
{
    adicionarIDFuncionario(1);
    adicionarIDFuncionario(2);
    adicionarIDFuncionario(3);
    exibirFuncionarios();
    saidaFuncionario(2);
    exibirFuncionarios();

    return 0;
}
