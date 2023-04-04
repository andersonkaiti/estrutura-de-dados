/******************************************************************************

Faça um programa que possua uma função para

• ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas
válidas e que devolver os 2 números lidos);

• calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a
segunda nota tem peso 2 media ponderada = (n1 + n2 ∗ 2)/3;

*******************************************************************************/

#include <stdio.h>

void lerNotas (float *nota1, float *nota2) {
    do {
        printf("Digite a 1ª nota: ");
        scanf("%f", nota1);
        
        printf("Digite a 2ª nota: ");
        scanf("%f", nota2);
        
        if (*nota1 < 0 || *nota1 > 10 || *nota2 < 0 || *nota2 > 10) {
            printf("Nota inválida. Digite novamente.\n");
        }
        
    } while (*nota1 < 0 || *nota1 > 10 || *nota2 < 0 || *nota2 > 10);
}

void medias (float *nota1, float *nota2, float *mediaSimples, float *mediaPonderada) {
    *mediaSimples = (*nota1 + *nota2) / 2;
    *mediaPonderada = (*nota1 + *nota2 * 2) / 3;
}

int main()
{
    float nota1, nota2, mediaSimples, mediaPonderada;
    
    lerNotas(&nota1, &nota2);
    medias(&nota1, &nota2, &mediaSimples, &mediaPonderada);
    
    printf("A média simples é: %.2f.\n", mediaSimples);
    printf("A média ponderada é: %.2f.", mediaPonderada);
    
    return 0;
}
