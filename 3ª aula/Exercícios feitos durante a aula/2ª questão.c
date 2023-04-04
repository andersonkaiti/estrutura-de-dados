1ª linha: importação da biblioteca <stdio.h>;

2ª linha: início do método main, responsável pela execução do programa;

3ª linha: criação das variáveis i e j, junto à atribuição dos valores 3 e 5, respectivamente, a elas;

4ª linha: criação dos ponteiros p e q, do tipo int, com o asterisco (*);

5ª linha: atribuição do endereço de memória da variável i (&i contém o endereço) para p;

6ª linha: atribuição do endereço de memória da variável j (&j contém o endereço) para q;

7ª linha: função de saída printf para exibir os valores na tela, que são:

o 1º %d, que imprime o resultado da diferença entre os ponteiros *p e *q, ou seja, 3 - 5 = -2;
o 2º %d, que pega o endereço de p, com &, e o exibe com *, resultando em 3;
e o 3º %d, que realiza a operação 3* - *p/(*q) + 7, ou seja, a razão entre *p e *q (3 / 5), o produto do resultado por 3 e a soma por 7.

8ª linha: retorna o valor 0.