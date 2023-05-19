/******************************************************************************

Clarear e Escurecer Cores: Escreva duas funções que aceitem um vetor representando
uma cor e um fator de brilho. A função de clarear deve aumentar o brilho da cor
pelo fator dado, e a função de escurecer deve diminuir o brilho da cor pelo fator dado.

*******************************************************************************/

#include <stdio.h>

int i;

void inicializar (unsigned char *cor, unsigned int R, unsigned int G, int B) {
    cor[0] = R;
    cor[1] = G;
    cor[2] = B;
}

void clarearCor (unsigned char *cor, float fator) {
    for (i = 0; i < 3; i++) {
        cor[i] = cor[i] + (unsigned)((255 - cor[i]) * fator);
    }
}

void escurecerCor (unsigned char *cor, float fator) { // escurece a cor em 50%
    for (i = 0; i < 3; i++) {
        cor[i] = cor[i] - (unsigned)(cor[i] * fator);
    }
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
    
    clarearCor(cor, 0.5);
    imprimir(cor);
    
    escurecerCor(cor, 0.5);
    imprimir(cor);

    return 0;
}
