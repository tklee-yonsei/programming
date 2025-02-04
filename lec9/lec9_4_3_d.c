#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int val);

Node *insertAfter(Node *this_node, int val) {
    Node *new_node = createNode(val);
    if (this_node->next != NULL) {
        new_node->next = this_node->next;
    }
    this_node->next = new_node;
    return new_node;
}

void printNodes(Node *current) {
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node *n1 = createNode(1);
    Node *n2 = insertAfter(n1, 2);
    Node *n3 = insertAfter(n2, 3);
    Node *n4 = insertAfter(n3, 4);
    Node *n5 = insertAfter(n4, 5);
    Node *n6 = insertAfter(n5, 6);
    Node *n7 = insertAfter(n6, 7);

    printNodes(n1);

    Node *n8 = insertAfter(n3, 9);

    printNodes(n1);
    
    return 0;
}

// 이미 설명한 구현부 ---->
Node *createNode(int val) {
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Failed to allocate memory\n");
        return NULL;
    }
    new_node->data = val;
    new_node->next = NULL;
    return new_node;
}
