#include <stdio.h>

int sum2ndArray(int a[]);

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int arr2[5][5] = {5};

    printf("arr: %p\n", arr);

    printf("arr2[0][0]: %d\n", arr2[0][0]);
    printf("arr2[1]: %p\n", arr2[1]);
    printf("arr2: %p\n", arr2);
    printf("arr2[0]: %p\n", arr2[0]);



    // int sum = sum2ndArray(a);
    // printf("sum: %d\n", sum);
}

int sum2ndArray(int a[]) {
    return 0;
}
