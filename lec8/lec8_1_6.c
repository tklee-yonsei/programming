#include <stdio.h>

#define NAME_LEN 10

int main() {
    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1 = {528, "SSD", 10},
      part2 = {914, "Keyboard", 20};

    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part3 = {528, "SSD", 10};

    printf("-----------\n");
    part1 = part3;

    return 0;
}