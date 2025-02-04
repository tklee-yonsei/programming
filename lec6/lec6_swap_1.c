#include <stdio.h>

void swap(int *val_a, int *val_b);

int main() {
    int a = 5;
    int b = 3;

    printf("a: %d / %p\n", a, &a);
    printf("b: %d / %p \n", b, &b);

    swap(&a, &b);

    printf("------\n");
    printf("a: %d / %p\n", a, &a);
    printf("b: %d / %p \n", b, &b);
}

void swap(int *val_a, int *val_b) {
    int temp = *val_a;  // 5
    *val_a = *val_b;  // 3
    *val_b = temp;  // 5
}
