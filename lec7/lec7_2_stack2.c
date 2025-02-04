#include <stdio.h>

#define STACK_SIZE (100)

int g_contents[STACK_SIZE];
// int g_top = 0;
int* top_ptr = &g_contents[0];

void stack_overflow() {
    printf("OVERFLOW!");
}

int stack_underflow() {
    printf("UNDERFLOW!");
    return -1;
}

void make_empty(void) {
    // g_top = 0;
    top_ptr = &g_contents[0];
}

int is_empty(void) {
    // return g_top == 0;
    return top_ptr == &g_contents[0];
}

int is_full(void) {
    // return g_top == STACK_SIZE;
    return top_ptr == &g_contents[STACK_SIZE];
}

void push(int item) {
    if (is_full()) {
        stack_overflow();
    }
    else {
        // g_contents[g_top++] = item;
        *(top_ptr++) = item;
    }
}

int pop(void) {
    if (is_empty()) {
        return stack_underflow();
    }
    else {
        // return g_contents[--g_top];
        return *(--top_ptr);
    }
}

void print_stack() {
    // for (int i = 0; i < g_top;i++) {
    //     printf("%d: %d\n", i, g_contents[i]);
    // }
    for (int i = 0, *ptr = &g_contents[0]; ptr < top_ptr; ptr++, i++) {
        printf("%d: %d\n", i, *ptr);
    }
}

int main() {
    push(3);
    push(5);
    push(9);

    printf("push 3, 5, 9\n");
    print_stack();
    printf("----\n");

    pop();
    
    printf("pop 1\n");
    print_stack();
    printf("----\n");

    pop();
    
    printf("pop 2\n");
    print_stack();
    printf("----\n");

    return 0;
}