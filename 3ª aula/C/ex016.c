/******************************************************************************

Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a
variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quádruplo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    
    printf("a: %d.\n", a);
    printf("b: %d.\n", *b * 2);
    printf("c: %d.\n", **c * 3);
    printf("d: %d.", ***d * 4);
    
    return 0;
}
