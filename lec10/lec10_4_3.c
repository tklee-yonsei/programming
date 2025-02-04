#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "abcd";
    printf("str1: %s\n", str1);
    printf("str1 length: %lu\n", strlen(str1));
    printf("str1 length: %d\n", strlen(str1));
    printf("str1 length: %d\n", (int) strlen(str1));

    return 0;
}
