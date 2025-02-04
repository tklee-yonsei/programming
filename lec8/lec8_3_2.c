#include <stdio.h>
#include <string.h>

typedef struct {
  int id;
  char name[100];
  float salary;
} Employee;

int main() {
  int arr[2] = { 1, 2 };
  Employee department[2] = {
    {1, "Alice", 50000.0},
    {2, "Bob", 60000.0}
  };

  return 0;
}
