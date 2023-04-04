/******************************************************************************

Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba o maior endereço.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    
    if (&x > &y) {
        printf("%p", &x);
    } else if (&y > &x) {
        printf("%p", &y);
    }
    
    return 0;
}
