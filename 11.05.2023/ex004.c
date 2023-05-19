/******************************************************************************

Misturar Cores: Escreva uma função que aceite dois vetores que representam cores
e retorne um novo vetor representando a cor que é a mistura dessas duas cores.

*******************************************************************************/

#include <stdio.h>

int i;

void inicializar (unsigned char *cor, unsigned int R, unsigned int G, unsigned int B) {
    cor[0] = R;
    cor[1] = G;
    cor[2] = B;
}

void imprimir (unsigned char *corMistura) {
    printf("Cor RGB misturada:\n");
    printf("RED: %d\n", corMistura[0]);
    printf("GREEN: %d\n", corMistura[1]);
    printf("BLUE: %d\n\n", corMistura[2]);
}

void misturaCor (unsigned char *corUm, unsigned char *corDois, unsigned char *corMistura) {
    for (i = 0; i < 3; i++) {
        corMistura[i] = (corUm[i] + corDois[i]) / 2;
    }
}

int main()
{
    unsigned char corUm[3];
    unsigned char corDois[3];
    
    inicializar(corUm, 255, 0, 0); // RED
    inicializar(corDois, 0, 255, 0); // GREEN
    
    unsigned char corMistura[3];
    
    misturaCor(corUm, corDois, corMistura);

    imprimir(corMistura);

    return 0;
}
