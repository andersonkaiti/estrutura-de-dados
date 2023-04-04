/******************************************************************************

Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres
das strings.

*******************************************************************************/

#include <stdio.h>

int verificaSubstring (char *str1, char *str2) {
    int i, j, f;

    for (i = 0; str1[i] != '\0'; i++) {
        f = 1;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i + j] != str2[j]) {
                f = 0;
                break;
            }
        }
        if (f == 1) {
            return 1;
        }
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Digite a 1ª string: ");
    scanf("%s", str1);

    printf("Digite a 2ª string: ");
    scanf("%s", str2);

    if (verificaSubstring(str1, str2) == 1) {
        printf("%s ocorre dentro de %s.", str2, str1);
    } else {
        printf("%s não ocorre dentro de %s.", str2, str1);
    }

    return 0;
}
