#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *array = malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        array[i] = i;
    }

    printf("array address: %p\n", array);



    // 배열 크기 확장
    int new_size = 10;
    int *new_array = realloc(array, new_size * sizeof(int));
    if (new_array == NULL) {
        printf("Memory reallocation failed\n");
        free(array);
        return -1;
    }
    array = new_array;
    printf("array address 2: %p\n", array);

    for (int i = n; i < new_size; i++) {
        array[i] = i;
    }

    for (int i = 0; i < new_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
