#include <stdio.h>

#define N 10

int main() {
    double a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("size of a array is %lu.\n", sizeof(a));
    printf("size of element of a array's first element is %lu.\n", sizeof(a[0]));
    printf("size of element of int is %lu.\n", sizeof(int));

    // int a_size = sizeof(a) / sizeof(a[0]);
    int a_size = (int) sizeof(a) / sizeof(a[0]);
    printf("length of a array is %d.\n", a_size);

    int a_size2 = (int) sizeof(a) / sizeof(int);
    printf("length of a array is %d.\n", a_size2);

    return 0;
}
