Considere a seguinte estrutura para representar um nó de uma lista encadeada:

struct Node {
    int data;
    struct Node* next;
};

Complete o código da função reverseList, que inverte a ordem dos nós de uma lista encadeada:

void reverseList(struct Node** headRef) {

    // Armazena o nó anterior

    struct Node* prevNode = NULL;

    // Armazena o nó atual

    struct Node* currNode = *headRef;

    // Armazena o nó seguinte

    struct Node* nextNode = NULL;

    // Percorre a lista e inverte a ordem dos nós

    while (currNode != NULL) {
        nextNode = currNode->next;
        currNode->next = _____;
        prevNode = _____;
        currNode = _____;
    }

    *headRef = _____;
}

Para completar o código acima, substitua as lacunas (_____) pelos trechos de código adequados.

Escolha uma opção:
a. a) prevNode; currNode; nextNode; nextNode; prevNode; currNode;
b. d) nextNode; prevNode; currNode; prevNode; nextNode; currNode;
c. b) nextNode; prevNode; currNode; nextNode; prevNode; nextNode;
d. e) currNode; nextNode; prevNode; prevNode; nextNode; currNode;
e. c) prevNode; currNode; nextNode; prevNode; nextNode; currNode;