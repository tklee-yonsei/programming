#include <stdio.h>

#define NAME_LEN 10

int main() {
  int a = 3; // 선언 & 초기화
  a = 5; // 할당


    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1 = {528, "SSD", 10},
      part2 = {528, "SSD", 10};

    printf("-----------\n");
    1 == 1;
    1 == 2;
    
    part1 == part2;
    part1 != part2;

    return 0;
}