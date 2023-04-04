/******************************************************************************

Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e
armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.

*******************************************************************************/

#include <stdio.h>

void soma (int *a, int b) {
    *a += b;
}

int main()
{
    int a, b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    soma(&a, b);
    
    printf("a: %d.\nb: %d.", a, b);

    return 0;
}
