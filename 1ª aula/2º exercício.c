#include <stdio.h>

int main()
{
    int valores_pagos[10] = {10, 5, 2, 4, 8, 15, 20, 40, 35, 80};
    int soma = 0;
    int i;
    
    for(i = 0; i < 10; i++){
        soma += valores_pagos[i];
    }
    
    printf("O valor total pago pelo cliente foi: %d.", soma);
    
    return 0;
}
