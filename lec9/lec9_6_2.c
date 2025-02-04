#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    printf("a: %d\n", *(int*)a);
    return (*(int*)b - *(int*)a);
}

int main() {
    int arr[] = {10, 5, 15, 12, 90, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare);  // 배열 정렬

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
