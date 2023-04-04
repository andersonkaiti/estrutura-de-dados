#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
    int telefone;
};

int main()
{
    struct pessoa pessoa1;
    printf("Digite o seu nome: ");
    getchar();
    fgets(pessoa1.nome, 50, stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite o número do seu telefone: ");
    scanf("%d", &pessoa1.telefone);

    return 0;
}
