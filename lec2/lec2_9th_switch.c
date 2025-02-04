#include <stdio.h>

int main() {
    int var_score = 85;

    if (var_score > 90) {
        printf("A grade\n");
    } else if (var_score > 80) {
        printf("B grade\n");
    } else if (var_score > 70) {
        printf("C grade\n");
    } else {
        printf("F grade\n");
    }

    return 0;
}
