#include <stdio.h>

char digit_to_hex_char(int digit) {
    return "0123456789ABCDEF"[digit];
}

int main() {
    char hex_char = digit_to_hex_char(11);
    printf("%c\n", hex_char);

    return 0;
}
