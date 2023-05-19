/******************************************************************************

Exercício 2: Sequência de Fibonacci Recursiva

A sequência de Fibonacci é uma série de números onde cada número é a soma dos dois
anteriores. Os dois primeiros números da sequência são 0 e 1.

Escreva uma função recursiva em C que calcule o n-ésimo número na sequência de Fibonacci.
A função deve ter a seguinte assinatura:

int fibonacciRecursivo(int n);

Onde n é a posição na sequência de Fibonacci. Por exemplo, para n = 7, a função deve retornar
8, que é o sétimo número na sequência de Fibonacci (0, 1, 1, 2, 3, 5, 8).

OBS.: A série de Fibonacci inicia no número um e os próximos números são sempre a soma dos
dois números anteriores, portanto, 1, 1, 2, 3, 5, 8, 13, 21, 34 e assim por diante. E a razão entre
esses números é chamada de Phi, que corresponde a 1,618. Esses números representariam o
equilíbrio perfeito, sendo encontrados em muitas obras arquitetônicas.

*******************************************************************************/

#include <stdio.h>

int Fibonacci (int n) {
    if (n <= 1) {
        return n;
    } else {
        return Fibonacci(n - 2) + Fibonacci(n - 1);
    }
}

int main()
{
    int posicao;
    printf("Qual posição da sequência de Fibonacci você quer saber? ");
    scanf("%d", &posicao);
    printf("O valor da %dª posição da sequência de Fibonacci é %d.\n", posicao, Fibonacci(posicao));

    return 0;
}