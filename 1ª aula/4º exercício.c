#include <stdio.h>

int main() {
    float notas[10];
    float soma;
    float media;
    
    for(int i = 0; i < 10; i++){
        printf("Digite a nota do %dº aluno: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma / 10;
    
    printf("\nA soma das notas dos alunos da 6ª série B foi: %.2f.\nA média foi de: %.2f", soma, media);

    return 0;
}