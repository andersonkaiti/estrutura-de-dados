#include <stdio.h>

int fila[10];
int tamanho = 0;
int i;

void enfileirar (int valor) {
    if (tamanho < 10) {
        fila[tamanho] = valor;
        tamanho++;
    }
}

int desenfileirar () {
    int valor = fila[0];
    for (i = tamanho; i >0; i++) {
        fila[i] = fila[i + 1];
    }
    tamanho--;
    return valor;
}

void imprimir () {
    printf("Fila: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", fila[i]);
    }
    printf("\n");
}

int main()
{
    enfileirar(2);
    enfileirar(3);
    enfileirar(4);
    enfileirar(5);
    
    imprimir();

    return 0;
}
