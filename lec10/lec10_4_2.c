#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "abcd";
    char str2[3];

    // strcpy(str2, str1);

    strncpy(str2, str1, sizeof(str2) - 1);
    str2[sizeof(str2) - 1] = '\0';
    printf("str2: %s\n", str2);

    return 0;
}
