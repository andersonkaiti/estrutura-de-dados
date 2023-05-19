/******************************************************************************

Exercício 1: Soma Recursiva de Números de 1 a N

Escreva uma função recursiva em C que calcule a soma de todos os números de 1 até um
número n fornecido.

A função deve ter a seguinte assinatura:

int somaRecursiva(int n);

Onde n é o número até o qual a soma deve ser calculada. Por exemplo, para n = 5, a função
deve retornar 15, que é a soma de 1 + 2 + 3 + 4 + 5.


*******************************************************************************/

#include <stdio.h>

int somaRecursiva (int n) {
    if (n <= 1) {
        return n;
    } else {
        return n + somaRecursiva(n - 1);
    }
}

int main()
{
    int valor;
    printf("Até qual valor você quer que o número seja somado?\nAté: ");
    scanf("%d", &valor);
    printf("A soma de 1 até %d é: %d.\n", valor, somaRecursiva(valor));
    
    return 0;
}