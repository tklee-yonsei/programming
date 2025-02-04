#include <stdio.h>
#include <string.h>

#define NAME_LEN 10

int main() {
  typedef struct {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
  } Part;

  Part part1 = { 322, "Monitor", 4 };
  Part part2;
  part1.number = 3;
  strcpy(part1.name, "Monitor 2");
  // part1.name = "Monitor";

  printf("%s", part1.name);

  return 0;
}
