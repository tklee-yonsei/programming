#include <stdio.h>

int main() {
    int i;
    printf("int value : ");
    scanf("%d", &i);
    // i = scanf_modified(i);
    printf("input value is %d.\n", i);
}

// int scanf_modified(int value) {
//     return value + 1;
// }
