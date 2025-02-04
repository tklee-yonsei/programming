#include <stdio.h>

#define PI (3.14159)
#define TWO_PI (2 * PI)
#define SIZE (256)

int main(void) {
    printf("%f\n", TWO_PI);

    int BUFFER_SIZE;
    if (BUFFER_SIZE > SIZE) {
        puts("Error: SIZE exceeded");
    }
    
    return 0;
}
