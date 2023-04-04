/******************************************************************************

Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de
cada variável usando os ponteiros. Imprima os valores das variáveis antes e após
a modificação.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 1;
    float r = 1.5;
    char c = 'a';
    
    int *pint = &i;
    float *pfloat = &r;
    char *pchar = &c;
    
    printf("Antes da modificação.\nInteiro: %d;\nReal: %.2f;\nChar: %c.\n", i, r, c);
    
    *pint = 2;
    *pfloat = 2.5;
    *pchar = 'b';
    
    printf("\nDepois da modificação.\nInteiro: %d;\nReal: %.2f;\nChar: %c.", *pint, *pfloat, *pchar);
    
    return 0;
}
