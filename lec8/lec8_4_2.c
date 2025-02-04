#include <stdio.h>
#include <string.h>

typedef union {
  int integer;
  float fp;
  char* string;
} Data;

int main() {
  Data data[2];

  data[0].integer = 2;
  data[1].fp = 3.14;
  
  printf("data[0].integer = %d\n", data[0].integer);
  printf("data[1].integer = %d\n", data[1].integer);
  printf("data[0].fp = %f\n", data[0].fp);
  printf("data[1].fp = %f\n", data[1].fp);

  return 0;
}
