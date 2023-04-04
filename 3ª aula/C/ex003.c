/******************************************************************************

Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Digite o valor da 1ª variável: ");
    scanf("%d", &x);
    
    printf("Digite o valor da 2ª variável: ");
    scanf("%d", &y);
    
    if (&x > &y) {
        printf("O contéudo do maior endereço é: %d", x);
    } else if (&y > &x) {
        printf("O conteúdo do maior endereço é: %d", y);
    }
    
    return 0;
}
