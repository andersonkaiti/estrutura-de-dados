/******************************************************************************

Inverter Cores: Escreva uma função que aceite um vetor representando uma cor e
retorne um novo vetor representando a cor inversa.

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

void corInversa (unsigned char *cor, unsigned char *corComplementar) {
    for (int i = 0; i < 3; i++) {
        corComplementar[i] = 255 - cor[i];
    }
}

int main()
{
    unsigned char cor[3];
    unsigned char corComplementar[3];
    
    inicializar(cor, 255, 0, 0); // RED
    corInversa(cor, corComplementar);
    imprimir(corComplementar);
    
    return 0;
}
