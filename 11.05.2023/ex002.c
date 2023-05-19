/******************************************************************************

Alterar Cores: Escreva um programa que altere a cor representada no vetor para vermelho,
verde e azul, respectivamente, imprimindo a cor após cada alteração.

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

int main()
{
    unsigned char cor[3];
    
    inicializar(cor, 255, 0, 0); // RED
    imprimir(cor);
    
    inicializar(cor, 0, 255, 0); // GREEN
    imprimir(cor);
    
    inicializar(cor, 0, 0, 255); // BLUE
    imprimir(cor);
    
    return 0;
}
