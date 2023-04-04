/******************************************************************************

Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A.

*******************************************************************************/

#include <stdio.h>

void trocar (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a, b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    trocar(&a, &b);
    
    printf("\nValor de a: %d.\nValor de b: %d.", a, b);
    
    return 0;
}

