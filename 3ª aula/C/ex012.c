/******************************************************************************

Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.

*******************************************************************************/

#include <stdio.h>

int ordenar (int *v1, int *v2, int *v3) {
    int temp, i, r;

    for (i = 0; i < 2; i++) {
        if (*v1 > *v2) {
            temp = *v1;
            *v1 = *v2;
            *v2 = temp;
        }
        
        if (*v2 > *v3) {
            temp = *v2;
            *v2 = *v3;
            *v3 = temp;
        }
    }
    return r = (v1 == v2 && v2 == v3) ? 1 : 0;
}

int main()
{
    int v1, v2, v3, r;
    
    printf("Digite o 1º valor: ");
    scanf("%d", &v1);
    
    printf("Digite o 2º valor: ");
    scanf("%d", &v2);
    
    printf("Digite o 3º valor: ");
    scanf("%d", &v3);
    
    r = ordenar(&v1, &v2, &v3);
    
    printf("%d, %d e %d.\n", v1, v2, v3);
    printf("Os valores são iguais? %d", r);
    
    return 0;
}
