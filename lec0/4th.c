#include<stdio.h>

int main() {
    double a = 1.1+0.1;
    printf("a: %f\n", a);
    double b = 1.2;
    printf("b: %f\n", b);

    if (a==b) {
        printf("equal\n");
    } else {
        printf("not equal\n");
    }

    if (1.2==1.2) {
        printf("equal\n");
    } else {
        printf("not equal\n");
    }
    return 0;
}
