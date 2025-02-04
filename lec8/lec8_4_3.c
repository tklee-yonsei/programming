#include <stdio.h>
#include <string.h>

typedef struct {
  char type;  // 'i'는 int, 'f'는 float, 's'는 string
  union {
    int i;
    float f;
    char* s;
  } value;
} TaggedUnion;

void printValue(TaggedUnion* tu);

int main() {
  TaggedUnion tu1 = { 'i', {3} };
  TaggedUnion tu2 = { 'f', {0} };
  tu2.value.f = 3.14;
  TaggedUnion tu3 = { 's', {0} };
  tu3.value.s = "abcd";

  TaggedUnion tu_array[3] = { tu1, tu2, tu3 };
  for (int i = 0; i < 3; i++) {
    printf("tu%d ---->\n", i);
    printValue(&tu_array[i]);
  }

  return 0;
}

void printValue(TaggedUnion* tu) {
  switch (tu->type) { // ->는 tu 안의 type을 가리킨다.
  case 'i':
    printf("Integer: %d\n", tu->value.i);
    break;
  case 'f':
    printf("Float: %f\n", tu->value.f);
    break;
  case 's':
    printf("String: %s\n", tu->value.s);
    break;
  }
}