/******************************************************************************

Verificar Igualdade de Cores: Escreva uma função que aceite dois vetores que
representam cores e retorne se eles representam a mesma cor.

*******************************************************************************/

#include <stdio.h>

void inicializar (unsigned char *cor, unsigned int R, unsigned int G, unsigned int B) {
    cor[0] = R;
    cor[1] = G;
    cor[2] = B;
}

void verificarIgualdade (int retorno) {
    if (retorno == 0) {
        printf("Não há igualdade.\n");
    } else {
        printf("Há igualdade.\n");
    }
}

int igualdade (unsigned char *corUm, unsigned char *corDois) {
    for (int i = 0; i < 3; i++) {
        if (corUm[i] != corDois[i]) {
            return 0;
        } else {
            return 1;
        }
    }
}

int main()
{
    unsigned char corUm[3];
    unsigned char corDois[3];
    
    inicializar(corUm, 255, 0, 0); // RED
    inicializar(corDois, 255, 0, 0); // RED
    
    int retorno = igualdade(corUm, corDois);
    verificarIgualdade(retorno);
    
    inicializar(corUm, 255, 0, 0); // RED
    inicializar(corDois, 0, 255, 0); // GREEN
    
    retorno = igualdade(corUm, corDois);
    verificarIgualdade(retorno);

    return 0;
}
