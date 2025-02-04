#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int val);

int main() {
    Node *n1 = createNode(1);
    Node *n2 = createNode(2);
    n1->next = n2;
    Node *n3 = createNode(3);
    n2->next = n3;
    Node *n4 = createNode(4);
    n3->next = n4;
    Node *n5 = createNode(5);
    n4->next = n5;
    Node *n6 = createNode(6);
    n5->next = n6;
    Node *n7 = createNode(7);
    n6->next = n7;

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