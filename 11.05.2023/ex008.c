/******************************************************************************

Ordenar Cores: Escreva um programa que crie um vetor de vetores, onde cada vetor
interno representa uma cor. O programa deve então ordenar as cores por algum
critério, como a quantidade de vermelho, verde ou azul.

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

void ordenarVermelho (unsigned char matrizCor[3][3]) {
    unsigned char corTemp[3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (matrizCor[j][0] > matrizCor[j + 1][0]) {
                for (int k = 0; k < 3; k++) {
                    corTemp[k] = matrizCor[j][k];
                    matrizCor[j][k] = matrizCor[j + 1][k];
                    matrizCor[j + 1][k] = corTemp[k];
                }
            }
        }
    }
}

int main()
{
    unsigned char matrizCor[3][3];
    
    inicializar(matrizCor, 1, 255, 0, 0);
    inicializar(matrizCor, 2, 150, 0, 0);
    inicializar(matrizCor, 3, 200, 0, 0);
    
    imprimir(matrizCor);
    
    ordenarVermelho(matrizCor);
    
    imprimir(matrizCor);

    return 0;
}
