#include <stdio.h>

#define NAME_LEN 10

int main() {
    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1 = {528, "SSD", 10},
      part2 = {914, "Keyboard", 20};

    printf("part1.number: %d\n", part1.number);
    printf("part1.name: %s\n", part1.name);
    printf("part1.on_hand: %d\n", part1.on_hand);

    printf("-----------\n");
    part1.number = 258;
    part1.on_hand++;

    printf("part1.number: %d\n", part1.number);
    printf("part1.name: %s\n", part1.name);
    printf("part1.on_hand: %d\n", part1.on_hand);

    return 0;
}