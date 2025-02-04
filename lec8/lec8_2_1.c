#include <stdio.h>

#define NAME_LEN 10

int main() {
    struct part {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1 = {528, "SSD", 10},
      part2 = {914, "Keyboard", 20};

    struct part part3 = {322, "Monitor", 4};

    printf("part3.number: %d\n", part3.number);

    part3 = part1;

    printf("part3.number: %d\n", part3.number);

    return 0;
}