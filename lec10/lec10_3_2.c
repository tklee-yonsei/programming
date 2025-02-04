#include <stdio.h>

int count_spaces(const char* s) {
    int count = 0;

    for (; *s != '\0'; ++s) {
        if (*s == ' ') {
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
