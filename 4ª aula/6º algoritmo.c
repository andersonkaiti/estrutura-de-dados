#include <stdio.h>

int buscaBinaria(int vetor[], int l, int r, int v) {
   if (r >= l) {
      int mid = l + (r - l) / 2;
      if (vetor[mid] == v)
         return mid;
      if (vetor[mid] > v)
         return buscaBinaria(vetor, l, mid - 1, v);
      return buscaBinaria(vetor, mid + 1, r, v);
   }
   return -1;
}

int main() {
   int vetor[] = {2, 5, 7, 9, 12, 15, 18, 20};
   int n = sizeof(vetor) / sizeof(vetor[0]);
   int v;
   
   printf("Digite o valor que quer encontrar no vetor: ");
   scanf("%d", &v);
   
   int resultado = buscaBinaria(vetor, 0, n - 1, v);
   if (resultado == -1) {
       printf("Valor não encontrado.");
   } else {
       printf("Valor encontrado na %dª posição.", resultado);
   }
   return 0;
}