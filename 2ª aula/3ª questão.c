#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
    int telefone;
};

int main()
{
    struct pessoa pessoas[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite o nome da %dª pessoa: ", i+1);
        getchar();
        fgets(pessoas[i].nome, 50, stdin);
        printf("Digite a idade da %dª pessoa: ", i+1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite o telefone da %dª pessoa: ", i+1);
        scanf("%d", &pessoas[i].telefone);
    }

    return 0;
}
