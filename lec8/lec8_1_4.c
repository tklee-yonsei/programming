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

    printf("input part1.number: ");
    scanf("%d", &part1.number);

    printf("part1.number: %d\n", part1.number);

    return 0;
}