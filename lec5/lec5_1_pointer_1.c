#include <stdio.h>

int main() {

    printf("value: %d\n", *(&value));


    int a = 50;
    int b = 30;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    printf("a address: %p\n", &a);
    printf("b address: %p\n", &b);

    int c_to_a = a;

    printf("c_to_a: %d\n", c_to_a);

    int *c_to_address_a = &a;
    int* c_to_address_b = &b;

    printf("c_to_address_a: %p\n", c_to_address_a);
    printf("c_to_address_b: %p\n", c_to_address_b);
}