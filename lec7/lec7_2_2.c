#include <stdio.h>

int main() {
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;
    
    int *p = &a[0];
    while(p < &a[10]) {
        sum += *p++;
        // sum += (*p)++;
    }
    printf("sum = %d\n", sum);

    return 0;
}