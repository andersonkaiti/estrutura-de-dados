#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    char telefone[50];
} Pessoa;

int main()
{
    Pessoa r1;
    Pessoa *p = &r1;
    
    printf("Qual o nome: ");
    scanf("%s", p->nome);
    
    printf("Digite a idade: ");
    scanf("%d", &(p->idade));
    
    printf("Digite o número de telefone: ");
    scanf("%s", p->telefone);
    
    printf("%s\n", p->nome);
    printf("%d\n", p->idade);
    printf("%s\n", p->telefone);

    return 0;
}
