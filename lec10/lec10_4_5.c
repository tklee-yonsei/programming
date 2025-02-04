#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[10] = "abcd";
    char* str2 = malloc(10);
    strcpy(str2, "abcd"); 
    char* str3 = "abce";

    if (strcmp(str1, str2) == 0) {
        printf("1-2 same!\n");
    } else {
        printf("1-2 diff!\n");
    }

    if (strcmp(str2, str3) == 0) {
        printf("2-3 same!\n");
    } else {
        printf("2-3 diff!\n");
        if (strcmp(str2, str3) > 0) {
            printf("2-3 > 0!\n");
        } else {
            printf("2-3 < 0!\n");
        }
    }

    return 0;
}
