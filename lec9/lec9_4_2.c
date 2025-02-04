#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

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

int main() {
    Node *n1 = createNode(9);
    return 0;
}
