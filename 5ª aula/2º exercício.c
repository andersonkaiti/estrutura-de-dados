Considere a seguinte estrutura para representar um nó de uma lista encadeada:

struct Node {
    int data;
    struct Node* next;
};

Complete o código da função deleteNode, que remove o nó de uma lista encadeada que contém um valor específico:

void deleteNode(struct Node** headRef, int key) {

    // Armazena o nó anterior ao nó a ser removido

    struct Node* prevNode = NULL;

    // Armazena o nó atual

    struct Node* currNode = *headRef;
    
    // Percorre a lista até encontrar o nó a ser removido

    while (currNode != NULL && currNode->data != key) {
        prevNode = currNode;

        currNode = _____;
    }

    // Caso o nó a ser removido seja o primeiro nó

    if (prevNode == NULL) {
        *headRef = _____;
        free(currNode);
        return;
    }

    // Remove o nó da lista
    prevNode->next = _____;
    free(currNode);
}

Para completar o código acima, substitua as lacunas (_____) pelos trechos de código adequados.

Escolha uma opção:
a. e) currNode; currNode->next; currNode->next;
b. c) currNode->next; currNode; currNode;
--c. b) currNode->next; *currNode->next; *currNode->next;
d. d) *currNode->next; currNode; currNode->next;
e. a) *currNode->next; currNode->next; currNode->next;