#include <stdio.h>

unsigned char corRGB[10][10];
unsigned char RGB;

// Função que inicializa a cor em sua respectiva coordenada:
void inicializarCor(unsigned int x, unsigned int y, unsigned char RGB) {
    corRGB[x][y] = RGB;
}

void imprimir() { // Função para imprimir a matriz:
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", corRGB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    // Inicializando todos os componentes com a cor preta:
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            inicializarCor(i, j, 0);
        }
    }
    imprimir();
    
    // Desenho da um quadrado vermelho 2x2 no canto superior esquerdo:
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            inicializarCor(i, j, 255);
        }
    }
    imprimir();

    return 0;
}
