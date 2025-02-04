#include <stdio.h>

#define NAME_LEN 10

int main() {
    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1, part2;

    printf("part1 address: %p\n", &part1);
    printf("part1.number address: %p\n", &part1.number);
    printf("part1.name address: %p\n", &part1.name);
    printf("part1.on_hand address: %p\n", &part1.on_hand);
    printf("------\n");
    printf("part2 address: %p\n", &part2);
    printf("part2.number address: %p\n", &part2.number);
    printf("part2.name address: %p\n", &part2.name);
    printf("part2.on_hand address: %p\n", &part2.on_hand);
        


    return 0;
}