#include <stdio.h>

int main(int argc, char const *argv[]) {
    for (int i = 0; i < argc; ++i) {
        printf("%s\n", argv[i]);
    }

    printf("------\n");

    for (char** ptr = &argv[1]; *ptr != NULL; ++ptr) {
        printf("%s\n", *ptr);
    }
  
    return 0;
}
