#include <stdio.h>

int main() {
    // char str1[];
    // char str2[];
    // str1 = "abce";
    // str2 = str1;

    char str3[] = "abcd";
    char str4[] = "abcd";

    if (str3 == str4) {
        printf("str3 == str4\n");
    }

    return 0;
}
