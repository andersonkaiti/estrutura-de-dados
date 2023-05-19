/******************************************************************************

Gradiente de Cores: Escreva um programa que crie um vetor de vetores, onde cada
vetor interno representa uma cor. As cores devem formar um gradiente suave de
uma cor para outra.

*******************************************************************************/

#include <stdio.h>

void inicializar (unsigned char *cor, unsigned int R, unsigned int G, unsigned int B) {
    cor[0] = R;
    cor[1] = G;
    cor[2] = B;
}

void imprimir (unsigned char *cor) {
    printf("Cor RGB:\n");
    printf("RED: %d\n", cor[0]);
    printf("GREEN: %d\n", cor[1]);
    printf("BLUE: %d\n\n", cor[2]);
}

void imprimirGradiente (unsigned char corGradiente[3][3]) {
    printf("Gradiente de Cores:\n");
    for (int i = 0; i < 3; i++) {
        printf("RED: %d | %d | %d\n", corGradiente[0][i], corGradiente[1][i], corGradiente[2][i]);
        printf("GREEN: %d | %d | %d\n", corGradiente[0][i], corGradiente[1][i], corGradiente[2][i]);
        printf("BLUE: %d | %d | %d\n\n", corGradiente[0][i], corGradiente[1][i], corGradiente[2][i]);
    }
}

void gerarGradiente (unsigned char *corUm, unsigned char *corDois, unsigned char corGradiente[3][3], float t) {
    unsigned char corInterpolacao[3];
    
    for (int i = 0; i < 3; i++) {
        corInterpolacao[i] = (1 - t) * corUm[i] + t * corDois[i];
    }
    
    for (int i = 0; i < 3; i++) {
        corGradiente[i][0] = corUm[i];
        corGradiente[i][1] = corInterpolacao[i];
        corGradiente[i][2] = corDois[i];
    }
}

int main()
{
    unsigned char corUm[3];
    unsigned char corDois[3];
    unsigned char corGradiente[3][3];
    
    inicializar(corUm, 255, 0, 0); // RED
    inicializar(corDois, 0, 255, 0); // GREEN
    
    gerarGradiente(corUm, corDois, corGradiente, 0.5);
    imprimirGradiente(corGradiente);
    
    return 0;
}