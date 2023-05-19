/******************************************************************************

Média de Cores: Escreva uma função que aceite um vetor de vetores que representam
cores e retorne um vetor representando a cor média.

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

void calcularMedia (unsigned char matrizCor[3][3], int tamanho, unsigned char corMedia[3]) {
    int somaR = 0, somaG = 0, somaB = 0;
    
    for (int i = 0; i < tamanho; i++) {
        somaR += matrizCor[i][0];
        somaG += matrizCor[i][1];
        somaB += matrizCor[i][2];
    }
    
    corMedia[0] = somaR / tamanho;
    corMedia[1] = somaG / tamanho;
    corMedia[2] = somaB / tamanho;
    
    printf("Média:\nR: %d\nG: %d\nB: %d\n", corMedia[0], corMedia[1], corMedia[2]);
}

int main()
{
    unsigned char matrizCor[3][3];
    unsigned char corMedia[3];
    int tamanho = 3;
    
    inicializar(matrizCor, 1, 255, 0, 0);
    inicializar(matrizCor, 2, 0, 255, 0);
    inicializar(matrizCor, 3, 0, 0, 255);
    
    calcularMedia(matrizCor, tamanho, corMedia);
    
    return 0;
}
