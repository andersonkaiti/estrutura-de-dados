/******************************************************************************

Filtro de Cores: Escreva um programa que aplique um filtro a um vetor de vetores
que representam cores. Por exemplo, o filtro pode aumentar a quantidade de
vermelho em cada cor, ou converter cada cor para escala de cinza.

*******************************************************************************/

#include <stdio.h>

void inicializar (unsigned char cor[3][3], int posicao, unsigned int R, unsigned int G, unsigned int B) {
    cor[posicao - 1][0] = (unsigned char) R;
    cor[posicao - 1][1] = (unsigned char) G;
    cor[posicao - 1][2] = (unsigned char) B;
}

void imprimir(unsigned char cor[3][3]) {
    printf("Cores RGB:\n");
    for (int i = 0; i < 3; i++) {
        printf("RED: %d | GREEN: %d | BLUE: %d\n", cor[i][0], cor[i][1], cor[i][2]);
    }
    printf("\n");
}

void aplicarFiltroVermelho (unsigned char matrizCor[3][3], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        matrizCor[i][0] += 50;
    }
}

void converterCinza (int matrizCor[3][3], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int media = (matrizCor[i][0] + matrizCor[i][1] + matrizCor[i][2]) / 2;
        matrizCor[i][0] = media;
        matrizCor[i][1] = media;
        matrizCor[i][2] = media;
    }
}

int main()
{
    unsigned char matrizCor[3][3];
    int tamanho = 3;
    
    inicializar(matrizCor, 1, 255, 0, 0);
    inicializar(matrizCor, 2, 150, 0, 0);
    inicializar(matrizCor, 3, 200, 0, 0);
    
    imprimir(matrizCor);
    
    aplicarFiltroVermelho(matrizCor, tamanho);
    
    imprimir(matrizCor);
    
    return 0;
}
