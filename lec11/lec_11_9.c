#include <stdio.h>

#define SIZE (256)

int main(void) {
    int BUFFER_SIZE;
    if (BUFFER_SIZE > SIZE) {
        puts("Error: SIZE exceeded");
    }
    
    return 0;
}
