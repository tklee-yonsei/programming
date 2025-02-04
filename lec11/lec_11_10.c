#include <stdio.h>

#define TWO_PI 2 * 4
#define TWO_PI2 (2 * 4)

int main(void) {
    double cf = 360 / TWO_PI;
    printf("cf: %f\n", cf);
    double cf2 = 360 / TWO_PI2;
    printf("cf2: %f\n", cf2);
    
    return 0;
}
