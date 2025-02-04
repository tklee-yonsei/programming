#include <stdio.h>
#include <string.h>

typedef union {
  int integer;
  float fp;
  char* string;
} Data;

int main() {
  Data data;

  data.integer = 2;
  printf("data.integer = %d\n", data.integer);
  printf("data.fp = %f\n", data.fp);
  data.fp = 3.14;
  printf("data.integer = %d\n", data.integer);
  printf("data.fp = %f\n", data.fp);
  data.integer = 3;
  printf("data.integer = %d\n", data.integer);
  printf("data.fp = %f\n", data.fp);

  return 0;
}
