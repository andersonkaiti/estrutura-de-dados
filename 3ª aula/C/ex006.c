/******************************************************************************

Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B.

*******************************************************************************/

#include <stdio.h>

int somaDobro (int *a, int *b) {
    int s;
    *a *= *a;
    *b *= *b;
    return s = *a + *b;
}

int main()
{
    int a, b, s;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    s = somaDobro(&a, &b);
    
    printf("A soma do dobro de a e b é: %d\n", s);
    printf("a: %d.\nb: %d.", a, b);
    
    return 0;
}

