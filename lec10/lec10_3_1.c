#include <stdio.h>
#include <string.h>

int count_spaces(const char s[]) {
    int count = 0;
    int i;

    // for (i = 0; s[i] != '\0'; ++i) {
    for (i = 0; i < strlen(s); ++i) {
        if (s[i] == ' ') {
            ++count;
        }
    }

    return count;
}

int main() {
    char date1[] = "June 14 d a";
    char *date2 = "June 14 c e w";
    printf("-----\n");

    printf("%s- %d\n", date1, count_spaces(date1));
    printf("%s- %d\n", date2, count_spaces(date2));

    return 0;
}
