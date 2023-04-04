#include <stdio.h>
#include <string.h>

struct cadastrolivros{
    int codigo;
    char titulo[50];
    char assunto[50];
    int numero_paginas;
    int ano;
    char editora[50];
};

int main()
{
    struct cadastrolivros livro;
    printf("Digite o código do livro: ");
    scanf("%d", &livro.codigo);
    printf("Digite o título do livro: ");
    getchar();
    fgets(livro.titulo, 50, stdin);
    printf("Digite o assunto do livro: ");
    getchar();
    fgets(livro.assunto, 50, stdin);
    printf("Digite o número de páginas do livro: ");
    scanf("%d", &livro.numero_paginas);
    printf("Digite o ano do livro: ");
    scanf("%d", &livro.ano);
    printf("Digite a editora do livro: ");
    getchar();
    fgets(livro.editora, 50, stdin);

    return 0;
}
