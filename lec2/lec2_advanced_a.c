#include <stdio.h>

int main() {
    int from = 7;
    int to = 13;
    int baesu = 7;

    int d;

    for (d = from;d < to; ++d) {
        if (d % baesu == 0) {
            break;
        }
    }

    if (d == to) {
        if (to % baesu == 0) {
            printf("from %d to %d, minimum %d baesu is %d.\n", from, to, baesu, d);
        }
        else {
            printf("from %d to %d, no %d baesu exists.\n", from, to, baesu);
        }
    }
    else {
        printf("from %d to %d, minimum %d baesu is %d.\n", from, to, baesu, d);
    }

    return 0;
}
