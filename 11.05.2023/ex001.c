/******************************************************************************

1. Crie um Vetor de Cores: Crie um vetor para representar uma cor RGB e inicialize-o com a cor branca.

*******************************************************************************/

#include <stdio.h>

void inicializar (unsigned char *cor, unsigned int R, unsigned int G, unsigned int B) {
    cor[0] = R;
    cor[1] = G;
    cor[2] = B;
}

void imprimir (unsigned char *cor) {
    printf("Cores RGB:\n");
    printf("RED: %d\n", cor[0]);
    printf("GREEN: %d\n", cor[1]);
    printf("BLUE: %d\n", cor[2]);
}

int main()
{
    unsigned char cor[3];
    inicializar(cor, 255, 255, 255);
    imprimir(cor);

    return 0;
}
