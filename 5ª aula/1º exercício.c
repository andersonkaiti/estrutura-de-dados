Considere a seguinte estrutura para representar um nó de uma lista encadeada: 

struct Node {
    int data;
    struct Node* next;
};

Complete o código da função insertAtEnd, que insere um novo elemento no final da lista encadeada:

void insertAtEnd(struct Node** headRef, int newData) {

    // Aloca memória para um novo nó

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = newData;

    newNode->next = NULL;

    // Caso a lista esteja vazia, o novo nó é o primeiro nó

    if (*headRef == NULL) {

        *headRef = _____;

        return;

    }

        // Percorre a lista até o último nó

    struct Node* lastNode = *headRef;

    while (lastNode->next != NULL) {

        lastNode = _____;

    }

    

    // Insere o novo nó no final da lista

    lastNode->next = _____;

}

Escolha a opção que completa corretamente as lacunas (_____):

Escolha uma opção:
a. d) &newNode; lastNode->next; &newNode;
b. e) newNode->next; lastNode; newNode;
--c. a) newNode; lastNode->next; newNode;
d. c) newNode; *lastNode->next; newNode;
e. b) &newNode; *lastNode->next; &newNode;