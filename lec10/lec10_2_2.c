#include <stdio.h>

int main() {
    char date1[8] = "June 14";
    printf("%s\n", date1);

    char *date2;
    date2 = "June 14";
    printf("%s\n", date2);

    printf("-----\n");

    // 1. 재할당
    // date1 = "July 12";   // Error
    date2 = "July 13";  // Ok

    // 2. 수정
    date1[3] = 'a';         // Ok
    // *date2 = "bef";      // Error

    return 0;
}
